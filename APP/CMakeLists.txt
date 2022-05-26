CMAKE_MINIMUM_REQUIRED(VERSION 3.22)

PROJECT(Wheel_Chair)

set(CMAKE_GENERATOR CACHE STRING "Unix Makefiles")
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_CXX_COMPILER avr-g++ CACHE STRING "C++ compiler" FORCE)
set(CMAKE_C_COMPILER avr-gcc CACHE STRING "C compiler" FORCE)
set(CMAKE_OBJCOPY      avr-objcopy CACHE STRING "avr-objcopy" FORCE)

set(CMAKE_C_FLAGS "-mmcu=atmega32 -O1 -DF_CPU=8000000UL")


#file(GLOB_RECURSE SRC_FILES  ${CMAKE_CURRENT_SOURCE_DIR} "*.c")
#file(GLOB_RECURSE HEADER_FILES "*.h")


add_executable( ${PROJECT_NAME}.elf 
                            ${CMAKE_CURRENT_SOURCE_DIR}/main.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/HC_05/HC05_program.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/L298/L298_program.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/LED/LED_program.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/../MCAL/01-DIO/DIO_program.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/../MCAL/02-UART/UART_program.c
                            ${CMAKE_CURRENT_SOURCE_DIR}/Wheel_Chair/wheel_chair.c
)  
target_include_directories( ${PROJECT_NAME}.elf PUBLIC

                            ${CMAKE_CURRENT_SOURCE_DIR}/../MCAL/01-DIO
                            ${CMAKE_CURRENT_SOURCE_DIR}/../MCAL/02-UART
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/L298
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/HC_05
                            ${CMAKE_CURRENT_SOURCE_DIR}/../HAL/LED
                            ${CMAKE_CURRENT_SOURCE_DIR}/../LIB
                            ${CMAKE_CURRENT_SOURCE_DIR}/Wheel_Chair

)         
add_custom_target(flash ALL
                DEPENDS ${PROJECT_NAME}.elf
                COMMAND avr-objcopy -j .text -j .data -O ihex ${PROJECT_NAME}.elf ${PROJECT_NAME}.hex
                ) 
                
add_custom_target(burn ALL
                DEPENDS flash 
                COMMAND  avrdude -c usbasp -p m32 -B 0.5 -U flash:w:"${PROJECT_NAME}.hex":a 
)


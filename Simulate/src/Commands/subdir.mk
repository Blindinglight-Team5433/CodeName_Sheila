################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Elevator.cpp \
../src/Commands/HomeCommand.cpp \
../src/Commands/PickupCommand.cpp \
../src/Commands/cmdDataDashboard.cpp \
../src/Commands/cmdJoysticks.cpp 

OBJS += \
./src/Commands/Elevator.o \
./src/Commands/HomeCommand.o \
./src/Commands/PickupCommand.o \
./src/Commands/cmdDataDashboard.o \
./src/Commands/cmdJoysticks.o 

CPP_DEPS += \
./src/Commands/Elevator.d \
./src/Commands/HomeCommand.d \
./src/Commands/PickupCommand.d \
./src/Commands/cmdDataDashboard.d \
./src/Commands/cmdJoysticks.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\workspace\BlindingLight_Shelia_c.2/src" -IC:\Users\Steve/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.1 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



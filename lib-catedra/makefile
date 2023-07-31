-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: libList.so

# Tool invocations
libList.so: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	@echo obj: $(OBJS) $(USER_OBJS) $(LIBS)
	mkdir -p ./debug ./build
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"./debug/libList.d" -MT"./libList.o" -o "./debug/libList.o" "./List.cpp"
	g++ -shared -o "./build/libList.so" ./debug/libList.o
	sudo cp ./build/libList.so /usr/local/lib
	export LD_LIBRARY_PATH=/usr/local/lib
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(LIBRARIES)$(OBJS)$(C_DEPS) libList.so
	rm  ./build/*
	rm -rf ./debug
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
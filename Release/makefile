################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/subdir.mk
-include HAL/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
RedKitDrives_FreeImplement.lss \

FLASH_IMAGE += \
RedKitDrives_FreeImplement.hex \

EEPROM_IMAGE += \
RedKitDrives_FreeImplement.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: RedKitDrives_FreeImplement.elf secondary-outputs

# Tool invocations
RedKitDrives_FreeImplement.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,RedKitDrives_FreeImplement.map -mmcu=atmega32 -o "RedKitDrives_FreeImplement.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

RedKitDrives_FreeImplement.lss: RedKitDrives_FreeImplement.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S RedKitDrives_FreeImplement.elf  >"RedKitDrives_FreeImplement.lss"
	@echo 'Finished building: $@'
	@echo ' '

RedKitDrives_FreeImplement.hex: RedKitDrives_FreeImplement.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex RedKitDrives_FreeImplement.elf  "RedKitDrives_FreeImplement.hex"
	@echo 'Finished building: $@'
	@echo ' '

RedKitDrives_FreeImplement.eep: RedKitDrives_FreeImplement.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex RedKitDrives_FreeImplement.elf  "RedKitDrives_FreeImplement.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: RedKitDrives_FreeImplement.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 RedKitDrives_FreeImplement.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) RedKitDrives_FreeImplement.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

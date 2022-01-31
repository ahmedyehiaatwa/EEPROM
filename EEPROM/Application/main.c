/*
 * I2C_Driver1.c
 *
 * Author : Ahmed
 */ 

#include "../MCAL/I2C/I2C.h"
#include "../ECUAL/LCD/LCD.h"

#define F_CPU 16000000




int main(void)
{
  EEPROM_Init();
	uint8_t data= 50;
	
	
    while (1) 
    {
		EEPROM_WriteData(data, 0x05);
		EEPROM_ReadData(0x05);
    }
}


uint16_t AS5600_RawAngle(){
	uint8_t angle[2];
	if(HAL_I2C_Mem_Read(&hi2c2, 0x36<<1, 0x0E, I2C_MEMADD_SIZE_8BIT, angle, 2, 200)!=HAL_OK){
		return HAL_ERROR;
	}
	else{
		return angle[0]*256+angle[1];
	}
}

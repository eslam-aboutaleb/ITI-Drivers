/* *******************************************************	*/
/*  Util_String_interface.h									*/
/*  Version: 1.0											*/
/* 	Date: 23/10/2020										*/
/*  Author : Eslam Ehab Aboutaleb							*/
/* *******************************************************  */

#ifndef UTIL_STRING_INTERFACE_H_
#define UTIL_STRING_INTERFACE_H_

void Util_String_vNumtoStr(sint32 Copy_s32Num,uint8 *pu8Buffer);
void Util_String_vFloatToStr(float32 Copy_f32NUM, uint8 *pu8Buffer,uint8 Copy_u8N_NumbersAfterFPonit);
void Util_String_vRemoveSpaces(uint8* u8String);
uint8 Util_String_xComp(const uint8 *Copy_String1 ,const uint8 *Copy_String2 );
#endif /* UTIL_STRING_INTERFACE_H_ */

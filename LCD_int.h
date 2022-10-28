

#ifndef LCD_INT_H
#define LCD_INT_H

void LCD_voidInit(void); //3ala 7asab howa 4 bit wala 8 bit han3ml initialization zay mahowa taleb
tenuErrorStatus LCD_enuWriteCmd(uint8 u8LcdIndxCpy , uint8 u8LcdCmdCpy);
tenuErrorStatus LCD_enuWriteData(uint8 u8LcdIndxCpy , uint8 u8LcdDataCpy);


#endif

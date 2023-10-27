/*
 * main.c
 *
 *  Created on: Oct 27, 2023
 *      Author: HP
 */

#include"lcd.h"
#include"DIO.h"
#include<util/delay.h>
int main()

{
	DIO_init();
	LCD_init();
	u8 boy[] = { 0x0E, 0x0E, 0x04, 0x1F, 0x04, 0x0A, 0x11 };
	LCD_storeCustomChar(boy, 0);
	u8 girl[] = { 0x0E, 0x1F, 0x0E, 0x04, 0x04, 0x0E, 0x1F };
	LCD_storeCustomChar(girl, 1);
	u8 walking[] = { 0x0E, 0x0E, 0x0E, 0x08, 0x0F, 0x0A, 0x09 };
	LCD_storeCustomChar(walking, 2);
	u8 tree[] = { 0x11, 0x04, 0x15, 0x04, 0x04, 0x04, 0x04 };
	LCD_storeCustomChar(tree, 3);
	u8 flower[] = { 0x11, 0x0E, 0x1B, 0x0E, 0x15, 0x04, 0x04 };
	LCD_storeCustomChar(flower, 4);
	u8 snake[] = { 0x00, 0x04, 0x0A, 0x15, 0x0A, 0x04, 0x00 };
	LCD_storeCustomChar(snake, 5);
	u8 heart[] = { 0x00, 0x00, 0x0A, 0x1F, 0x0E, 0x04, 0x00 };
	LCD_storeCustomChar(heart, 6);
	u8 running []={  0x07, 0x07, 0x07, 0x03,0x05,0x0B,0x05};
	LCD_storeCustomChar(running, 7);
	while(1){
	/*boy + girl**/
	LCD_GotoRowColumn(0, 0);
	LCD_writeString("This is Bob ");
	LCD_GotoRowColumn(1, 0);
	LCD_writeString("& his wife Alice");
	LCD_displayCustomChar(0, 3, 7);
	LCD_displayCustomChar(6, 3, 9);
	LCD_displayCustomChar(1, 3, 11);

	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	/**************walking in the garden********/
	LCD_GotoRowColumn(0, 0);
	LCD_writeString("One day they ");
	LCD_GotoRowColumn(1, 0);
	LCD_writeString("were walking in");
	LCD_GotoRowColumn(2, 0);
	LCD_writeString("the garden");
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	//garden trees
	for (int i = 7; i < 19; i++) {

		LCD_displayCustomChar(3, 3, i);

	}
	//garden flowers
	for (int i = 6; i < 19; i += 2) {
		LCD_displayCustomChar(4, 2, i);
	}
	//boy +girl walking
	for (int i = 0; i < 6; i++) {

		LCD_displayCustomChar(2, 1, i);
		LCD_displayCustomChar(1, 1, i + 1);
		_delay_ms(200);
		LCD_ClearGrid(1, i);
		LCD_ClearGrid(1, i + 1);
	}
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	/*****moving snake in garden**************/
	LCD_GotoRowColumn(0, 0);
	LCD_writeString("They found a huge ");
	LCD_GotoRowColumn(1, 0);
	LCD_writeString("snake!!");
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	LCD_displayCustomChar(2, 1, 6);
	LCD_displayCustomChar(1, 1, 7);
	//garden trees
	for (int i = 7; i < 19; i++) {

		LCD_displayCustomChar(3, 3, i);

	}
//garden flowers
	for (int i = 6; i < 19; i += 2) {
		LCD_displayCustomChar(4, 2, i);
	}
//snake
	for (int i = 14; i < 19; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 14; i < 19; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(100);
	for (int i = 13; i < 18; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 13; i < 18; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(100);
	for (int i = 12; i < 17; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 12; i < 17; i++) {
		LCD_ClearGrid(1, i);
	}

	_delay_ms(100);
	for (int i = 11; i < 16; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 11; i < 16; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(800);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	/**************** man running***********/
	LCD_GotoRowColumn(0, 0);
	LCD_writeString("Bob left ");
	LCD_GotoRowColumn(1, 0);
	LCD_writeString("Alice and ran");
	LCD_GotoRowColumn(2, 0);
	LCD_writeString("away...");
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
//girl standing
	LCD_displayCustomChar(2, 1, 6);
	LCD_displayCustomChar(1, 1, 7);
//garden trees
	for (int i = 7; i < 19; i++) {
		LCD_displayCustomChar(3, 3, i);
	}
//garden flowers
	for (int i = 6; i < 19; i += 2) {
		LCD_displayCustomChar(4, 2, i);
	}

//snake
	for (int i = 13; i < 18; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 13; i < 18; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(100);
	for (int i = 12; i < 17; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 12; i < 17; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(100);
	for (int i = 11; i < 16; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 11; i < 16; i++) {
		LCD_ClearGrid(1, i);
	}
	_delay_ms(100);
	for (int i = 10; i < 15; i++) {
		LCD_displayCustomChar(5, 1, i);
	}
	_delay_ms(100);
	for (int i = 10; i < 15; i++) {
		LCD_ClearGrid(1, i);
	}
//boy running
	for (int i = 6; i > 0; i--) {
		LCD_displayCustomChar(7, 1, i);
		_delay_ms(100);
		LCD_ClearGrid(1, i);
	}
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	/***/
	LCD_GotoRowColumn(0, 0);
	LCD_writeString("Bob is a coward!");
	LCD_GotoRowColumn(1, 0);
	LCD_writeString("Dont be like");
	LCD_GotoRowColumn(2, 0);
	LCD_writeString("Bob.");
	_delay_ms(1000);
	LCD_sendCommand(LCD_CLEAR_DISPLAY);
	}
	return 0;
}

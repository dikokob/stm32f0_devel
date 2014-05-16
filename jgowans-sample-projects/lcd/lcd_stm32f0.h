#ifndef LCD_STM32F0_H_
#define LCD_STM32F0_H


enum LcdCommand {
  LCD_CLEAR_DISPLAY = 0x01,
  LCD_CURSOR_HOME = 0x02,
  LCD_DISPLAY_ON = 0x0C,
  LCD_DISPLAY_OFF = 0x08,
  LCD_FOUR_BIT_TWO_LINE_MODE = 0x28,
  LCD_FOUR_BIT_MODE = 0x32,
  LCD_EIGHT_BIT_MODE = 0x33,
  LCD_GOTO_LINE_2 = 0xC0
};

void lcd_init(void);
void lcd_command (enum LcdCommand command);
void lcd_string(uint8_t *string_to_print);
void lcd_two_line_write(uint8_t* line1, uint8_t line2);

#endif

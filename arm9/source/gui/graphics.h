#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <nds.h>
#include <string>
#include <vector>

void initGraphics(void);
void loadFont(void);

void drawImage(int x, int y, int w, int h, std::vector<u8> &imageBuffer, bool top);
void drawImageScaled(int x, int y, int w, int h, double scaleX, double scaleY, std::vector<u8> &imageBuffer, bool top);
void drawRectangle(int x, int y, int w, int h, u8 color, bool top);

std::u16string UTF8toUTF16(const std::string &src);
int getCharIndex(char16_t c);

void printTextCenteredMaxW(std::string text, double w, double scaleY, int palette, int xOffset, int yPos, bool top, bool invert = false);
void printTextCenteredMaxW(std::u16string text, double w, double scaleY, int palette, int xOffset, int yPos, bool top, bool invert = false);
void printTextCentered(std::string text, double scaleX, double scaleY, int palette, int xOffset, int yPos, bool top, bool invert = false);
void printTextCentered(std::u16string text, double scaleX, double scaleY, int palette, int xOffset, int yPos, bool top, bool invert = false);
void printTextMaxW(std::string text, double w, double scaleY, int palette, int xPos, int yPos, bool top, bool invert = false);
void printTextMaxW(std::u16string text, double w,  double scaleY, int palette, int xPos, int yPos, bool top, bool invert = false);
void printText(std::string text, double scaleX, double scaleY, int palette, int xPos, int yPos, bool top, bool invert = false);
void printText(std::u16string text, double scaleX, double scaleY, int palette, int xPos, int yPos, bool top, bool invert = false);

int getTextWidthMaxW(std::string text, int w);
int getTextWidthMaxW(std::u16string text, int w);
int getTextWidth(std::string text);
int getTextWidth(std::u16string text);

#endif
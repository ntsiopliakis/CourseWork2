#ifndef FONT_H
#define FONT_H


typedef struct
{
  std::uint16_t width;
  std::uint16_t index;
}tFontDescriptor;

typedef struct 
{
  std::uint8_t height;		
  std::uint8_t firstIndex;
  std::uint32_t charsCount;
  std::uint8_t spaceSize;
  const tFontDescriptor* fontIndex; //Index of Font
  const std::uint8_t* fontTable;	
} tFont;



#endif //FONT_H
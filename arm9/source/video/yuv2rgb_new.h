#pragma once

extern "C" void y2r_convert176(uint8_t* y, uint8_t* uv, uint16_t* dst);
extern "C" void y2r_convert256(uint8_t* y, uint8_t* uv, uint16_t* dst);
extern "C" void yog2rgb_convert176(uint8_t* y, uint8_t* uv, uint16_t* dst);
extern "C" void yog2rgb_convert256(uint8_t* y, uint8_t* uv, uint16_t* dst);
extern "C" void yog2rgb_convert192(uint8_t* y, uint8_t* uv, uint16_t* dst);
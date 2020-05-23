#include "PopH264TestData.h"
#include "SoyFilesystem.h"


//	ffmpeg -i PopH264Test_GreyscaleGradient.png -pix_fmt yuvj420p -bf 0 -codec:v libx264 -profile:v baseline -level 3.0 -preset slow -f rawvideo PopH264Test_GreyscaleGradient.h264
//	xxd -i -a ./PopH264Test_GreyscaleGradient.h264
const uint8_t __PopH264Test_GreyscaleGradient_h264[] = {
	0x00, 0x00, 0x00, 0x01, 0x67, 0x42, 0xc0, 0x1e, 0xd9, 0x90, 0x87, 0x93,
	0x9b, 0x20, 0x00, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, 0x06, 0x41, 0xe2,
	0xc5, 0xcd, 0x00, 0x00, 0x00, 0x01, 0x68, 0xc9, 0x60, 0xf2, 0xc8, 0x00,
	0x00, 0x01, 0x06, 0x05, 0xff, 0xff, 0x6d, 0xdc, 0x45, 0xe9, 0xbd, 0xe6,
	0xd9, 0x48, 0xb7, 0x96, 0x2c, 0xd8, 0x20, 0xd9, 0x23, 0xee, 0xef, 0x78,
	0x32, 0x36, 0x34, 0x20, 0x2d, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20, 0x31,
	0x35, 0x35, 0x20, 0x72, 0x32, 0x39, 0x31, 0x37, 0x20, 0x30, 0x61, 0x38,
	0x34, 0x64, 0x39, 0x38, 0x20, 0x2d, 0x20, 0x48, 0x2e, 0x32, 0x36, 0x34,
	0x2f, 0x4d, 0x50, 0x45, 0x47, 0x2d, 0x34, 0x20, 0x41, 0x56, 0x43, 0x20,
	0x63, 0x6f, 0x64, 0x65, 0x63, 0x20, 0x2d, 0x20, 0x43, 0x6f, 0x70, 0x79,
	0x6c, 0x65, 0x66, 0x74, 0x20, 0x32, 0x30, 0x30, 0x33, 0x2d, 0x32, 0x30,
	0x31, 0x38, 0x20, 0x2d, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 0x2f,
	0x77, 0x77, 0x77, 0x2e, 0x76, 0x69, 0x64, 0x65, 0x6f, 0x6c, 0x61, 0x6e,
	0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x78, 0x32, 0x36, 0x34, 0x2e, 0x68, 0x74,
	0x6d, 0x6c, 0x20, 0x2d, 0x20, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73,
	0x3a, 0x20, 0x63, 0x61, 0x62, 0x61, 0x63, 0x3d, 0x30, 0x20, 0x72, 0x65,
	0x66, 0x3d, 0x35, 0x20, 0x64, 0x65, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x3d,
	0x31, 0x3a, 0x30, 0x3a, 0x30, 0x20, 0x61, 0x6e, 0x61, 0x6c, 0x79, 0x73,
	0x65, 0x3d, 0x30, 0x78, 0x31, 0x3a, 0x30, 0x78, 0x31, 0x31, 0x31, 0x20,
	0x6d, 0x65, 0x3d, 0x68, 0x65, 0x78, 0x20, 0x73, 0x75, 0x62, 0x6d, 0x65,
	0x3d, 0x38, 0x20, 0x70, 0x73, 0x79, 0x3d, 0x31, 0x20, 0x70, 0x73, 0x79,
	0x5f, 0x72, 0x64, 0x3d, 0x31, 0x2e, 0x30, 0x30, 0x3a, 0x30, 0x2e, 0x30,
	0x30, 0x20, 0x6d, 0x69, 0x78, 0x65, 0x64, 0x5f, 0x72, 0x65, 0x66, 0x3d,
	0x31, 0x20, 0x6d, 0x65, 0x5f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x3d, 0x31,
	0x36, 0x20, 0x63, 0x68, 0x72, 0x6f, 0x6d, 0x61, 0x5f, 0x6d, 0x65, 0x3d,
	0x31, 0x20, 0x74, 0x72, 0x65, 0x6c, 0x6c, 0x69, 0x73, 0x3d, 0x32, 0x20,
	0x38, 0x78, 0x38, 0x64, 0x63, 0x74, 0x3d, 0x30, 0x20, 0x63, 0x71, 0x6d,
	0x3d, 0x30, 0x20, 0x64, 0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65, 0x3d,
	0x32, 0x31, 0x2c, 0x31, 0x31, 0x20, 0x66, 0x61, 0x73, 0x74, 0x5f, 0x70,
	0x73, 0x6b, 0x69, 0x70, 0x3d, 0x31, 0x20, 0x63, 0x68, 0x72, 0x6f, 0x6d,
	0x61, 0x5f, 0x71, 0x70, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x3d,
	0x2d, 0x32, 0x20, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d, 0x36,
	0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x5f, 0x74,
	0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d, 0x31, 0x20, 0x73, 0x6c, 0x69,
	0x63, 0x65, 0x64, 0x5f, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d,
	0x30, 0x20, 0x6e, 0x72, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x63, 0x69, 0x6d,
	0x61, 0x74, 0x65, 0x3d, 0x31, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6c,
	0x61, 0x63, 0x65, 0x64, 0x3d, 0x30, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x61,
	0x79, 0x5f, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x3d, 0x30, 0x20, 0x63,
	0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x69, 0x6e, 0x65, 0x64, 0x5f, 0x69,
	0x6e, 0x74, 0x72, 0x61, 0x3d, 0x30, 0x20, 0x62, 0x66, 0x72, 0x61, 0x6d,
	0x65, 0x73, 0x3d, 0x30, 0x20, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x70,
	0x3d, 0x30, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x3d, 0x32, 0x35,
	0x30, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x5f, 0x6d, 0x69, 0x6e,
	0x3d, 0x32, 0x35, 0x20, 0x73, 0x63, 0x65, 0x6e, 0x65, 0x63, 0x75, 0x74,
	0x3d, 0x34, 0x30, 0x20, 0x69, 0x6e, 0x74, 0x72, 0x61, 0x5f, 0x72, 0x65,
	0x66, 0x72, 0x65, 0x73, 0x68, 0x3d, 0x30, 0x20, 0x72, 0x63, 0x5f, 0x6c,
	0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x3d, 0x35, 0x30, 0x20,
	0x72, 0x63, 0x3d, 0x63, 0x72, 0x66, 0x20, 0x6d, 0x62, 0x74, 0x72, 0x65,
	0x65, 0x3d, 0x31, 0x20, 0x63, 0x72, 0x66, 0x3d, 0x32, 0x33, 0x2e, 0x30,
	0x20, 0x71, 0x63, 0x6f, 0x6d, 0x70, 0x3d, 0x30, 0x2e, 0x36, 0x30, 0x20,
	0x71, 0x70, 0x6d, 0x69, 0x6e, 0x3d, 0x30, 0x20, 0x71, 0x70, 0x6d, 0x61,
	0x78, 0x3d, 0x36, 0x39, 0x20, 0x71, 0x70, 0x73, 0x74, 0x65, 0x70, 0x3d,
	0x34, 0x20, 0x69, 0x70, 0x5f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x3d, 0x31,
	0x2e, 0x34, 0x30, 0x20, 0x61, 0x71, 0x3d, 0x31, 0x3a, 0x31, 0x2e, 0x30,
	0x30, 0x00, 0x80, 0x00, 0x00, 0x01, 0x65, 0x88, 0x84, 0x37, 0x26, 0x07,
	0x43, 0x00, 0x01, 0x0e, 0xb6, 0x4b, 0x03, 0xa1, 0x81, 0x19, 0x2c, 0x0e,
	0x86, 0x04, 0x64, 0xb0, 0x3a, 0x18, 0x11, 0x92, 0xc0, 0xe8, 0x60, 0x46,
	0x4b, 0x03, 0xa1, 0x81, 0x19, 0x2c, 0x0e, 0x86, 0x04, 0x64, 0xb0, 0x3a,
	0x18, 0x11, 0x92, 0xc0, 0xe8, 0x60, 0x46, 0x4b, 0x03, 0xa1, 0x81, 0x19,
	0x2c, 0x0e, 0x86, 0x04, 0x64, 0xb0, 0x3a, 0x18, 0x11, 0x92, 0xc0, 0xe8,
	0x60, 0x46, 0x4b, 0x03, 0xa1, 0x81, 0x19, 0x2c, 0x0e, 0x86, 0x04, 0x64,
	0xb0, 0x3a, 0x18, 0x11, 0x94
};

//	ffmpeg -i PopH264Test_GreyscaleGradient.png -pix_fmt yuvj420p -bf 0 -codec:v libx264 -profile:v baseline -level 3.0 -preset slow -f rawvideo PopH264Test_GreyscaleGradient.h264
//	xxd -i -a ./PopH264Test_GreyscaleGradient.h264
const uint8_t __PopH264Test_RainbowGradient_h264[] = {
	0x00, 0x00, 0x00, 0x01, 0x67, 0x42, 0xc0, 0x1e, 0xd9, 0x86, 0x08, 0x69,
	0xb2, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x00, 0x03, 0x00, 0x64, 0x1e,
	0x2c, 0x5c, 0xd0, 0x00, 0x00, 0x00, 0x01, 0x68, 0xc9, 0x60, 0xf2, 0xc8,
	0x00, 0x00, 0x01, 0x06, 0x05, 0xff, 0xff, 0x6d, 0xdc, 0x45, 0xe9, 0xbd,
	0xe6, 0xd9, 0x48, 0xb7, 0x96, 0x2c, 0xd8, 0x20, 0xd9, 0x23, 0xee, 0xef,
	0x78, 0x32, 0x36, 0x34, 0x20, 0x2d, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20,
	0x31, 0x35, 0x35, 0x20, 0x72, 0x32, 0x39, 0x31, 0x37, 0x20, 0x30, 0x61,
	0x38, 0x34, 0x64, 0x39, 0x38, 0x20, 0x2d, 0x20, 0x48, 0x2e, 0x32, 0x36,
	0x34, 0x2f, 0x4d, 0x50, 0x45, 0x47, 0x2d, 0x34, 0x20, 0x41, 0x56, 0x43,
	0x20, 0x63, 0x6f, 0x64, 0x65, 0x63, 0x20, 0x2d, 0x20, 0x43, 0x6f, 0x70,
	0x79, 0x6c, 0x65, 0x66, 0x74, 0x20, 0x32, 0x30, 0x30, 0x33, 0x2d, 0x32,
	0x30, 0x31, 0x38, 0x20, 0x2d, 0x20, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f,
	0x2f, 0x77, 0x77, 0x77, 0x2e, 0x76, 0x69, 0x64, 0x65, 0x6f, 0x6c, 0x61,
	0x6e, 0x2e, 0x6f, 0x72, 0x67, 0x2f, 0x78, 0x32, 0x36, 0x34, 0x2e, 0x68,
	0x74, 0x6d, 0x6c, 0x20, 0x2d, 0x20, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e,
	0x73, 0x3a, 0x20, 0x63, 0x61, 0x62, 0x61, 0x63, 0x3d, 0x30, 0x20, 0x72,
	0x65, 0x66, 0x3d, 0x35, 0x20, 0x64, 0x65, 0x62, 0x6c, 0x6f, 0x63, 0x6b,
	0x3d, 0x31, 0x3a, 0x30, 0x3a, 0x30, 0x20, 0x61, 0x6e, 0x61, 0x6c, 0x79,
	0x73, 0x65, 0x3d, 0x30, 0x78, 0x31, 0x3a, 0x30, 0x78, 0x31, 0x31, 0x31,
	0x20, 0x6d, 0x65, 0x3d, 0x68, 0x65, 0x78, 0x20, 0x73, 0x75, 0x62, 0x6d,
	0x65, 0x3d, 0x38, 0x20, 0x70, 0x73, 0x79, 0x3d, 0x31, 0x20, 0x70, 0x73,
	0x79, 0x5f, 0x72, 0x64, 0x3d, 0x31, 0x2e, 0x30, 0x30, 0x3a, 0x30, 0x2e,
	0x30, 0x30, 0x20, 0x6d, 0x69, 0x78, 0x65, 0x64, 0x5f, 0x72, 0x65, 0x66,
	0x3d, 0x31, 0x20, 0x6d, 0x65, 0x5f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x3d,
	0x31, 0x36, 0x20, 0x63, 0x68, 0x72, 0x6f, 0x6d, 0x61, 0x5f, 0x6d, 0x65,
	0x3d, 0x31, 0x20, 0x74, 0x72, 0x65, 0x6c, 0x6c, 0x69, 0x73, 0x3d, 0x32,
	0x20, 0x38, 0x78, 0x38, 0x64, 0x63, 0x74, 0x3d, 0x30, 0x20, 0x63, 0x71,
	0x6d, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65,
	0x3d, 0x32, 0x31, 0x2c, 0x31, 0x31, 0x20, 0x66, 0x61, 0x73, 0x74, 0x5f,
	0x70, 0x73, 0x6b, 0x69, 0x70, 0x3d, 0x31, 0x20, 0x63, 0x68, 0x72, 0x6f,
	0x6d, 0x61, 0x5f, 0x71, 0x70, 0x5f, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74,
	0x3d, 0x2d, 0x32, 0x20, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d,
	0x36, 0x20, 0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x5f,
	0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3d, 0x31, 0x20, 0x73, 0x6c,
	0x69, 0x63, 0x65, 0x64, 0x5f, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x73,
	0x3d, 0x30, 0x20, 0x6e, 0x72, 0x3d, 0x30, 0x20, 0x64, 0x65, 0x63, 0x69,
	0x6d, 0x61, 0x74, 0x65, 0x3d, 0x31, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72,
	0x6c, 0x61, 0x63, 0x65, 0x64, 0x3d, 0x30, 0x20, 0x62, 0x6c, 0x75, 0x72,
	0x61, 0x79, 0x5f, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x3d, 0x30, 0x20,
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x69, 0x6e, 0x65, 0x64, 0x5f,
	0x69, 0x6e, 0x74, 0x72, 0x61, 0x3d, 0x30, 0x20, 0x62, 0x66, 0x72, 0x61,
	0x6d, 0x65, 0x73, 0x3d, 0x30, 0x20, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74,
	0x70, 0x3d, 0x30, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x3d, 0x32,
	0x35, 0x30, 0x20, 0x6b, 0x65, 0x79, 0x69, 0x6e, 0x74, 0x5f, 0x6d, 0x69,
	0x6e, 0x3d, 0x32, 0x35, 0x20, 0x73, 0x63, 0x65, 0x6e, 0x65, 0x63, 0x75,
	0x74, 0x3d, 0x34, 0x30, 0x20, 0x69, 0x6e, 0x74, 0x72, 0x61, 0x5f, 0x72,
	0x65, 0x66, 0x72, 0x65, 0x73, 0x68, 0x3d, 0x30, 0x20, 0x72, 0x63, 0x5f,
	0x6c, 0x6f, 0x6f, 0x6b, 0x61, 0x68, 0x65, 0x61, 0x64, 0x3d, 0x35, 0x30,
	0x20, 0x72, 0x63, 0x3d, 0x63, 0x72, 0x66, 0x20, 0x6d, 0x62, 0x74, 0x72,
	0x65, 0x65, 0x3d, 0x31, 0x20, 0x63, 0x72, 0x66, 0x3d, 0x32, 0x33, 0x2e,
	0x30, 0x20, 0x71, 0x63, 0x6f, 0x6d, 0x70, 0x3d, 0x30, 0x2e, 0x36, 0x30,
	0x20, 0x71, 0x70, 0x6d, 0x69, 0x6e, 0x3d, 0x30, 0x20, 0x71, 0x70, 0x6d,
	0x61, 0x78, 0x3d, 0x36, 0x39, 0x20, 0x71, 0x70, 0x73, 0x74, 0x65, 0x70,
	0x3d, 0x34, 0x20, 0x69, 0x70, 0x5f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x3d,
	0x31, 0x2e, 0x34, 0x30, 0x20, 0x61, 0x71, 0x3d, 0x31, 0x3a, 0x31, 0x2e,
	0x30, 0x30, 0x00, 0x80, 0x00, 0x00, 0x01, 0x65, 0x88, 0x84, 0x27, 0x11,
	0x81, 0xd3, 0x00, 0x01, 0x06, 0xb6, 0x43, 0x00, 0x00, 0x40, 0xc5, 0x09,
	0x00, 0x01, 0x0b, 0xc4, 0x23, 0x06, 0x40, 0x00, 0x45, 0xf9, 0x90, 0xd0,
	0x00, 0x10, 0x6d, 0x43, 0x80, 0x00, 0x84, 0xfc, 0x44, 0xa2, 0x40, 0x00,
	0x43, 0x7f, 0x04, 0x40, 0x00, 0x41, 0x29, 0x08, 0x80, 0x00, 0x87, 0xda,
	0x11, 0x20, 0x1e, 0x40, 0x00, 0x20, 0x3c, 0xc8, 0x70, 0x00, 0x10, 0xbe,
	0x88, 0x80, 0x03, 0x42, 0x30, 0x6a, 0x00, 0x02, 0x2f, 0x2c, 0x84, 0x80,
	0x00, 0x83, 0x62, 0x1c, 0x00, 0x04, 0x27, 0xa2, 0x25, 0x0a, 0x00, 0x00,
	0x86, 0xd3, 0x21, 0x20, 0x00, 0x20, 0x9a, 0x84, 0x80, 0x00, 0x87, 0xc2,
	0x34, 0x80, 0x74, 0xc0, 0x26, 0x43, 0x05, 0x09, 0x1a, 0x33, 0x83, 0x26,
	0xc8, 0x6d, 0x09, 0x0d, 0x19, 0x9c, 0xd8, 0x22, 0x02, 0x5c, 0x43, 0x30,
	0x1e, 0x44, 0xc8, 0x69, 0x42, 0x22, 0x46, 0x70, 0x6a, 0x4c, 0x86, 0x28,
	0x44, 0x12, 0x33, 0x28, 0x51, 0x64, 0x24, 0x1a, 0xa6, 0x90, 0x0e, 0x98,
	0x09, 0x90, 0xc0, 0x14, 0x30, 0x14, 0x67, 0x06, 0x43, 0x64, 0x36, 0x84,
	0x86, 0x8c, 0xce, 0x24, 0xe0, 0x88, 0x09, 0x73, 0xb3, 0x01, 0xe2, 0xac,
	0x86, 0x94, 0x34, 0x28, 0xce, 0x0d, 0x44, 0xcb, 0x88, 0x84, 0x8c, 0xce,
	0x5c, 0x12, 0x03, 0x54, 0xd3, 0x01, 0xd3, 0x01, 0x32, 0x18, 0x28, 0x60,
	0x28, 0xce, 0x0c, 0x8d, 0x90, 0xda, 0x12, 0x1a, 0x33, 0x28, 0x9e, 0x08,
	0x81, 0x21, 0x8a, 0x33, 0x20, 0x1e, 0x40, 0x36, 0x43, 0x42, 0x86, 0x85,
	0x19, 0xc1, 0xa8, 0x99, 0x0c, 0x14, 0x22, 0x12, 0x14, 0xce, 0x20, 0x70,
	0x48, 0x0d, 0x0f, 0xa6, 0x9f, 0xe6, 0x98, 0x0e, 0x98, 0x04, 0xc8, 0x60,
	0x28, 0x48, 0x68, 0xce, 0x0c, 0x8d, 0x91, 0x90, 0x90, 0xd1, 0x99, 0x42,
	0xf6, 0x42, 0x20, 0x49, 0x33, 0x20, 0x1e, 0x40, 0x1b, 0x21, 0xa5, 0x08,
	0x84, 0x8c, 0xe0, 0xd4, 0x4c, 0x86, 0x28, 0x44, 0x24, 0x29, 0x9c, 0x40,
	0xe0, 0x90, 0x1a, 0xba, 0x69, 0xf9, 0xa6, 0x03, 0xa6, 0x02, 0x64, 0x30,
	0x14, 0x30, 0x14, 0x67, 0x06, 0x46, 0xc8, 0x6d, 0x09, 0x0d, 0x19, 0x94,
	0xd8, 0x22, 0x04, 0xb9, 0x99, 0x00, 0xf2, 0x01, 0xb2, 0x1a, 0x50, 0x88,
	0x91, 0x9c, 0x1a, 0x93, 0x21, 0x8a, 0x11, 0x09, 0x19, 0x94, 0x43, 0x82,
	0x41, 0xaa, 0x69, 0x00, 0xe9, 0x80, 0x4c, 0x86, 0x0a, 0x18, 0x0a, 0x33,
	0x83, 0x26, 0xc8, 0x7c, 0x48, 0x68, 0xcc, 0xa2, 0x4e, 0x08, 0x81, 0x21,
	0x8a, 0x33, 0x20, 0x1e, 0x40, 0x36, 0x43, 0x42, 0x86, 0x85, 0x19, 0xc1,
	0xa8, 0x4c, 0xb8, 0x88, 0x91, 0x99, 0x42, 0x8b, 0x21, 0x20, 0xd0, 0xf9,
	0xa4, 0x03, 0xa6, 0x02, 0x64, 0x30, 0x14, 0x24, 0x34, 0x67, 0x06, 0x46,
	0xc8, 0x6d, 0x09, 0x0d, 0x19, 0x9c, 0x49, 0xc1, 0x10, 0x12, 0x4c, 0xcc,
	0x07, 0x90, 0x06, 0xc8, 0x69, 0x43, 0x42, 0x8c, 0xe0, 0xd4, 0x99, 0x0c,
	0x14, 0x22, 0x12, 0x33, 0x29, 0x70, 0x48, 0x0d, 0x53, 0x48, 0x07, 0x4c,
	0x04, 0xc8, 0x60, 0xa1, 0x80, 0xa3, 0x38, 0x32, 0x36, 0x43, 0x68, 0x48,
	0x68, 0xcc, 0xe2, 0x4e, 0x08, 0x80, 0x97, 0x33, 0x30, 0x1e, 0x40, 0x36,
	0x43, 0x4a, 0x11, 0x09, 0x19, 0x94, 0x1a, 0x84, 0xc8, 0x62, 0x84, 0x40,
	0x91, 0x9c, 0x40, 0xe0, 0x90, 0x35, 0x4d, 0x20, 0x1d, 0x30, 0x09, 0x90,
	0xc0, 0x14, 0x30, 0x14, 0x67, 0x06, 0x46, 0xc8, 0x6d, 0x09, 0x0d, 0x19,
	0x94, 0x4f, 0x04, 0x40, 0x97, 0x33, 0x20, 0x1e, 0x40, 0x1b, 0x21, 0xa1,
	0x42, 0x22, 0x46, 0x70, 0x6a, 0x26, 0x5c, 0x44, 0x24, 0x66, 0x71, 0x03,
	0x82, 0x40, 0xd0, 0xf9, 0xa6, 0x03, 0xa6, 0x02, 0x64, 0x30, 0x50, 0xc0,
	0x14, 0x21, 0xc1, 0x9d, 0x90, 0xda, 0x12, 0x1a, 0x33, 0x28, 0x5e, 0xc8,
	0x44, 0x09, 0x0c, 0x51, 0x99, 0x00, 0xf2, 0x01, 0xb2, 0x1a, 0x50, 0xd2,
	0x8c, 0xe0, 0xd4, 0x99, 0x0c, 0x14, 0x22, 0x12, 0x18, 0xce, 0x20, 0xe0,
	0x90, 0x1a, 0xa9, 0xa7, 0xf9, 0xa6, 0x03, 0xa6, 0x01, 0x32, 0x18, 0x0a,
	0x18, 0x02, 0x8c, 0xe0, 0xc9, 0xb2, 0xa2, 0x43, 0x42, 0x19, 0x5a, 0x11,
	0x02, 0x49, 0x99, 0x00, 0xf1, 0x0e, 0xc8, 0x69, 0x42, 0x21, 0x23, 0x32,
	0x83, 0x50, 0x99, 0x0c, 0x50, 0x88, 0x12, 0x14, 0xe2, 0x1c, 0x12, 0x03,
	0x55, 0x34, 0xff, 0x34, 0x80, 0x74, 0xc0, 0x4c, 0x86, 0x02, 0x86, 0x02,
	0x8c, 0xe0, 0xc8, 0xd9, 0x0d, 0x28, 0x48, 0x68, 0xcc, 0xa6, 0xc1, 0x10,
	0x25, 0xcc, 0xc8, 0x07, 0x90, 0x1b, 0x21, 0xa5, 0x08, 0x89, 0x19, 0xc1,
	0xa8, 0x99, 0x0e, 0xc4, 0x41, 0x23, 0x32, 0x85, 0x16, 0x42, 0x41, 0xaa,
	0x69, 0x00, 0xe9, 0x80, 0x99, 0x0c, 0x14, 0x30, 0x05, 0x19, 0xc1, 0x91,
	0xb2, 0xa2, 0x43, 0x46, 0x67, 0x12, 0x70, 0x44, 0x04, 0x87, 0x66, 0x66,
	0x03, 0xc8, 0x03, 0x64, 0x34, 0x28, 0x69, 0x46, 0x70, 0x6a, 0x26, 0x43,
	0x14, 0x22, 0x24, 0x66, 0x52, 0xe0, 0x90, 0x1a, 0x1f, 0x34, 0x80, 0x74,
	0xc0, 0x26, 0x43, 0x01, 0x43, 0x00, 0x51, 0x9c, 0x19, 0x1b, 0x21, 0xb4,
	0x24, 0x34, 0x66, 0x51, 0x3c, 0x11, 0x02, 0x5c, 0xcc, 0x80, 0x79, 0x00,
	0x6c, 0x86, 0x94, 0x22, 0x12, 0x33, 0x83, 0x51, 0x32, 0x18, 0xa1, 0x10,
	0x48, 0xcc, 0xa2, 0x07, 0x04, 0x83, 0x54, 0xd2, 0x01, 0xd3, 0x01, 0x32,
	0x18, 0x0a, 0x18, 0x0a, 0x33, 0x83, 0x26, 0xc8, 0x6d, 0x09, 0x0d, 0x19,
	0x94, 0x4f, 0x04, 0x40, 0x97, 0x33, 0x20, 0x30, 0x81, 0xb2, 0x1a, 0x50,
	0x88, 0x91, 0x99, 0x42, 0xe5, 0x90, 0xc1, 0x42, 0x21, 0x28, 0x7f, 0x86,
	0x01, 0xb0, 0x5a, 0x14, 0x01, 0xe6, 0x47, 0x2d, 0xf1, 0x00, 0x51, 0x08,
	0x00, 0x07, 0x80, 0x75, 0x89, 0x1d, 0x12, 0x3b, 0x83, 0x90, 0x05, 0xa0,
	0xe4, 0x01, 0x6c
};


void GetTestFileData(FixedRemoteArray<const uint8_t>& InputData,ArrayBridge<uint8_t>& OutputData,size_t& FullSize)
{
	FullSize = InputData.GetDataSize();

	auto OutputMaxSize = OutputData.MaxSize();
	auto CopySize = std::min(OutputMaxSize,FullSize);
	OutputData.Copy( InputData, CopySize );
}

void PopH264::GetTestData(const std::string& Name,ArrayBridge<uint8_t>&& Data,size_t& FullSize)
{
	if ( Name == "GreyscaleGradient.h264" )
	{
		auto FileData = GetRemoteArray(__PopH264Test_GreyscaleGradient_h264);
		GetTestFileData( FileData, Data, FullSize );
		return;
	}
	
	if ( Name == "RainbowGradient.h264" )
	{
		auto FileData = GetRemoteArray(__PopH264Test_RainbowGradient_h264);
		GetTestFileData( FileData, Data, FullSize );
		return;
	}
	
								   
	//	need to load out of resources
	//Array<uint8_t> File;
	//Platform::FileToArray(GetArrayBridge(File),Name);
	//auto CopyAmount = std::min( Data.GetDataSize(), File.GetDataSize() );
	
	FullSize = 0;
	throw Soy::AssertException( std::string("No test data named ") + Name);
}


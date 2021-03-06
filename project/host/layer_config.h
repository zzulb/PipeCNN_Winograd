#include "../device/hw_param.cl"

#define NUM_CONFIG_ITEM  27

	
//
//544*544*3
//
unsigned layer_config[][NUM_CONFIG_ITEM] = {
                            {0,
							544, 544, 3, 3, 3, 3, 16, 16,
							0,
							544, 544, 16, 1, 1, 0, 1, 0,
							1, 272, 272, 16, 2, 2,
							2, 0, 0},//Layer-1
                            {0,
							272, 272, 16, 3, 3, 16, 32, 32,
							2,
							272, 272, 32, 1, 1, 0, 1, 0,
							1, 136, 136, 32, 2, 2,
							3, 0, 0},//Layer-2
                            {0,
							136, 136, 32, 3, 3, 32, 64, 64,
							3,
							136, 136, 64, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-3
                            {0,
							136, 136, 64, 1, 1, 64, 32, 32,
							2,
							136, 136, 32, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-4
                            {0,
							136, 136, 32, 3, 3, 32, 64, 64,
							3,
							136, 136, 64, 1, 1, 0, 1, 0,
							1, 68, 68, 64, 2, 2,
							2, 0, 0},//Layer-5
                            {0,
							68, 68, 64, 3, 3, 64, 128, 128,
							2,
							68, 68, 128, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-6
                            {0,
							68, 68, 128, 1, 1, 128, 64, 64,
							3,
							68, 68, 64, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-7
                            {0,
							68, 68, 64, 3, 3, 64, 128, 128,
							2,
							68, 68, 128, 1, 1, 0, 1, 0,
							1, 34, 34, 128, 2, 2,
							3, 0, 0},//Layer-8
                            {0,
							34, 34, 128, 3, 3, 128, 256, 256,
							3,
							34, 34, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-9
                            {0,
							34, 34, 256, 1, 1, 256, 128, 128,
							2,
							34, 34, 128, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-10
                            {0,
							34, 34, 128, 3, 3, 128, 256, 256,
							3,
							34, 34, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-11
                            {0,
							34, 34, 256, 1, 1, 256, 128, 128,
							2,
							34, 34, 128, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-12
                            {0,
							34, 34, 128, 3, 3, 128, 256, 256,
							3,
							34, 34, 256, 1, 1, 0, 1, 0,
							1, 17, 17, 256, 2, 2,
							2, 0, 0},//Layer-13
                            {0,
							17, 17, 256, 3, 3, 256, 512, 512,
							2,
							17, 17, 512, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-14
                            {0,
							17, 17, 512, 1, 1, 512, 256, 256,
							3,
							17, 17, 256, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-15
                            {0,
							17, 17, 256, 3, 3, 256, 512, 512,
							2,
							17, 17, 512, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-16
                            {0,
							17, 17, 512, 1, 1, 512, 256, 256,
							3,
							17, 17, 256, 1, 0, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-17
                            {0,
							17, 17, 256, 3, 3, 256, 256, 256,
							2,
							17, 17, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							3, 0, 0},//Layer-18
                            {0,
							17, 17, 256, 3, 3, 256, 256, 256,
							3,
							17, 17, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-19
                            {0,
							17, 17, 256, 3, 3, 256, 256, 256,
							2,
							17, 17, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							//2, 0, 73984},//Layer-20
							3, 0, 0},//Layer-20
                            //{0,
							//34, 34, 512, 1, 1, 512, 64, 64,
							//3,
							//34, 34, 64, 1, 0, 0, 1, 0,
							//0, 27, 27, 96, 3, 2,
							//2, 1, 0},//Layer-21
                            {0,
							17, 17, 256, 3, 3, 256, 256, 256,
							3,
							17, 17, 256, 1, 1, 0, 1, 0,
							0, 27, 27, 96, 3, 2,
							2, 0, 0},//Layer-22
                            {0,
							17, 17, 256, 1, 1, 256, 32, 32,
							2,
							17, 17, 32, 1, 0, 0, 0, 0,
							0, 27, 27, 96, 3, 2,
							1, 0, 0}};//Layer-23

unsigned input_config[5] = {548, 544, 3, 1}; //original image size(dim1, dim2, dim3), batch size

//unsigned output_config[3] = {544, 544, 16};//Layer-1  Note: only one result is extracted and verified
//unsigned output_config[3] = {272, 272, 16};//Layer-1  Note: only one result is extracted and verified
//unsigned output_config[3] = {136, 136, 32};//Layer-2  Note: only one result is extracted and verified
//unsigned output_config[3] = {136, 136, 64};//Layer-3  Note: only one result is extracted and verified
//unsigned output_config[3] = {136, 136, 32};//Layer-4  Note: only one result is extracted and verified
//unsigned output_config[3] = {34, 34, 128};//Layer-8  Note: only one result is extracted and verified
//unsigned output_config[3] = {34, 34, 256};//Layer-9  Note: only one result is extracted and verified
//unsigned output_config[3] = {17, 17, 512};//Layer-14,21  Note: only one result is extracted and verified
//unsigned output_config[3] = {17, 17, 256};//Layer-13  Note: only one result is extracted and verified
unsigned output_config[3] = {17, 17, 32};//Layer-22  Note: only one result is extracted and verified

//8-
char precision_config[][4] ={
                            {14, 7, -1, 4},//Layer-1
							{ 7, 6,  4, 4},//Layer-2
							{ 8, 6,  4, 5},//Layer-3
							{ 6, 6,  5, 5},//Layer-4
							{ 8, 6,  5, 5},//Layer-5
							{ 8, 6,  5, 5},//Layer-6
							{ 7, 7,  5, 5},//Layer-7
							{ 9, 7,  5, 5},//Layer-8
							{ 9, 7,  5, 5},//Layer-9
							{ 6, 7,  5, 5},//Layer-10
							{ 8, 6,  5, 5},//Layer-11
							{ 6, 7,  5, 6},//Layer-12
							{ 9, 7,  6, 6},//Layer-13
							{ 9, 7,  6, 5},//Layer-14
							{ 6, 8,  5, 5},//Layer-15
							{ 9, 7,  5, 7},//Layer-16
							{ 6, 7,  7, 6},//Layer-17
							{ 6, 6,  6, 4},//Layer-18
							{ 9, 8,  4, 5},//Layer-19
							{ 9, 7,  5, 6},//Layer-20
							{ 8, 6,  6, 5},//Layer-21
							{ 7, 4,  5, 3},//Layer-22
							};

//7-
//char precision_config[][4] ={
//                          {14, 7, -1, 3},//Layer-1
//							{ 7, 6,  3, 3},//Layer-2
//							{ 8, 6,  3, 4},//Layer-3
//							{ 6, 6,  4, 4},//Layer-4
//							{ 8, 6,  4, 4},//Layer-5
//							{ 8, 6,  4, 4},//Layer-6
//							{ 7, 7,  4, 4},//Layer-7
//							{ 9, 7,  4, 4},//Layer-8
//							{ 9, 7,  4, 4},//Layer-9
//							{ 6, 7,  4, 4},//Layer-10
//							{ 8, 6,  4, 4},//Layer-11
//							{ 6, 7,  4, 5},//Layer-12
//							{ 9, 7,  5, 5},//Layer-13
//							{ 9, 7,  5, 4},//Layer-14
//							{ 6, 8,  4, 4},//Layer-15
//							{ 9, 7,  4, 6},//Layer-16
//							{ 6, 7,  6, 5},//Layer-17
//							{ 6, 6,  5, 3},//Layer-18
//							{ 9, 8,  3, 4},//Layer-19
//							{ 9, 7,  4, 5},//Layer-20
//							{ 8, 6,  5, 4},//Layer-21
//							{ 7, 4,  4, 2},//Layer-22
//							};


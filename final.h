#pragma once 
#include "/home/shubham/keras2c-master/include/k2c_tensor_include1.h"
//void recognizer(k2c_tensor* dense_7_input_input, k2c_tensor* dense_12_output);
#define A_SIZE 128
#define B_SIZE 5
void recognizer(float dense_7_input_input[A_SIZE],size_t* dense_7_input_input_ndim,size_t* dense_7_input_input_numel,size_t* dense_7_input_input_shape,
		float dense_12_output[B_SIZE],size_t* dense_12_output_ndim,size_t* dense_12_output_numel,size_t* dense_12_output_shape);
void recognizer_initialize();
void recognizer_terminate();

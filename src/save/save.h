#ifndef SAVE_H
#define SAVE_H
#define MATRIX1_SIZE 50
#include <stdbool.h>
int load_game(const char *filename, bool matrix[MATRIX1_SIZE][MATRIX1_SIZE]);
int save_game(const char *filename, bool matrix[MATRIX1_SIZE][MATRIX1_SIZE]);
#endif
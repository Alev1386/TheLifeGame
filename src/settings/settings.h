#ifndef SETTINGS_H
#define SETTINGS_H 
#define MATRIX2_SIZE 3
#include <stdbool.h>
int load_settings(const char *filename, int mas[MATRIX2_SIZE]);
int save_settings(const char *filename, int mas[MATRIX2_SIZE]);
#endif
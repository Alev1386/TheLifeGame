#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "save.h"
int save_game(const char *filename, bool matrix[MATRIX1_SIZE][MATRIX1_SIZE]) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Ошибка открытия файла: %s\n", filename);
        return -20;
    }

    for (int i = 0; i < MATRIX1_SIZE; ++i) {
        for (int j = 0; j < MATRIX1_SIZE; ++j) {
            fprintf(file, "%d ", matrix[i][j]);
        }
    }

    fclose(file);
    return 0;
}

int load_game(const char *filename, bool matrix[MATRIX1_SIZE][MATRIX1_SIZE]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Ошибка открытия файлаf: %s\n", filename);
        return -20;
    }

    for (int i = 0; i < MATRIX1_SIZE; ++i) {
        for (int j = 0; j < MATRIX1_SIZE; ++j) {
            if (fscanf(file, "%d", &matrix[i][j]) != 1) {
                printf("Ошибка чтения из файла\n");
                fclose(file);
                return -20;
            }
        }
    }

    fclose(file);
    return 0;
}
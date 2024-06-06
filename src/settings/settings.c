#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "settings.h"
int save_settings(const char *filename, int mas[MATRIX2_SIZE]) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Ошибка открытия файла: %s\n", filename);
        return -20;
    }

    for (int i = 0; i < MATRIX2_SIZE; ++i) {
            fprintf(file, "%d ", mas[i]);
    }

    fclose(file);
    return 0;
}

int load_settings(const char *filename, int mas[MATRIX2_SIZE]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Ошибка открытия файла: %s\n", filename);
        return -20;
    }

    for (int i = 0; i < MATRIX2_SIZE; ++i) {
       
            if (fscanf(file, "%d", &mas[i]) != 1) {
                printf("Ошибка чтения из файла\n");
                fclose(file);
                return -20;
            }
    }

    fclose(file);
    return 0;
}
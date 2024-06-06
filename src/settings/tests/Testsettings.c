#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<conio.h>
#define MATRIX1_SIZE 50
#define MATRIX2_SIZE 3
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

int set_settings(const char *filename, int mas[MATRIX2_SIZE]) {
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
int TestSettings(){
    char *filename = "matrix.txt";

    int matrix2[MATRIX2_SIZE]; 
    
for(int i=0;i<3;i++)
{

        matrix2[i]=2;
}
  int res1 = save_settings(filename, matrix2);
  int res2 = set_settings(filename, matrix2);
   if(!res1){
    printf("save_settings Success!\n");
  }
  else{
    printf("save_settings Fail!\n");
	return -1;
  }
  if(!res2){
    printf("set_settings Sucsess!\n");
  }
  else{
    printf("set_settings Fail! %d\n",res2);
	return -1;
  }
  return 0;
}
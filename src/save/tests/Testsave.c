#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<conio.h>
#include "Testsave.h"
#include "save.h"
#define MATRIX1_SIZE 50
#define MATRIX2_SIZE 3
int TestSave(){
    char *filename = "matrix.txt";

   int matrix1[MATRIX1_SIZE][MATRIX1_SIZE]; 
    
	for(int i=0;i<50;i++)
	{
		for(int j=0;j<50;j++)
		{
			matrix1[i][j]=1;
		}
	}
  int res1 = save_game(filename, matrix1);
  int res2 = load_game(filename, matrix1);
   if(!res1){
    printf("save_game: Success!\n");
  }
  else{
    printf("save_game: Fail!\n");
	return -1;
  }
  if(!res2){
    printf("load_game Sucsess!\n");
  }
  else{
    printf("load_game Fail! %d\n",res2);
	return -1;
  }
  return 0;
}
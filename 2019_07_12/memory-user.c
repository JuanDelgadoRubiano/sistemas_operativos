#include <stdio.h>
#include<unistd.h>

int main (int argc, char** argv){
   
  if (argc < 1){
  printf("NO se encontraron argumentos \n");
  return 1;
  }
  int bytes = atoi(argv[1]);
  int *array = malloc(bytes*1024*1024*(sizeof(int)));
  
   if (array == NULL){
    printf("Memoria no asignada \n");
    }
   int i = 0;
   for (; i<bytes*1024*1024; i++);
   array[i]= i;
   
  sleep(10);
  return 0;
  
}

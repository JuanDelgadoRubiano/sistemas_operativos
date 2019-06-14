#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  int x = 20;
  int y;
  int z;
  pid_t pid;
  pid = fork();
  
  if (pid==0){
  printf("Soy el hijo \n");
  printf("Calculo el  fibonacci(%d)  \n",x);
  x = fibonacci(x);
  printf("guardo el valor %d en el archivo \n",x);
  guardarEntero("archivo",x);
}
  else 
 {
  int status;
  wait(&status);
  y =  leerEntero("archivo");
  z = y*100;
  printf("Soy el padre \n");
  printf("Espero a que mi hijo termine \n");
  printf("Leo el valor que calculo mi hijo del archivo  %d\n",y);
  printf("multiplico por 100 e imprimo por pantalla %d \n",z);
  
 } 

  return 0;
}

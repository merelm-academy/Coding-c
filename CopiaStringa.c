#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
  int i=0;
  printf("Ecco i %d argomenti che mi hai passato:", argc);
  if(argv == NULL){
    printf("Non ci sono elementi in input!!!");
  }else{
    while(i<argc){
      printf("Stringa: %s \n", argv[i]);
      i++;
    }
  }
  return 0;
}

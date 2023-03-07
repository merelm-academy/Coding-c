#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  int i=0;
  int c=0;
  char s1[100];
  printf("\nMi hai passato %d argomenti", argc-1);
  printf("\nInserisci la stringa di testo che vuoi comparare: ");
  char s[100];
  scanf("%s", s);
  
  if(argv == NULL){
    printf("Non ci sono elementi in input!!!\n");
  }else{
    while(i<argc){
      if(strcmp(argv[i], s)==0){
      printf("Stringa trovata ed è la parola n: %d \n", i);
      }
      i++;
    }
  } 
  return 0;
}

#include <stdio.h>
int main() {
  printf("\nProgramma per confronto di valori in due array in pos uguale.\n\n");
  //dichiarazione
  int c = 0;
  int max = 0;
  do{
    printf("\nQuanti valori vuoi che vengano inseriti nei rispettivi array? ");
    scanf("%d", &c);
   }while(c<0);
  int v[c];
  max = v[0];
  
  //inserimento valori
  for(int i=0; i<c; i++){
    printf("Inserisci il valore numero %d del vettore: ", i+1);
    scanf("%d", &v[i]);
  }
  for(int i=0; i<c; i++){
  if(v[i]>max)
    max = v[i];
  }a
  printf("Il valore massimo dell'array è: %d\n", max);
return 0;
}

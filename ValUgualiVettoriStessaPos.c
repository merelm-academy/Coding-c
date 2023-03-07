#include <stdio.h>
int main() {
  printf("\nProgramma per confronto di valori in due array in pos uguale.\n\n");
  //dichiarazione
  int c = 0;
  int c1 = 0;
  do{
    printf("\nQuanti valori vuoi che vengano inseriti nei rispettivi array? ");
    scanf("%d", &c);
   }while(c<0);
  int v1[c];
  int v2[c];
  
  //inserimento valori
  for(int i=0; i<c; i++){
    printf("Inserisci il valore numero %d del primo vettore: ", i+1);
    scanf("%d", &v1[i]);
  }
  printf("\n");
  for(int i=0; i<c; i++){
    printf("Inserisci il valore numero %d del secondo vettore: ", i+1);
    scanf("%d", &v2[i]);
  }
  printf("\n");
  //confronto valori
  for(int i=0; i<c; i++){
    if(v1[i] == v2[i]){
      c1++;
    }
  }
  //numero valori comuni in stessa posizione
  printf("\nIl numero di valori che sono uguali è di: %d\n\n", c1);
   return 0;
}

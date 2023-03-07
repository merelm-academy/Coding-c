#include <stdio.h>
int main() {
  printf("\nProgramma per azzerrare i valori in un array che sono uguali a x.\n\n");
  //dichiarazione
  int c = 0;
  float x = 0;
  do{
    printf("\nQuanti valori vuoi che vengano inseriti nell'array? ");
    scanf("%d", &c);
   }while(c<0);
  float v[c];
  
  //inserimento valori
  for(int i=0; i<c; i++){
    printf("Inserisci il valore numero %d del primo vettore: ", i+1);
    scanf("%f", &v[i]); 
  }
  printf("\n");
  
  //azzeramento di valori = x
  printf("\nChe valori desideri che venga trovato e cancellato? ");
  scanf("%f", &x);
  for(int i=0; i<c; i++){
    if(v[i] == x){
      v[i] = 0;
      }
  }
  printf("\n");
  
  //stampa dell'array corretto
  printf("Ecco l'array con le correzioni apportate: \n");
  for(int i=0; i<c; i++){
    printf("%.2f ", v[i]);
  }
return 0;
}

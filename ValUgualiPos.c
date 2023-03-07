#include <stdio.h>
int main() {
    printf("\nProgramma per stampare i valori che sono uguali alla posizione nell'array.\n\n");
 //dichiarazione + controllo
 int c = 0;
  int c1 = 0;
  do{
    printf("\nQuanti valori vuoi che vengano inseriti nell'array? ");
    scanf("%d", &c);
  }while(c<0);
  int v[c];
  
  //inserimento valori
  for(int i=0; i<c; i++){
    printf("Inserisci il valore numero %d del primo vettore: ", i+1);
    scanf("%d", &v[i]); 
  }
  printf("\n");
  
  //Trova valori = alla posizione
  for(int i=0; i<c; i++){
    if(v[i] == i){
      c1++;
    }
  }
  printf("Il numero di valori uguali alla posizione in cui sono e': ", c1);
  
return 0;
}

#include <stdio.h>
int main() {
  int n=0;
  //richiesta di dim array
  do{
    printf("\nDimmi quanti valori vuoi inserire nell'array: ");
    scanf("%d", &n);
  }while(n<0);
  
  int v[n];
  
  //inserimento valori
  for(int i=0; i<n; i++){
    printf("Inserisci un valore: ");
    scanf("%d", &v[i]);
  }
  
  //ordinamento dell'array da min a max
  for (int i=0; i<n-1; i++){
      int index = i;
      for (int j=i+1; j<n; j++)
         if (v[j] < v[index]) 
            index = j;
      
      int temp = v[index];  
      v[index] = v[i];
      v[i] = temp;
   }
  //stampo l'array ordinato
  printf("Ecco l'array ordinato: ");
  for(int i=0; i<n; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
  
return 0;
}

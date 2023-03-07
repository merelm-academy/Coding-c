#include <stdio.h>
int main() {
  int n=0;
  int s=0;
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
  
  //scansione per il max
  for(int i=0; i<n; i++){
    if(v[i]>v[0]){
      s=v[i];
      v[i]=v[0];
      v[0]=s;
    }
  }
  //stampo il valore maggiore nell'array
  printf("\nIl valore maggiore del nostro array è: %d\n\n", v[0]);
  
return 0;
}

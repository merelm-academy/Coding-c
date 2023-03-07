#include <stdio.h>
int main() {
  int n=0;
  float max=0;
  //richiesta di dim array
  do{
    printf("\nDimmi quanti voti vuoi inserire: ");
    scanf("%d", &n);
  }while(n<0);
  
  float v[n];
  max=v[0];
  //inserimento valori
  for(int i=0; i<n; i++){
    do{
      printf("Inserisci un singolo voto (deve essere positivo): ");
      scanf("%f", &v[i]);
    }while(v[i]<0);
    if(v[i]>max){
      max = v[i];
    }
  }
  
  //ordinamento dell'array da min a max
  for(int i=0; i<n-1; i++){
      int index = i;
      for (int j=i+1; j<n; j++)
         if (v[j] < v[index]) 
            index = j;
      
      float temp = v[index];  
      v[index] = v[i];
      v[i] = temp;
   }
   float s=0;
  //stampo l'array ordinato + stampa percentuale su massimo
  printf("\n");
  printf("Ecco l'array ordinato con il relativo rapporto: ");
    printf("\n");
  for(int i=0; i<n; i++){
    printf("\n%.2f - %.2f",v[i], (v[i]/max)*100);
    s=s+v[i];
  }
  printf("\n");
  printf("La media dei voti è di: %.2f e la distanza del maggiore è di: %.2f\n", s/n, (max-(s/n)));
}

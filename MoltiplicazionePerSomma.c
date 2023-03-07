#include <stdio.h>
int main() {
int n = 0;
int n1 = 0;
int i = 0;
  do{
    printf("\nDimmi il valore che vuoi moltiplicare: ");
    scanf("%d", &n);
    printf("Dimmi per quanto lo vuoi moltiplicare: ");
    scanf("%d", &n1);
   }while(n<=0 && n1<=0);
   int somma = 0;
   while(i<n1){
    somma=somma+n;
    i++;
   }
   printf("\nIl risultato della moltiplicazione è: %d\n\n", somma); 
return 0;
}

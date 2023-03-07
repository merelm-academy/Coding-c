#include <stdio.h>
int main() {
int n = 0;
int i = 1;
int somma = 0;
  do{
    printf("\nDimmi di quale valori vuoi che faccia la somma dei divisori: ");
    scanf("%d", &n);
   }while(n<0);
   
   while(i<=n/2){
    if(n%i==0){
      somma=somma+i;
    }
    i++;
   }
   printf("La somma dei divisori di n è: %d\n\n", somma); 
return 0;
}

#include <stdio.h>
int main() {
int n=0;
double f=1;
  do{
    printf("\nDimmi un valore positivo di ccui fare il fattoriale: ");
    scanf("%d", &n);
   }while(n<0);
  while(n>=1){
    f=f*n;
    n--;
  }
   printf("\nil fattoriale di è: %.1lf\n\n", f); 
return 0;
}

#include <stdio.h>
int main() {
int n = 0;
int somma = 0;
int i = 0;
int c = 0;
  do{
  	printf("Inserisci di quanti valori vuoi fare la somma dei valori pari: ");
	scanf("%d", &c);
  }while(c<=0);

  while(i<c){
    printf("Inserisci il valore n %d: ", i+1);
    scanf("%d", &n);
    if(n%2==0)
      somma+=n;
    i++;
   }
   printf("\nIl risultato della somma tra valori pari è: %d\n\n", somma); 
return 0;
}

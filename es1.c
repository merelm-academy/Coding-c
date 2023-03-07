#include <stdio.h>
int main() {
   int c = 0;
   int pmax = 0;
   int i = 0;
   do{
	printf("Quanti valori vuoi inserire in input? ");
	scanf("%d", &c);
   }while(c<0);

   int v[c];
   int max = v[0];

   while(i<c){
       printf("Ins. singolo valore: ");
       scanf("%d", &v[i]);
       if(v[i]>max){
       	max = v[i];
        pmax = i+1;
       }
       i++;
   }
   printf("Il valore massimo è %d e si trova in posizione %d \n\n", max, pmax);
   return 0;
}

#include <stdio.h>
int main() {
   int c = 0;
   float m = 0;
   int s = 0;
   int i = 0;
   int count = 0;
   do{
    printf("\nQuanti valori vuoi inserire in input? ");
    scanf("%d", &c);
   }while(c<0);

   int v[c];
  

   while(i<c){
    printf("Ins. singolo valore: ");
    scanf("%d", &v[i]);
    s = s + v[i];
    i++;
   }
   m = s/c;
   printf("\nLa media dei valori inseriti è di: %.2f\n", m);
   i = 0;
   printf("\nEcco i valori maggiori della media: ");
   while(i<c){
   if(v[i]>m){
    printf("%d ", v[i]);
    count++;
   }
    i++;
   }
   printf("\nI valori maggiori della media sono in totale: %d\n\n", count);
   return 0;
}

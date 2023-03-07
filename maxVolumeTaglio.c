#include <stdio.h>

int main(void)
//Lastra e massimo//
{
  float a, b, c, d, m, t, v, s;
  int n;
  c=0; d=0; m=0; t=0; v=0; n=2; s=0;
  printf ("Dammi il valore di a: ");
  scanf ("%f", &a);
  printf ("Dammi il valore di b: ");
  scanf ("%f", &b);
  if(a<b){
    s=a;
    a=b;
    b=s;
  }
  c=b/n;
  do{
    d=d+1;
    v=(a-(2*d)*(b-(2*d)))*d;
    if(v>m){
      m=v;
      t=d;
    }
  }while(d<c);
  printf("\nIl volume massimo ottimale è: %f\n", m);
  printf("Il deltax ottimale è: %.2f\n\n", t);

return 0;
}
    
  

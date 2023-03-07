#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {  
  int x,y,x1,y1;
do{
    printf("\nValori su x: ");
    scanf("%d", &x);
    printf("\nValori su y: ");
    scanf("%d", &y);
  }while(x<0 && y<0);
  
  int vb[y][x];
  time_t t;
  srand((unsigned) time(&t));
  int max=vb[0][0];

for(int i = 0; i < y; i++){
    for(int j = 0; j < x; j++){
        vb[i][j] = rand()%100;
    }
}
 
for(int i = 0; i < y; i++){
    for(int j = 0; j < x; j++){
        if(vb[i][j]>max){
          max=vb[i][j];
          y1=i;
          x1=j;
        }
    }
}
  
for(int i = 0; i < y; i++){
  printf("\n");
    for(int j = 0; j < x; j++){
        printf("%d-", vb[i][j]);
    }
}
printf("\n\n Il valore superstite è: %d e si trova in %d-%d", max, x1, y1);
return 0;
}

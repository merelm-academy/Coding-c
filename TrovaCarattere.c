#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char c;
	printf("\nInserisci la stringa di testo: ");
	char s[100];
	fgets(s, 100, stdin);
	printf("Inserisci il carattere che vuoi cercare: ");
	scanf("%c", &c);
	printf("\n");
	while(s[i]){
	  if(s[i] == c){
	    printf("Carattere %c trovato in pos: %d \n", c, i+1);
	  }
	    i++;
	}	  
	printf("\n");
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	int flag=0;
	printf("Inserisci la prima parola: ");
	char s[100];
	fgets(s, 100, stdin);
	printf("Inserisci la seconda parola: ");
	char s1[100];
	fgets(s1, 100, stdin);
	while(s1[i] && s[i]){
	  if(s[i] != s1[i]){
	    flag++;
	  }
	    i++;
	}
	if(flag==0)
	  printf("Le due parole sono uguali");
	else
	  printf("Le due parole sono diverse");
	  
	printf("\n");
	
	return 0;
}

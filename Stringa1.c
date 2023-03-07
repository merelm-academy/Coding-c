#include<stdio.h>

int main(){
	int i=0;
	printf("Inserisci la parola");
	char s[100];
	fgets(s, 100, stdin);
	while(s[i]){
		printf("%c", s[i]);
		i++;
	}
	printf("Il numero di lettere nella parola sono: %d", i-1);

	return 0;
}

#include <stdio.h>

int main(void) {
	// your code goes here
	char c;
	scanf("%c", &c);
	(c=='E' || c=='A' || c=='O' || c=='I' || c=='U')?printf("Vowel") : printf("Consonant");
	return 0;
}


#include <stdio.h>

int main(){
	char str[] = "Hello World!";
	for (int i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
	return (0);
}
#include <stdio.h>

int main(){
	char a = 'A';
	char b = 'B';
	char *ptr1;
	char **ptr2;
	ptr1 = &a;
	ptr2 = &ptr1;
	printf("%d\n", **ptr2);
	*ptr2 = &b;
	printf("%d\n", *ptr1);
	return 0;
}
#include <stdio.h>

int main(){
	int b = 270533154;
	char *ptr = (char*)&b;
	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
	char *ptr1 = (char*)&b;
	ptr1 = ptr1 + 2;
	*ptr1 = 15;
	printf("%d\n", *ptr1);
}
#include <stdio.h>

int main() {
	int a = 0x00CCAABB;
	unsigned char c;
	for (int i = 0; i <= 24; i+=8 ){
		c = (a >> i) & 0xFF;
		printf("%x\n", c);
	}
	a = a & 0xFFBBFFFF;
	printf("%x\n", a);
	return 0;
}
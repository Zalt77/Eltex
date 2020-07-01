#include <stdio.h>

void vodchisel(int *a, int *b){
	printf("a = ");
	scanf("%d", &*a);
	printf("b = ");
	scanf("%d", &*b);
}

void sum(int a, int b){
	printf("%d\n", a+b);
}

void dif(int a, int b){
	printf("%d\n", a-b);
}

void dev(float a, float b){
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("%f\n", a/b);
}

void mul(int a, int b){
	printf("%d\n", a*b);
}
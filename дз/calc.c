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

int main()
{
	int a,b;
	int sc;
	float a1, b1;
	do{
	printf("\nКалькулятор\n1.Сумма\n2.Разность\n3.Деление\n4.Умножение\n5.Выход\nВыбрать пункт: ");
	scanf("%d", &sc);
	switch(sc){
		case 1:
		vodchisel(&a, &b);
		sum(a, b);
		break;
			case 2:
			vodchisel(&a, &b);
			dif(a, b);
			break;
				case 3:
				dev(a1, b1);
				break;
					case 4:
					vodchisel(&a, &b);
					mul(a, b);
					break;
				}
		}while(sc != 5);
	return 0;
}
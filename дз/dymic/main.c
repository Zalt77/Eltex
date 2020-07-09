#include <stdio.h>
#include "calc.h"

int main()
{
	
	int a,b;
	int sc;
	float a1, b1;
	do{
	printf("\nКалькулятор\n1.Сумма\n2.Разность\n3.Деление\n4.Умножение\n5.Выход\nВыбрать из пункта меню: ");
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
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "str2.h"

int main(int argc, char const *argv[])
{	
	struct test book[10];	
	int a = 0;
	int sc = 0;
	do 
	{
		print_menu();		
		scanf("%d", &a);
		switch(a){
			case 1:
			ADD(book, &sc);
			sc++;
			break;
				case 2:
					if(sc <= 0)
						printf("Failed\n");
					else
						delete_a(book, &sc);
				break;
					case 3:
					for (int i = 0; i < sc-1; ++i)
					{	
						printf("Name: %s\n", book[i].N);
						printf("FIO: %s\n", book[i].F);
						printf("number: %ld\n", book[i].n);
					}
	}
}	while(a != 4 );
	return 0;
}
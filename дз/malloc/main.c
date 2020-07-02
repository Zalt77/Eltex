#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "str2.h"
#define nu 1

int main(int argc, char const *argv[])
{	
	struct test *book;	
	int a = 0;
	int sc = 0;
	book = (struct test*)malloc(nu * sizeof(struct test));
	do 
	{
		print_menu();		
		scanf("%d", &a);
		switch(a){
			case 1:
			ADD(book, &sc);
			sc++;
			if(sc >= nu){
			book = realloc(book, (sc + 1) * sizeof(struct test));
			}
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
	free(book);
	return 0;
}
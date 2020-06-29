#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct test
{
	char N[16];
	char F[16];
	long n;
};
void print_menu(){
	printf("1-Add\n2-Delete\n3-Print\n4-Exit\n");
}

void lshift(struct test* sc, int* count, int current)
{
	if(current == (*count))
		return;
	for(int i = current; i<(*count)-1; ++i)
	{
		strcpy(sc[i].N, sc[i+1].N);
		strcpy(sc[i].F, sc[i+1].F);
		sc[i].n = sc[i+1].n;
	}
}

void ADD(struct test* ss, int *count){
	printf("Name: ");
	scanf("%15s", ss[*count].N);
	printf("FIO: ");
	scanf("%15s", ss[*count].F);
	printf("Number: ");
	scanf("%ld", &ss[*count].n);
	++(*count);

}
	
void delete_a(struct test *ss, int *count){
	char name[16];
	printf("Name: ");
	scanf("%15s", name);
	for(int i = 0; i<(*count); ++i)
	{
		if(!strcmp(name, ss[i].N))
		{
			lshift(ss, count, i);
			--(*count);
		}
	}

}

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
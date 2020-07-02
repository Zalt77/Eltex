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

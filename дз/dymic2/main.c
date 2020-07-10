#include <stdio.h>
#include "calc.h"
#include <dlfcn.h>


int main(int argc, char* argv[]){
	void *dlopen (const char *filename, int flag);
	void *library_handler;
	int a,b;
	int sc;
	float a1, b1;
	float (*powerfunc)(float a, float b);
	library_handler = dlopen("libcalc.so",RTLD_LAZY);
	if (!library_handler){
	//если ошибка, то вывести ее на экран 
	fprintf(stderr,"dlopen() error: %s\n", dlerror());
};	
	powerfunc = dlsym(library_handler, argv[1]);
	a = 5;
	b = 1;
	printf("%s = %f\n",argv[1],powerfunc(a, b));
	dlclose(library_handler);
	return 0;
}
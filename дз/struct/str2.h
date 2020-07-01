struct test
{
	char N[16];
	char F[16];
	long n;
};

void print_menu();
void lshift(struct test* sc, int* count, int current);
void ADD(struct test* ss, int *count);
void delete_a(struct test *ss, int *count);
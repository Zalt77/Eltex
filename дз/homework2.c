#include <stdio.h>
#define N 3
int main()
{
	int q = 0;
	int A[N][N];
	printf("Квадратная матрица размером\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			A[i][j] = q;
			q++;
		}
	}
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				printf("%d\t",A[i][j] );
			}
			printf("\n");
		}
			printf("\nОбратный массив\n");
			int B[N];
			for (int i = 0; i < N; ++i)
			{
				B[i] = i;
			}
				for (int i = N-1; i >= 0; i--)
				{
					printf("%d\t",B[i] );
				}
					printf("\n\nЗаполнения треугольника\n");
					int C[N][N];
					for(int i = 0; i < N; i++) {
					for(int j = 0; j < N; j++) {
						if((i + j) < (N - 1)) {
							C[i][j] = 0;
							}
						else {
							C[i][j] = 1;
						}
						printf("%d\t ", C[i][j]);
       	 				}
		printf("\n");
	}
return 0;
}
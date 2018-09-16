#include <stdio.h>
#include <stdlib.h>

int MilkOutput[10000];

int cmp_int(const void* x, const void* y)
{
	return *((int*)x) - *((int*)y);
}

int main()
{
	int N = 0, i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", MilkOutput+i);

	qsort(MilkOutput, N, sizeof(int), cmp_int);

	printf("%d", MilkOutput[(N-1)/2]);

	return 0;
}
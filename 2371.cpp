#include <stdio.h>
#include <stdlib.h>

int Numbers[100000];

int cmp_int(const void* x, const void* y)
{
	return *((int*)x) - *((int*)y);
}

int main()
{
	int i;
	int N = 0, K = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", Numbers+i);

	getchar(); // \n
	while (getchar() == '#');

	qsort(Numbers, N, sizeof(int), cmp_int);

	scanf("%d", &K);
	int index;
	for (i = 0; i < K; i++)
	{
		scanf("%d", &index);
		printf("%d\n", Numbers[index-1]);
	}
	return 0;
}
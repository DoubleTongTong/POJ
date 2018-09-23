#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	int K = 0;

	scanf("%d", &K);
	int T = (int)sqrt((double)K)+1;
	for (i = 3; i <= T; i++)
	{
		if (K % i == 0)
			break;
	}

	if (i > T)
	{
		if (K % 2 || K == 4)
			printf("%d\n", K - 1);
		else
			printf("%d\n", K / 2 - 1);
	}
	else
		printf("%d\n", i - 1);
	return 0;
}
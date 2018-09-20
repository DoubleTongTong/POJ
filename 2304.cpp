#include <stdio.h>

int main()
{
	int P = 0, A = 0, B = 0, C = 0;
	int Degree, t;
	scanf("%d%d%d%d", &P, &A, &B, &C);
	while (P + A + B + C != 0)
	{
		Degree = 720; //turn the dial clockwise 2 full turns
		t = P - A;
		if (t < 0)
			t += 40;
		Degree += t * 9; //stop at the first number of the combination 
		Degree += 360; //turn the dial counter-clockwise 1 full turn
		t = B - A;
		if (t < 0)
			t += 40;
		Degree += t * 9; //continue turning counter-clockwise until the 2nd number is reached 
		t = B - C;
		if (t < 0)
			t += 40;
		Degree += t * 9; //turn the dial clockwise again until the 3rd number is reached

		printf("%d\n", Degree);
		//
		scanf("%d%d%d%d", &P, &A, &B, &C);
	}
	return 0;
}
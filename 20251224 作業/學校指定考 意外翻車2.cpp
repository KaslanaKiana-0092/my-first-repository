#include <stdio.h>
#include <math.h>

void output(int n)
{
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		long long fact = 1;
		printf("%d!", i);
		for (int j = 1; j <= i; j++)
		{
			fact = fact * j;
		}
		sum += fact;
		if (i != n)
		{
			printf("+");
		}
		else
		{
			printf("=%lld\n", sum);
		}
	}
}

int main(void)
{
	int inputN;
	if (scanf("%d", &inputN) != 1)
		return 0;
	output(inputN);
	return 0;
}

    


#include<stdio.h>
void Test_A(int);
int main()
{
	int b ;
	scanf_s("%d", &b);
	if (b <= 0)
	{
		printf("Error");
	}
	else
	{
		Test_A(b);
	}
	return 0;
}


void Test_A(int b)
{
	for (int i = 1;i <=12;i++)
	{
		for (int j = 1;j <= b;j++)
		{
			printf("%2d x %2d = %2d ", i, j, i * j);

		}
		printf("\n\n");
	}
}
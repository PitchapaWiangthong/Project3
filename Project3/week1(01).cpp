#include<stdio.h>
int main()
{
	int a, b, area;
	scanf_s("%d %d", &a, &b);
	area = a * b;
	if (a >= 0 and b >= 0)
	{
		printf("Area = %d x %d = %d", a, b, area);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, area;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	area = a * b;
	if (a >= 0 and b >= 0)
	{
		printf("Width = %d cm.\n", a);
		printf("Length = %d cm.\n", b);
		printf("Area = Width x Length\n");
		printf("     = %d x %d\n", a, b);
		printf("     = %d cm.", area);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
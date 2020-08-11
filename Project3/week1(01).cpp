#include<stdio.h>
int main()
{
	float w, l;
	scanf("%f", &w);
	scanf("%f", &l);
	if (w >= 0 and l >= 0)
	{
		printf("Area = %f x %f = %f", w, l, w*l);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
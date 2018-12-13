#include<stdio.h>
#include<stdlib.h>
#define size 7
int g = 6;
int k = 0;
void binarysearch(const int a[], int i);
int main()
{

	int i, a[size] = { 30,40,50,60,70,80,90 };
	printf("The array of integer¡G ");
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n½Ð¿é¤J±ý·j´M¤§­È¡G");
	scanf_s("%d", &i);
	binarysearch(a, i);
	system("pause");
}
void binarysearch(const int a[], int i)
{
	int j;
	int status = 0;
	for (j = 0; j < size; j++)
	{
		if (a[j] == i)
		{
			status = 1;
		}
	}
	if (status == 1)
	{
		if (a[g] == i)
		{
			printf("%d is in the position of %d\n", a[g], g);
		}
		else if (a[k] == i)
		{
			printf("%d is in the position of %d\n", a[k], k);
		}

		else
		{
			g = (g - k) / 2 + k;
			if (i > a[g])
			{
				k = g;
				g *= 2;
				if (g % 2 == 1)
				{
					g += 1;
				}
			}
			binarysearch(a, i);
		}
	}
	else
	{
		printf("%d does not in this array\n", i);
	}
}
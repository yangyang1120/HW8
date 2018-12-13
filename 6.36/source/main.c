#include<stdio.h>
#include<stdlib.h>

void inverse(char *array, int i);

void main(void)
{
	char array[80];
	int i;
	printf("Enter the string¡G\n");
	scanf_s("%s", array, 80);
	i = strlen(array);
	inverse(array, i - 1);
	printf("\n");
	system("pause");
	return 0;
}
void inverse(char *array, int i)
{
	if (i == 0)
	{
		printf("%c", array[0]);
	}
	else
	{
		printf("%c", array[i]);
		inverse(array, i - 1);
	}
}
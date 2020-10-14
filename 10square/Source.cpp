#include <stdio.h>
int a, r, star, i, j;
void square(int);

int main()
{
	printf("Enter number of rows : ");
	scanf_s("%d", &a);
	square(a);
}

void square(int a)
{
	for (r = 1; r <= a; r++)
	{
		for (star = 1; star <= a; star++)
		{
			if (r % 2 == 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}

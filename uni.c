#include <stdio.h>

int main()
{
	int szam;
	printf("Írj be egy számot:\n");
	scanf("%d",&szam);
	printf("Az átalakítandó szám: %d\n",szam);
	for(int i = 0; i < szam; i++)
	{
		printf("1");
	}
	printf("\n");
}

#include <stdio.h>
#include <signal.h>

void jelkezelo(int a)
{
	printf("Elkaptam a jelet: %d",a);
}

int main()
{
	for(int i=0; i<5; ++i)
	{
		printf("%d",i);
	}
}

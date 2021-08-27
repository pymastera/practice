#include <stdio.h>
int main(void)
{
	int x;
	int count[10];

	scanf("%d", &x);
	while (x != -1)
	{
		if (x>=0 && x<=9)
			count[x] ++;
	}
	for (i=0; i<10; i++)
	{
		printf("%d:%d\n",i count);
	}

	return 0;
}

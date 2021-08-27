#include <stdio.h>
int main()
{
	float num = 0;
	float sum = 0;
	int count = 0;
	scanf("%f", &num);
	while(num != -1)
	{
		sum += num;
		++count;
		scanf("%f", &num);
	}
	printf("%f\n", sum/count);

	return 0;
}


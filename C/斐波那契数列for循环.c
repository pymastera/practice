#include <stdio.h>
int main(void)
{
	int i, f1, f2, f3, num;
	f1 = 1, f2 = 1;
	printf("输入个数：");
	scanf("%d", &num);
	printf("%d %d ", f1, f2);

	for (i = 1; i < num -1; ++i)		//循环控制后num-2个值
	{
		f3 = f1 + f2;		//公式
		f1 = f2;
		f2 = f3;
		printf("%d ", f3);
	}
	printf("\n");

	return 0;
}

 

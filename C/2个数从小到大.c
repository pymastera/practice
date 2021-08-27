#include <stdio.h>
int main(void)
{
	float a, b;	//两个实数
	printf("输入两个实数，返回顺序结果：");
	scanf("%f %f", &a, &b);
	float temp;
	if (a > b)
	{
		temp = a;	/*交
				  换
				  */
		a = b;
		b = temp;
	}
	printf("%f %f", a, b);

	return 0;
}

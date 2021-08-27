#include <stdio.h>
#include <time.h>
int main()
{
#if 0
	clock_t start, stop;	//clock_t是clock()函数返回的变量类型
	double duration;	//记录运行时间，单位秒
#endif
	int num = 400;
	int count = 0;
	int guess;
#if 0
	start = clock();	//开始计时
#endif
	printf("猜数：");
	scanf("%d", &guess);

	while(guess != num)	/*猜数主函数*/
	{
		if(guess > num)
		{
			count++;
			printf("大了！\n");
		}
		else if(guess < num)
		{
			count++;
			printf("小了！\n");
		}
		else
		{
			printf("输入值非法!\n");
		}
		printf("猜数：");
		scanf("%d", &guess);
	}
	count++;
#if 0
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
#endif
	printf("猜对了！猜了%d次\n", count);
	

	return 0;
}

#include <stdio.h>
int main(void)
{
	int year, leap_year;
	printf("输入年判断是否是闰年：");
	scanf("%d", &years);
	/*
	if (years % 4 == 0)
	{
		if (years % 100 == 0)
		{
			if (years % 400 == 0)
				leap_year = 1;
			else
				leap_year = 0;
		}
		else 
			leap_year = 1;
	}
	else
		leap_year = 0;
		*/
	leap_year = year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? 1 : 0) : 1) : 0
	if (leap_year == 1)
		printf("%d 是闰年\n", years);
	else
		printf("%d 不是闰年\n", years);

	return 0;
}

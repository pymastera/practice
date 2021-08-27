#include <stdio.h>
int main(void)
{
	char grade;
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("85-100\n");
			break;
		case 'B':
			printf("70-84\n");
			break;
		case 'C':
			printf("60-69\n");
			break;
		case 'D':
			printf("60分以下\n");
			break;
		default:
			printf("输入有误");
	}
	return 0;
}


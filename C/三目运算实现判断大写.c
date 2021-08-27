#include <stdio.h>
int main(void)
{
	char character_big, character_small;
	printf("输入一个字符大写转小写：");
	scanf("%c" ,&character_big);
	character_small = (character_big >= 'A' && character_big <= 'Z') ? character_big + 32 :character_big ;
	printf("%c\n", character_small);

	return 0;
}

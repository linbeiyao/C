//China 加密 
#include<stdio.h>


int main()
{
	char c1 = 'C',c2 = 'h',c3 = 'i',c4 = 'n',c5 = 'a';
	printf("原字符为：%C%C%C%C%C\n",c1,c2,c3,c4,c5);
	printf("加密中.....\n");
	for(int i = 0;i < 4;i++)
	{
		c1++;
		c2++;
		c3++;
		c4++;
		c5++;
	}
	printf("加密后的字符为：%C%C%C%C%C\n",c1,c2,c3,c4,c5);

	return 0;
}


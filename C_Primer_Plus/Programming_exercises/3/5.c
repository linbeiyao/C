//5.一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
#include<stdio.h>

int main()
{
	const long long year_s =  31536000LL;
	int old;
	
	printf("请输入您的年龄：");
	scanf("%d",&old);
	getchar();

	printf("您的年龄：%d 所对应的秒数为：%lld",old,old * year_s);

	return 0;
}

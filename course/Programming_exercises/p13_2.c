#include<stdio.h>

int MAX(int a,int b,int c)
{
	int max = a;
	if(b > max)
	{
		max = b;
	}
	if(c > max)
	{
		max = c;
	}
return max;

}


int main(){
	int a,b,c;

	printf("请输入三个数\n");
	printf("第一个数：");
	scanf("%d",&a);
	printf("第二个数：");
	scanf("%d",&b);
	printf("第三个数：");
	scanf("%d",&c);

	int max = MAX(a,b,c);

	printf("三个数中最大值为：%d\n",max);
	return 0;
}




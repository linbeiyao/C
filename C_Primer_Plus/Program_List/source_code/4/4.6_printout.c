/*4.6 printout.c -- 使用转换说明*/

#include<stdio.h>
#define PI 3.141593

int main()
{
	int num = 7;
	float pies = 12.75;
	int cost = 7800;
	printf("有%d个人吃了%f个浆果派！\n",num,pies);
	printf("圆周率的大小是：%f\n",PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d",'$',cost * 2);


	return 0;
}

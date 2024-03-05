/* pizza.c -- 在比萨饼程序中使用已定义的常量 */
#include<stdio.h>
#define PI 3.1415926

int main()
{
	float area,circum,radius;//面积，周长，半径；
	printf("请输入您的 pizza 的半径：");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circum  = 2 * PI * radius;
	printf("您的 pizza 参数如下：\n");
	printf("半径:%1.2f\n周长：%1.2f\n面积：%1.2f\n",radius,circum,area);



	return 0;
}

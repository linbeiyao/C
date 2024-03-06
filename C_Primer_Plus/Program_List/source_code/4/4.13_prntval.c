/* prntval.c -- printf()的返回值 */

#include<stdio.h>

int main()
{
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("这个 printf 函数一共打印了 %d 个字符！\n",rv);
  
	return 0;
}

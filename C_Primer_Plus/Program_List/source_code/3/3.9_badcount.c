/* badcount.c -- 参数错误的情况*/

#include<stdio.h>
int main(){
	int n = 4,m = 5;
	float f = 7.0f,g = 8.0f;
	printf("%d\n",n,m);			//参数太多
	printf("%d %d %d\n",n);		//参数太少
	printf("%d %d\n",f,g);		//参数类型不匹配

	return 0;
}

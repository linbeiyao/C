//2.编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
#include<stdio.h>

int main(){
	int ascii;

	printf("请输入一个 ASCII 码：");
	scanf("%d",&ascii);


	printf("对应的打印字符为：%c",ascii);
	
	return 0;
}


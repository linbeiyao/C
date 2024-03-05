/* praise2.c */
#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."

int main()
{
	char name[40];
	printf("What`s your name?\n");
	scanf("%s",name);
	printf("Hello,%s,%s\n",name,PRAISE);

	printf("你的名字有%zd个字符，占用了%zd字节的内存。\n",strlen(name),sizeof name);
	printf("PRAISE 有着%zd个字符，占用了%zd个字节的内存。\n",strlen(PRAISE),sizeof PRAISE);


	return 0;
}

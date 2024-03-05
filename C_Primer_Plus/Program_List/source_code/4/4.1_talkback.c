// talkback.c -- 演示与用户交互
#include<stdio.h>
#include<string.h>
#define DENSITY  985	//人的密度大约是985 kg/m^3

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("嗨！请输入你的姓名？\n");
	scanf("%s",name);
	
	printf("%s,请输入你的体重（单位：kg）：\n",name);
	scanf("%f",&weight);
	volume = weight * DENSITY;
	printf("emmm...,%s，你的体积有%.2f kg/m^3!! \n",name,volume);
	size = sizeof(name);
	letters = strlen(name);
	
	printf("另外，你的姓名有%d个字符！\n我们用了%d个字节存储它！！\n",letters,size);

	return 0;
}

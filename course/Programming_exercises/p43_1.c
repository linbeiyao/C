//China 加密
#include<stdio.h>
   
void encryption(char a,char b,char c,char d,char e)
{ 
	printf("加密中......\n");
	a += 4;  
	b += 4;
	c += 4;  
	d += 4;     
	e += 4;

	printf("加密字符为：%c%c%c%c%c\n",a,b,c,d,e);

}  
  
 
int main()
{
	char c1 = 'C',c2 = 'h',c3 = 'i',c4 = 'n',c5 = 'a';
	printf("原字符为：%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	encryption(c1,c2,c3,c4,c5);

	return 0;
}

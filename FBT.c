#include<stdio.h>
int Get_height(char *);
//static int h=0;
static int p=0;
int main()
{
	char s[100];
	int h;
	scanf("%s",s);
	h=Get_height(s);
	printf("Height of given full binary tree is %d",h);
	return 0;
}
int Get_height(char *s)
{
	int LST,RST;
	if(s[p]=='0')
		return 0;
	else if(s[p]=='1')
	{
		p++;
		LST=Get_height(s);
		p++;
		RST=Get_height(s);
		if(RST>LST)
			return 1+RST;
		else
			return 1+LST;
	}
	
}
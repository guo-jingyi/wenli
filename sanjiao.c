#include<stdio.h>
int main()
{
	float  a,b,c;
	printf("请输入三角形边长：\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{

		if(a==b && a==c && b==c)
		{
			printf("这是等边三角形\n");
		}
		else if(a==b || a==c || b==c)
		{
			printf("这是等腰三角形\n");
		}
		else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		{
			printf("这是直角三角形\n");
		}
		else 
		{
			printf("这是三角形\n");
		}
	}
	else 
	{
		printf("这不是三角形\n");
	}
	return 0;
}


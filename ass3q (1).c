#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%d is the largest number",a);
		else
			printf("%d is the largest number",c);
	}
	else if(b>c)
	{
		printf("%d is the largest number",b);
	}
	else
		printf("%d is the largest number",c);
}




	

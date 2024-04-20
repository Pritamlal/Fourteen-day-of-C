#include<stdio.h>
int lcm(int num1,int num2);
int main()
{
	int num1,num2,LCM;
	printf("Enter the num1 and num2::");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	LCM=lcm(num2,num1);
	else
	LCM=lcm(num1,num2);
	
	printf("Lcm of %d and %d is %d",num1,num2,LCM);
}

int lcm(int num1,int num2)
{
	static int multiple=0;
	multiple+=num2;
	
	if(multiple%num1==0 && multiple%num2==0)
	{
		return multiple;
	}
	else
	{
		return lcm(num1,num2);
	}
}

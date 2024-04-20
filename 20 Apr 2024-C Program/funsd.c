#include<stdio.h>
int sumofdigit(int num);
int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	sumofdigit(num);
	printf("%d",sumofdigit(num));
	return 0;
}

int sumofdigit(int num)
{
	
	if(num==0)
	return 0;
	else
	return ((num%10)+sumofdigit(num/10));
}

#include<stdio.h>
int fibonacci(int num);
int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	printf("%d",fibonacci(num));
	return 0;
}

int fibonacci(int num)
{

	if(num==0)
	return 0;
	else if (num==1)
	return 1;
	else
	return fibonacci(num-1)+fibonacci(num-2);
}


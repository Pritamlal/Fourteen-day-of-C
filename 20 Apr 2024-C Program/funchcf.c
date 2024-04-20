#include<stdio.h>
int hcf(int a,int b);
int main()
{
	int a,b,GCD;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the number::");
	scanf("%d",&b);
	GCD=hcf(a,b);
	printf("HCF is %d",GCD);
	return 0;
}

int hcf(int a,int b)
{
	if(b==0)
	return a;
	else
	return hcf(b,a%b);
}

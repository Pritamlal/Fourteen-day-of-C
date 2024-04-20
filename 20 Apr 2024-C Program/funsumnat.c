#include<stdio.h>

void sumofnatural(int start,int end);

int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the Lowerlimit::");
	scanf("%d",&lowerlimit);
	printf("Enter the upperlimit::");
	scanf("%d",&upperlimit);
	
	sumofnatural(lowerlimit,upperlimit);
	return 0;
}

void sumofnatural(int start,int end)
{
	int i,sum=0;
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	
}

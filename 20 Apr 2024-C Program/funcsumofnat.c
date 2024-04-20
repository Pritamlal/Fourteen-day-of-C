#include<stdio.h>
void printsumoddoreven(int start,int end);
int main()
{
	int start, end,sum;
	printf("Enter the start::");
	scanf("%d",&start);
	printf("Enter the end:");
	scanf("%d",&end);
	
 	printsumoddoreven(start,end);
 	
}

void printsumoddoreven(int start,int end)
{
	int i,sum=0;
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		sum+=i;
	}
	printf("%d",sum);
}

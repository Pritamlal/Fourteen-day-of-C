#include<stdio.h>
int printoddoreven(int cur,int limit);
int main()
{
	int lowerlimit,upperlimit;
	printf("Enter the lowerlimit:");
	scanf("%d",&lowerlimit);
	printf("Enter the upperlimit:");
	scanf("%d",&upperlimit);
	printoddoreven(lowerlimit,upperlimit);
	return 0;
}

int printoddoreven(int cur,int limit)
{
	if(cur>limit)
	return;
	else
	printf("%d ",cur);
	printoddoreven(cur+2,limit);
}

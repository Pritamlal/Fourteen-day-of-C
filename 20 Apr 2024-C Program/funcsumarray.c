#include<stdio.h>
int sum(int arr[],int start,int len);
int main()
{
	int size,i,sumofarray,arr[1000];
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	sumofarray=sum(arr,0,size);
	printf("Sum of Array elements::%d",sumofarray);
	return 0;
}

int sum(int arr[],int start,int len)
{
	if(start>=len)
	return 0;
	
	return(arr[start]+sum(arr,start+1,len));
}

#include<stdio.h>
void printarray(int arr[],int start,int len);
int main()
{
	int arr[100],size,i;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in an Array::");
	printarray(arr,0,size);
	return 0;
}

void printarray(int arr[],int start,int len)
{
	if(start>=len)
	return;
	printf("%d, ",arr[start]);
	printarray(arr,start+1,len);
}

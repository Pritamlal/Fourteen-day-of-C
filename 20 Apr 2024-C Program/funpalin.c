#include<stdio.h>
#include<math.h>

int rev(int num);
int main()
{
	int num,reverse;
	printf("Enter the number::");
	scanf("%d",&num);
	reverse=rev(num);
	
	if(isPalindrom(num)==1)
	printf("%d is Palindrome number",num);
	else
	printf("%d is Not a Palindrom Number",num);
}

int isPalindrom(int num)
{
	if(num==rev(num))
	{
		return 1;
	}
	return 0;
}

int rev(int num)
{
	int digit = (int) log10(num);
    
    // Base condition
    if(num == 0)
        return 0;
    
    return ((num%10 * pow(10, digit)) + rev(num/10));
}

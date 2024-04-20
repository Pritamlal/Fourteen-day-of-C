#include<stdio.h>
int fact(int num);
int main()
{
	int num;
	printf("Enter the number::");
	scanf("%d",&num);
	
	printf("%d",fact(num));
	return 0;
}

int fact(int num) {
    if (num == 0 || num == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return num * fact(num - 1); // Recursive call to calculate factorial
    }
}

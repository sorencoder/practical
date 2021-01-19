#include<stdio.h>
int isPalindrome(int n) 
{ 
	int rev = 0; 
	for (int i = n; i > 0; i /= 10) 
		rev = rev*10 + i%10; 
	return (n==rev); 
} 
void countPal(int min, int max) 
{ 
	for (int i = min; i <= max; i++) 
		if (isPalindrome(i)) 
		printf("%d ",i);
} 

int main() 
{ 
    int arrayNum[5];
    printf("Enter the elements of the array\n");
    for(i=0;i<50;i++)
    {
        printf("Enter the %d element ");
        scanf("%d",&arrayNum[i]);
    }
    printf("Enter the range \n");
    printf("Please enter the array's position no.\n");
    printf("Enter the starting value ");
    scanf("%d",&a);
    printf("Enter the ending value ");
    scanf("%d",&b);
	countPal(a, b); 
	return 0; 
} 

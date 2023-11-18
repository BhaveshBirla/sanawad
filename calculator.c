#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Entre the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter 1 for addition,\n Entre 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d",&n);
    switch(n){
        case 1: printf("The sum of entered 2 numbers is : %d",a+b);
        break;
    }
    return 0;
}
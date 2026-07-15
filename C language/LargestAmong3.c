#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Number %d is Largest", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Number %d is Largest", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Number %d is Largest", num3);
    }
    else
    {
        printf("All Numbers are Equal");
    }
    return 0;
}


//Output
// Enter first number : 10
// Enter second number : 20
// Enter third number : 30
// Number 30 is Largest
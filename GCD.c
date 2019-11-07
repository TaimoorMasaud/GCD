#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,remainder;
    printf("\nEnter first number :");
    scanf("%d",&a);
     printf("\nEnter second number :");
    scanf("%d",&b);
    a=abs(a);
    b=abs(b);
    while (remainder!=0)
    {
        remainder=a%b;
        a=b;
        b=remainder;
    }
    printf("\nThe GCD is : %d",a);


}

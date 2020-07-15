#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum,rem;
    sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("Sum of digits is %d.",sum);
    return 0;
}

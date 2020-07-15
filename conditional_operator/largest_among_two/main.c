#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,max;
    printf("Enter 1st Number : ");
    scanf("%d",&n1);
    printf("Enter 2nd Number : ");
    scanf("%d",&n2);
    max=(n1>n2)?n1:n2;
    printf("Largest Number is %d",max);
    return 0;
}

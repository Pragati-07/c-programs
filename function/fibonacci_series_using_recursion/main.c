#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if(n<2)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n,i=0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d\t",fibo(i));
    return 0;
}

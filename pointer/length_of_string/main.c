#include <stdio.h>
#include <stdlib.h>

int len_string(char *s)
{
    int l=0;
    while(*s!='\0')
    {
     l++;
     s++;
    }
    return l;
}
int main()
{
    char string[]="Hello World";
    printf("%d",len_string(string));
    return 0;
}

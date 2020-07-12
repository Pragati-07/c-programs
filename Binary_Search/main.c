#include <stdio.h>
#include <stdlib.h>
/*int binarySearch(int arr[],int low,int high,int key)
{
    int mid;
    if(high<low)
        return -1;
    mid=low+(high-low)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarySearch(arr,mid+1,high,key);
    else
        return binarySearch(arr,low,mid-1,key);
}*/

int binarySearchIt(int arr[],int low,int high,int key)
{
    int mid;
    while(high>=low)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main()
{
    int n,i,r;
    scanf("%d",&n);
    int arr[n],k;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    r=binarySearchIt(arr,0,n,k);
    if(r==-1)
        printf("NOT_FOUND");
    else
        printf("%d",r);
    return 0;
}

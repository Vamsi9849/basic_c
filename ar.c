#include<stdio.h>
int main()
{
    int arr[10]={2,3,1,4,23,45,6,4,5,7};
    int i,small,large;
    small=large=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]<small)
             small=arr[i];
        if(arr[i]>large)
             large=arr[i];
    }
    printf("%d %d",small,large);
}
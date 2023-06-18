#include<stdio.h>
int main()
{
    int ar[10]={1,2,3,4,5,6,7,8,7,4};
    int i,j,temp;
    for(i=0,j=9;i<j;i++,j--)
    {
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",ar[i]);
    }
}
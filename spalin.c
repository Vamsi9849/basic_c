#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",a);
    int j=strlen(a)-1;
    int i,flag=0;
    for(i=0;i<=j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("palindrom");
    else 
    printf("not a palindrom");
}
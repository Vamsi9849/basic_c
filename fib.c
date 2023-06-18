#include<stdio.h>
int main()
{
    int fib=0,per1=1,per2=1;
    int i,n;
    scanf("%d",&n);
    printf("%d,",fib);
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==2)
        {

            fib=1;

        }
        else
        {
        fib=per1+per2;
        per2=per1;
        per1=fib;
        }
        printf("%d,",fib);

    }
    

}
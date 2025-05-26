#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,square=1,d;
    printf("Enter the number of terms you want to print");
    scanf("%d",& n);
    printf("%d ",a);
    printf("%d ",b);
    for(int i=0; i<=n-3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
        square=square +c*c;
    }
    printf("\n");
    printf("%d\n", square);
    d=square%10;
    printf("%d",d);
    return 0;
}
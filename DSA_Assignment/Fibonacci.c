//implement a program to print the sum of fibbonaci number.
// #include <stdio.h>

// int last_digit_fibonacci(int n) {
//     if (n <= 1)
//         return n;
    
//     int previous = 0, current = 1, temp;
//     for (int i = 2; i <= n; i++) {
//         temp = (previous + current) % 10; // Keep only the last digit
//         previous = current;
//         current = temp;
//     }
    
//     return current;
// }

// int main() {
//     int n;
//     printf("Enter the Fibonacci term: ");
//     scanf("%d", &n);
    
//     printf("Last digit of Fibonacci number: %d\n", last_digit_fibonacci(n));
    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//    int a=0,b=1,c,n;
//    printf("Enter the number of terms you want to print");
//    scanf("%d",& n);
//    printf("%d ",a);
//    printf("%d ",b);
//    for(int i=0; i<=n-3;i++)
//    {
//        c=a+b;
//        a=b;
//        b=c;
//        printf(" %d ",c);
//       }
//    return 0;
// }
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,sum=1,d;
    printf("Enter the number of terms you want to print:");
    scanf("%d",& n);
    printf("%d ",a);
    printf("%d ",b);
    for(int i=0; i<=n-3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
        sum=sum+c;
    }
    printf("\n");
    printf("%d\n", sum);
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n,original,reversed=0;
    scanf("%d",&n);
    original=n;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        reversed=reversed*10+n%1;
        n/=10;
    }
    if(original==reversed)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}
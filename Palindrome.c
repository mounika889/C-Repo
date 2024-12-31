#include <stdio.h>
int main() 
{
    int n, reversedN = 0, remainder, originalN;
    scanf("%d", &n);    
    originalN = n;
    while (n != 0) 
    {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    if (originalN == reversedN) 
    {
        printf("Palindrome\n");
    } else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

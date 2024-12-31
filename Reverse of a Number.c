#include <stdio.h>
int main() 
{
    int n, reversedN = 0;
    scanf("%d", &n);
    while (n != 0) {
        int remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    printf("%d\n", reversedN);
    return 0;
}

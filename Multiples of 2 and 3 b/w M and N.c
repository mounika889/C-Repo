#include <stdio.h>
int main() 
{
    int M, N, count = 0;
    scanf("%d %d", &M, &N);
    if (M > N) 
    {
        int temp = M;
        M = N;
        N = temp;
    }
    for (int i = M; i <= N; i++) 
    {
        if (i % 6 == 0) 
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

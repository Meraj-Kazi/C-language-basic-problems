#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            printf("%d, ", t1);
            continue;
        }
        if(i == 2)
        {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    return 0;
}
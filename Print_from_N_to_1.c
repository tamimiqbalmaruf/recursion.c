#include <stdio.h>

void printN(int n)
{

    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);
    printN(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printN(n);

    return 0;
};
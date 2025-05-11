#include <stdio.h>

void printN(int i)
{

    if (i == 6)
    {
        return;
    }

    printN(i + 1);
    
    printf("%d\n", i);
}

int main()
{
    printN(1);

    return 0;
};
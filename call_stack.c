#include <stdio.h>

void mello()
{
    printf("Mello\n");
}

void gello()
{
    printf("Gello\n");
    mello();
}

void hello()
{
    printf("hello\n");
    mello();
}


int main()
{
    printf("hi\n");
    hello();
    return 0;
};
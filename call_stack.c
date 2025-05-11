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
    gello();
}


int main()
{
    printf("hi\n");
    hello();
    return 0;
};
#include <stdio.h>

int fact(unsigned int n);

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n;
    scanf("%u", &n);
    printf("%u\n", fact(n));
    return 0;
}

int fact(unsigned int n)
{
    if (!n) return 1;
    return n * fact(n-1);
}
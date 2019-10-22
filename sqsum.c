#include <stdio.h>

int sqsum(unsigned int n);

int main(int argc, char const *argv[])
{
    unsigned int n;
    scanf("%u", &n);
    printf("%u\n", sqsum(n));
    return 0;
}

int sqsum(unsigned int n)
{
    if (n == 1) return 1;
    return (n*n + sqsum(n-1));
}
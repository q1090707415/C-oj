#include <stdio.h>

int f(int n)
{
    if (n <= 2)
        return n;
    else
        return f(n - 1) + f(n - 2);
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int ret = f(n);
    printf("%d\n", ret);
    return 0;
}
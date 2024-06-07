#include <stdio.h>
#include <string.h>
void right_angle_traingle(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// /////////////////////////////////////////////////////////////////
void get_uniqe_char(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        int flag = 1;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j] && i != j)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%c", str[i]);
        }
    }
}
//  ///////////////////////////////////////////////////////////////////
void half_butterfly(int n)
{
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

//  ///////////////////////////////////////////////////////////////////
int fact2(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact2(n - 1);
    }
}
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int n_c_r(int n, int r)
{
    int res1 = fact(n);
    int res2 = fact(r) * fact(n - r);
    int res3 = res1 / res2;
    return res3;
}
void print_pascal(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d%s", n_c_r(i, j), " ");
        }
        printf("\n");
    }
}
int main()
{

    printf("hello\n");
    print_pascal(5);
    printf("%s%d", "fatorial is ", fact2(5));
    half_butterfly(5);
    get_uniqe_char("abcabck");
    printf("\n");
    right_angle_traingle(6);

    return 0;
}
#include <stdio.h>

int fibonacciRecursive(int n) { // tc=2^n sc=n
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

void printFibonacci(int n) {

    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacciRecursive(i));
    }

    printf("\n");
}
//  ////////////////////////////////////////////////////////////////
void fibo(int n) // tc=n sc=1
{
    int a = 0;
    int b = 1;
    if (n <= 0)
    {
        printf("wrong input");
    }
    else if (n == 1)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d%s", a, " ");
        for (int i = 2; i <= n; i++)
        {
            printf("%d%s", b, " ");
            int c = a + b;
            a = b;
            b = c;
        }
    }
}
// ////////////////////////////////////////////////////////////
int power1(int a, int b)
{ // tc=n ,sc=n

    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power1(a, b - 1);
    }
}
//  ///////////////////////////////////////////////////
void power(int a, int b)
{ // tc=n sc=1
    int f = 1;
    for (int i = 1; i <= b; i++)
    {
        f = f * a;
    }
    printf("%d", f);
}
// Function to count the number of digits in an integer
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

/* Function to calculate 10 to the power of n
int powerOfTen(int n) {
    int result = 1;
    while (n > 0) {
        result *= 10;
        n--;
    }
    return result;
}*/

int powerOfTen(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= 10;
    }
    return result;
}
// Function to exchange ith and jth position digits in a number
int exchangeDigits(int num, int i, int j)
{
    int numDigits = countDigits(num);

    // Calculate powers of 10 for ith and jth positions
    int p_i = powerOfTen(numDigits - i - 1);
    int p_j = powerOfTen(numDigits - j - 1);

    // Extract digits at ith and jth positions
    int d_i = (num / p_i) % 10;
    int d_j = (num / p_j) % 10;

    // Calculate the modified number using stored powers of 10 and digits
    int modifiedNum = num - d_i * p_i + d_j * p_i - d_j * p_j + d_i * p_j+1;

    return modifiedNum;
}

int main()
{
    int result = exchangeDigits(3246159, 2, 5);
    if (result != -1)
    {
        printf("The number is  %d\n", result);
    }
    int pow = power1(2, 3);
    printf("%d", pow);
    printf("\n");
    printFibonacci(9);
    return 0;
}

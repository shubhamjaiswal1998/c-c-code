#include <iostream>

using namespace std;

void get_uniqe_char(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int flag = 1;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j] and i != j)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << str[i];
        }
    }
}
/////////////////////////////////////////////////////////////////////////////
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
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << n_c_r(i, j) << " ";
        }
        cout << endl;
    }
}
/////////////////////////////////////////////////////////////////////////////////
void isocelus_traingle_pattern_with_num1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << j;
        }
        for (int j = i - 2; j >= 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}
/// //////////////////////////////////////////////////////////
void isocelus_traingle_pattern_with_num(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
/// ///////////////////////////////////////////////////////////
void isocelus_traingle_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/// ////////////////////////////////////////////
void traingle_pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/// /////////////////////////////////////////////////
void traingle_pattern(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/// ///////////////////////////////////////

/*
g++ -o hello hello.cpp   for c++
./hello

gcc -o hello hello.cpp   for c
./hello

cd Desktop  for going forward in directry


cd ..   for going backward in directery

python example.py  for running python


*/
void squre_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    squre_pattern(5);
    traingle_pattern(5);
    traingle_pattern2(5);
    isocelus_traingle_pattern(5);
    isocelus_traingle_pattern_with_num1(5);
    print_pascal(5);
    get_uniqe_char("ddabkcabc"); // k

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

// function with time O(n) for any m
int jf(int n, int m)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n > 1)
    {
        return (1 + (jf(n - 1, m) + m - 1) % n);
    }
}

// function with time O(ln(n)) only for m = 2
int jfln_bin(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if ((n > 1) && (n % 2 == 0))
    {
        return 2 * jfln_bin(n / 2) - 1;
    }
    else if (n > 1 && n % 2 == 1)
    {
        return 2 * jfln_bin((n - 1) / 2) + 1;
    }
}

// function with time O(1) only for m = 2
int jf0_bin(int n)
{
    return (2 * (n - pow(2, (int)(log(n)/log(2)))) + 1);
}

int main()
{
    cout << jf(41, 2) << endl; 
    cout << jfln_bin(41) << endl;
    cout << jf0_bin(41);
}

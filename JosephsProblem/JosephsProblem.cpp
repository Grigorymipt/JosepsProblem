// JosephsProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void error(int c)
{
    if (c == 1)
    {
        cout << "build error";
    }
}

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
    /*else
    {
        error(1);
    }*/
}

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

int jf0_bin(int n)
{
    return (2 * (n - pow(2, (int)(log(n)/log(2)))) + 1);
}

int main()
{
    cout << jf(41, 2) << endl;
    cout << jfln_bin(41) << endl;
    cout << jf0_bin(41);
    //std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

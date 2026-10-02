//write a function overloading to find the smallest of three
#include<iostream>
using namespace std;
void fun(char a, char b, char c)
{
    if (a < b && a < c)
        cout << "S = " << a;
    else if (b < a && b < c)
        cout << "S = " << b;
    else
        cout << "S = " << c;
}

int fun(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}char fun(char n, int m)
{
    if (n < m)
        return n;
    else
        return m;
}

int main()
{
    fun('A', 'C', 'B');

    cout << "\nS = " << fun(10, 20);

    cout << "\nS = " << fun('A', 70);

    return 0;
}

// 6.1.cpp 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void print(int* a, const int n)
{
    cout << setw(3) << "a[] = ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i] << ",";
    cout << '\n';
}

void q(int* a, int& k, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
            k++;
    }
}

void s(int* a, int& sum, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
            sum += a[i];
    }

}

void format_mas(int* a, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
            a[i] = 0;
    }

}


void create(int* a, const int n, const int Low, const int High)
{
    srand(unsigned(time(0)));

    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

int main()
{
    const int n = 20;
    int a[n];

    create(a, n, -20, 50);
    print(a, n);

    int sum = 0;
    int k = 0;

    s(a, sum, n);
    q(a, k, n);
    format_mas(a, n);

    cout << '\n';
    cout << "quantity - " << k << '\n';
    cout << "sum - " << sum << '\n';
    cout << '\n';

    print(a, n);

    return 0;
}
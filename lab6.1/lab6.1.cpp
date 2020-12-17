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


void format_mas(int* a, int& sum, int& k, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 0) && !(i % 5 == 0))
        {
            k++;
            sum += a[i];
            a[i] = 0;
        }
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

    format_mas(a, sum, k, n);

    cout << '\n';
    cout << "quantity - " << k << '\n';
    cout << "sum - " << sum << '\n';
    cout << '\n';

    print(a, n);

    return 0;
}
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
long sum(long a1, long a2, long a3 = 0, long a4 = 0);
int main() // Several calls to function sum()
{
    cout << " **** Computing sums ****\n"
         << endl;
    srand((unsigned int)time(NULL)); // Initializes the
    // random number generator.
    long res, a = rand() / 10, b = rand() / 10,
              c = rand() / 10, d = rand() / 10;
    res = sum(a, b);
    cout << a << " + " << b << " = " << res << endl;
    res = sum(a, b, c);
    cout << a << " + " << b << " + " << c
         << " = " << res << endl;
    res = sum(a, b, c, d);
    cout << a << " + " << b << " + " << c << " + " << d
         << " = " << res << endl;
    return 0;
}
// -----------------------------------------------------
// sum.cpp
// Defines the function sum()
// -----------------------------------------------------
long sum(long a1, long a2, long a3, long a4)
{
    return (a1 + a2 + a3 + a4);
}
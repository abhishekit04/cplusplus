#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\nEnter values of a, b and c : ";
    cin >> a >> b >> c;

    int s = (a + b + c) / 2;
    float area_of_triangle = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\nSemi-perimeter = " << s ;
    cout << "\nArea of Triangle = " << area_of_triangle;

    return 0;
}
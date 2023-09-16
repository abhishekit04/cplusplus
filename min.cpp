#include <iostream>

using namespace std;

int main()
{
    int number[4] = {5, 6, 3, 4};

    int min = number[0];

    for (int i = 1; i < 4; i++)
    {
        if (min > number[i])
        {
            min = number[i];
        }
    }
    cout << min << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int number[4] = {5, 26, 3, 4 ,};

    int max = number[0];

    for (int i = 1; i < 4; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
    }
    cout << max << endl;

    return 0;
}
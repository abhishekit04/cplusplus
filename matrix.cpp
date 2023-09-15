#include <iostream>

using namespace std;

int main() 
{
    int test [3][2];
    test[0][0]=10;
    test[0][1]=15;
    test[1][0]=20;
    test[1][1]=30;
    test[2][0]=40;
    test[2][1]=50;

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout<< test[i][j]<<" ";
        } 
        cout<<"\n";
    }

    return 0;
} 
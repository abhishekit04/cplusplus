#include<iostream>
using namespace std;

class item 
{
    int number;
    float cost;
    public:
        void getdata(int a, float b);

        void putdata(void)
        {
            cout << "number :" << number << "\n";
            cout << "cost :" << cost << "\n";
        }

};

void item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item x,y,z;
    cout << "\nobject x" << "\n";



    x.getdata(100, 299.95);
    x.putdata();

    

    cout << "\nobject y" << "\n";

    y.getdata(200, 175.50);
    y.putdata();


    cout << "\n object z" << endl;
    z.getdata(300,150.55);

    z.putdata();


    return 0;
}
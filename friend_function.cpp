// Abhishek kumar singh 
// A45304820046

#include<iostream>
#include<conio.h>
using namespace std;
class temp
{
    int x, y, q;

public:
    void input()
    {
        cout << "Enter Two Numbers :";
        cin >> x >> y;
    }
    friend void swap(temp &t);
    void display()
    {
        cout << "\n After Swap x is :" << x;
        cout << "\n After Swap y is :" << y;
    }
};
void swap(temp &t)
{
    t.q = t.x;
    t.x = t.y;
    t.y = t.q;
}
int main()
{
    temp t1;
    t1.input();
    swap(t1);
    t1.display();
    return 0;
}
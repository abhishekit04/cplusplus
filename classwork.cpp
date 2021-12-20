#include <iostream>
using namespace std;

//Basic class
class A
{
public:
    void myfunction()
    {
        cout << "some content in parent class.";
    }
};

// Another base class
class B
{
public:
    void myOtherFunction()
    {
        cout << "some content in another class.";
    }
};

//Derived class

class C : public A, public B
{
public:
    int a = 10;
    char mes[1000] = "\n\nThe properities of two base class inherits in class derived";
    void message()
    {
        cout << "\nThe properities of two base class inherits in class derived";
    }
};

int main()
{
    C D1;                 // D1 is an object of C class
    D1.myfunction();      // under base class A
    D1.myOtherFunction(); // under base class A
    cout << D1.a;
    cout << D1.mes;
    D1.message();


    return 0;
}
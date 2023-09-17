#include <iostream>
using namespace std;
class Account
{
public:
    float salary = 60000;
    void  displaySalary(){
        cout << "salary = " << salary << endl;
    }
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};
int main(void)

{
    Programmer p1;
     p1.displaySalary();
    cout << "Bonus: " << p1.bonus << endl;
    return 0;
}
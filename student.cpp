#include<iostream>
#include<windows.h>

using namespace std;

class student {
    private:
    int roll,dob;
    public:

    void putdata(int r,int d){
        roll = r;
        dob = d;
    }

    void showdata(void){
        cout << "roll = " << roll << endl;
        cout << "dob = " << dob << endl;
    }


};


int main () {
    student s1;
    s1.putdata(46, 2001);
    system ("cls");
    s1.showdata();

    return 0;
}
#include<iostream>
using namespace std;


class Person {
    char name[30];
    int roll;
    int fee;

    public:
        void setData(void);
        void getData(void);
};

void Person:: setData(void) {
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter roll : ";
    cin >> roll;
    cout << "Enter fee : ";
    cin >> fee;
}

void Person:: getData(void) {
    cout << "\nName = " << name;
    cout << "\nroll = " << roll;
     cout << "\nfee = " << fee;
}

int main() {

    Person p1,p2,p3,p4,p5;   //object
    
 	p1.setData();
 	p2.setData();
 	p3.setData();
 	p4.setData();
 	p5.setData();
    p1.getData();
    p2.getData();
    p3.getData();
    p4.getData();
    p5.getData();

    return 0;
}

#include <iostream>
using namespace std;
class Exam
{
    public:
    int marks = 80;
    void displayMarks(){
        cout << "marks " << marks << endl;
    }
};

class School : public Exam
{
    public :
    int Total_marks = 100;

};

int main(void)
{
    School s1;
    s1.displayMarks();
    cout << "Total_marks " << s1.Total_marks << endl;
    return 0;
}
#include <iostream>
using namespace std;

class index // base class
{
    protected:

        int count;

    public:

        index() 
        {
            count = 0;
        }

        index (int c) 
        {
            count = c;
        }

        void display()
        {
            cout << endl << "count = " << count;
        }

        void operator ++ ()
        {
            count++;
        }
};

class index1: public index{
    public:
            void operator --()
            {
                count--;
            }

};

int main()
{
    index1 i;
    ++i;
    ++i;
    i.display();
    --i;
    i.display();
    i.operator++();
    i.display();

    i.operator--();
    i.display();
    return 0;
}
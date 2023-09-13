//How to display the sum and average of array elements

#include <iostream>

using namespace std;

int main() {

    double numbers[] = {7,5,6,12,35,60};
    double sum = 0;
    double count = 0;
    double average;
    double min = numbers[0];

    // cout << "The numbers are:"; 

    for (const double &n : numbers){
        // cout << n <<" ";

        sum += n;

        ++count;
    if(min < numbers[0]){
        min = n;
    }

    }

    cout << min  << endl;
    cout << &numbers  << endl;
    cout << &numbers[0]  << endl;
    cout << numbers  << endl;
    cout << numbers[0]  << endl;
    // cout << "\nTheir  = " <<sum << endl;

    average = sum / count;

    // cout << "Their Average = " << average << endl;

    return 0;
}

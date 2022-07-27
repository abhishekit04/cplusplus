
// classes example
#include <iostream>
using namespace std;
 
class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};
 
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}
 
int main () {
  Rectangle rect1,rect2;
  rect1.set_values (3,4);
   cout << "area: " << rect1.area() <<endl;
  rect2.set_values (7,6);
   cout << "area: " << rect2.area();
  return 0;
}


#include<iostream>
using namespace std;


class Shape {
	
	private:
		
    double radius;
    double length;
    double width;
public:
    Shape(double r,double l, double w){
       radius=r; 
	   length=l;
	   width=w;
}
  public:
	double AreaCircle()
	{
		return 3.14*radius*radius;
	}

public:	
	double AreaRectangle()
	{
		return length*width;
	}
	
};

int main()
{
	Shape s1(10,10,20);
	cout<<("Area of circle: ");
	cout<<(s1.AreaCircle());
	cout<<endl;
	cout<<("Area of rectangle: ");
	cout<<(s1.AreaRectangle());
	return 0;
}




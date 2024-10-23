#include<iostream>
using namespace std;

class Rectangle
{
	public:
		double length;
		double width;
		
		double Area()
		{
			return length*width;
		}
		double Perimeter()
		{
			return 2*(length + width);
		}
		void display()
		{
			cout<<"the Area of the Rectangle:"<<Area()<<endl;
			cout<<"the Perimeter of the Rectangle:"<<Perimeter()<<endl;
		}
};
int main()
{
	Rectangle rect1,rect2;
	rect1.length=6;
	rect1.width=5;
	
	rect2.length=5;
	rect2.width=3;
	
	cout<<"Rectangle1:"<<endl;
	rect1.display();
	
	cout<<endl;
	
	cout<<"Rectangle2:"<<endl;
	rect2.display();
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	


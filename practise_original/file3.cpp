#include<iostream>
using namespace std;

void my_class(void)
{
cout << "In my_class"<<endl;
class Box
{
  public:
	int length;
	int breadth;
	int height;
};

Box Box1,Box2;

Box1.length=10;
Box1.breadth=20;
Box1.height=30;

Box2.length=100;
Box2.breadth=200;
Box2.height=300;

double vol1,vol2;

vol1=Box1.length * Box1.breadth * Box1.height ;

cout<<"vol1::"<<vol1<<endl;

vol2=Box2.length * Box2.breadth * Box2.height ;

cout<<"vol2::"<<vol2<<endl;
}

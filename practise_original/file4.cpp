#include<iostream>
using namespace std;

void class_member_function(void)
{
cout << "In file..."<<__FILE__<<"...\t"<<"In func..."<<__func__<<"..."<<endl;
class d3obj
{
  public:
	int length;
	int breadth;
	int height;
	int get_volume() /*The fn that has its def or declaration in a class is called as class member fn*/
	{
	return (length*breadth*height);
	}
};

d3obj Box1,Box2;

Box1.length=10;
Box1.breadth=20;
Box1.height=30;

Box2.length=100;
Box2.breadth=200;
Box2.height=300;

double vol1,vol2;
//vol1=Box1.length * Box1.breadth * Box1.height ;
vol1=Box1.get_volume();

cout<<"vol1::"<<vol1<<endl;

//vol2=Box2.length * Box2.breadth * Box2.height ;
vol2=Box2.get_volume();
cout<<"vol2::"<<vol2<<endl;
}

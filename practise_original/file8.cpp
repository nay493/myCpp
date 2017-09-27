#include<iostream>
using namespace std;

class rectangle //Rectangle User data type declaration,similar to structures in C but In c ,cannot have fn's inside structures but can have fn's inside class
{
  private:
    double length;
  protected:
    double breadth;
  public:
    void set_rectangle(double len,double bread);//class member fn declarations
    //double get_rectangle(); /*.......1*/
    //friend double get_rectangle(); 
    friend double get_rectangle(rectangle rect);
    double area_rectangle(double len,double bred);
    int compare(rectangle rect);
};
 

void rectangle::set_rectangle(double len,double bread)//class member fn declarations
{
  length=len;
  breadth=bread;
}

/*
double rectangle::get_rectangle()//class member fn declarations
{
  cout<<"length="<<length<<"\t"<<"breadth="<<breadth<<endl;
  return 0;
}
*/ /*.....1*/

/*Note: In below fn is not called as rectangle::get_rectangle() but get_rectangle() & Hence is not class member fn but class friend fn as declared in class rectangle, But can still access both private & protected data of the class */
double get_rectangle(rectangle rect)//class member fn declarations
{
  cout<<"length="<<rect.length<<"\t"<<"breadth="<<rect.breadth<<endl;// error : length not declared in this scope
  return 0;
}

double rectangle::area_rectangle(double len,double bread)
{
  double area = len * bread ;
  return area;
}

int rectangle::compare(rectangle rect)
{
 return this->area_rectangle(10,12) > rect.area_rectangle(1,100);
}

void friend_functions(void) //similar to main fn if not multiple spanning of file or project written accumilating multiple files
{
  cout << "In file..."<<__FILE__<<"...\t"<<"In func..."<<__func__<<"..."<<endl;

  rectangle rectangle1; //object creation of the class
  rectangle1.set_rectangle(10,20);
  //rectangle1.get_rectangle();/*........1*/
  get_rectangle(rectangle1);
  double area1= rectangle1.area_rectangle(122,100);
  cout << "area1="<<area1<<endl;
  //cout<<"this->area_rectangle="<<this->area_rectangle(123,10)<<endl; /*file8.cpp:56:34: error: invalid use of ‘this’ in non-member function*/
  //int i= rectangle1.compare(rectangle rectangle1);  /*file8.cpp:63:39: error: expected primary-expression before ‘rectangle1’*/ // ???
  cout<<"i="<<i<<endl;
}

/*
NOTE: All the lines marked with ...1 are for code for accessing private & protected members of a class with class member fn's or without using class friend fn
The uncommented part indicate accessing private & protected members of a class using class friend fn

--> Can have both the code uncommented by using #ifdef at ....1 and while compiling ,compiled with -D <option> 

*/


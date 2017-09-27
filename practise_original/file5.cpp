#include<iostream>
using namespace std;

/*Class element is updated directly by its object only if the class element is public,If class element is either private or protected the class element can only be updated using a class element function*/


void class_access_modifiers(void)
{
cout << "In file..."<<__FILE__<<"...\t"<<"In func..."<<__func__<<"..."<<endl;
class line
{

//  protected:
//	int length;
  public:
	int length;

/*......class element functions......*/
	void set_length(int len)
	{
		length=len;
	}
	
	void get_length(void)
	{
	  cout << "length::"<<length<<endl;
	}
};

line line1,line2;
line1.set_length(123);
line1.get_length();
line1.length=555;/*Class element is updated directly*/
line1.get_length();

line2.set_length(321);
line2.get_length();

}



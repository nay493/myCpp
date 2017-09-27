#include<iostream>
using namespace std;

void copy_constructor(void)
{
cout << "In file..."<<__FILE__<<"...\t"<<"In func..."<<__func__<<"..."<<endl;
class line
{
  public:
	int length;
	int *ptr; /* Excluding this we get error ptr was not declared in this scope */
	void set_length(int len)
	{
		length=len;
	}
	
	void get_length(void)
	{
	  cout << "length::"<<length<<endl;
	}
	
	
	line(int len)/*Simple Constructor*/
	{
	  cout<<"In Constructor\tlen=="<<len<<"ptr==\t"<<ptr<<"*ptr==\t"<<*ptr<<endl;
	  ptr = new int;
      *ptr = len;

	}
	
	line(const line &line1)
	{
	  cout<<"**Copy Constructor allocating pointer**"<<endl;
	  ptr = new int;
	  *ptr = *line1.ptr;
	}
	
	~line()/*Simple Destructor*/
	{
	  cout<<"In Destructor"<<endl;
	}
};

line line(493);
//line l1;
//cout<<"*ptr=="<<(l1.ptr)<<endl;

//line line2;
//cout<<"after line2...."<<endl;
}

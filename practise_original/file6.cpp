#include<iostream>
using namespace std;
//#define way2 /*can select a way either from here or from command line using -D way1 or -D way2 */
void constructor_and_destructor(void)
{
cout << "In file..."<<__FILE__<<"...\t"<<"In func..."<<__func__<<"..."<<endl;
class line
{
  public:
	int length;
	void set_length(int len)
	{
		length=len;
	}
	
	void get_length(void)
	{
	  cout << "length::"<<length<<endl;
	}
	
#ifdef 	way1 /* There are 2 ways to define a constructor as displayed by way1 & way2 */
	line()
	{
	  cout<<"In Constructor"<<endl;
	}
	
	~line()
	{
	  cout<<"In Destructor"<<endl;
	}
	
#endif

#ifdef way2		
	line(); /* .....................................(1) */
	~line();
#endif	

};

/* other way of writing this constructor/Destructor/class_method_fn is as follows by adding 1 & 2*/
#ifdef way2		
line::line() /* .....................................(2) */
	{	  
	  cout<<"In Constructor"<<endl;
	}

line::~line()
	{
	  cout<<"In Destructor"<<endl;
	}

#endif

line line1,line2; /* As soon as object of a class is created its constructor is called */
line1.set_length(10);
line1.get_length();
line2.set_length(100);
line2.get_length();
/*As soon as object of a class is destroyed/handled/freed its Destructor is called */
}

#include<iostream>
using namespace std;

/*Function Declarations*/
int fun1(void);
int fun(int);
void my_class(void);
void class_member_function(void);
void class_access_modifiers(void);
void constructor_and_destructor(void);
//void copy_constructor(void);
void friend_functions(void);
//void this_pointer(void);

int main()
{
int j=5;
cout<<"Hello World"<<endl;
cout << "j::"<<j<<endl;
int i=fun(j);
cout << "i::"<<i<<endl;

int k=fun1();
cout << "k::"<<k<<endl;

/*class*/
my_class();
/*class*/

class_member_function();

class_access_modifiers();

constructor_and_destructor();

friend_functions();

//copy_constructor();

//this_pointer();
return 0;
}

int fun(int j)
{
j++;
return j;
}

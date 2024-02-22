#include<iostream>
using namespace std;
class Base{
	public :
		int var;
		virtual void data(){
			cout<<"The value of Base var : "<<var<<endl;
		}
};

class Drived : public Base {	
	public :
		int Bar;
		void data(){
			cout<<"The value of Drived Bar : "<<Bar<<endl;
			cout<<"The value of Base var : " << var <<endl;
		}
};

int main(){
	Base obj1;
	Drived obj2;
	
//	Base * baseptr;
//	baseptr = &obj2;
//	baseptr -> var = 4;
//	baseptr -> data ();
	
	Drived * drivedptr;
	drivedptr = &obj2;
	drivedptr -> var =85;
	drivedptr -> data();

	return 0;
}

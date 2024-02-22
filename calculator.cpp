#include<iostream>
#include<cmath>
using namespace std;

class Simplecalculator{
	int a,b;
	
	public :
		void setdataA(){
			cout<<"Enter the value of a is : "<<endl;
			cin>>a;
			cout<<"Enter the value of b is : "<<endl;
			cin>>b;
		}
		void getdataA(){
			cout<<"The value of a + b is : "<<a+b<<endl;
			cout<<"The value of a - b is : "<<a-b<<endl;
			cout<<"The value of a * b is : "<<a*b<<endl;
			cout<<"The value of a / b is : "<<a/b<<endl;
		}
};
class Scientificcalculator{
	int a,b;
	
	public :
		void setdataS(){
			cout<<"Enter the value of a is : "<<endl;
			cin>>a;
			cout<<"Enter the value of b is : "<<endl;
			cin>>b;
		}
		void getdataS(){
			cout<<"The value of cas(a) is : "<<cos(a)<<endl;
			cout<<"The value of  sin(a) is : "<<sin(a)<<endl;
			cout<<"The value of exp(b) is : "<<exp(b)<<endl;
			cout<<"The value of tan(b) is : "<<tan(b)<<endl;
		}
};

class Hybrid : public Simplecalculator , public Scientificcalculator{
}; 
int main (){
	Hybrid cal;
	cal.setdataA();
	cal.getdataA();
	cal.setdataS();
	cal.getdataS();
	
	return 0;
}

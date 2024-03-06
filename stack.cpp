#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	
	s.push(4);
	s.push(2);
	s.push(3);
	
	s.pop();
	
	cout<<"values after push operation : "<<s.top()<<endl;
	cout<<"cheaking empty or not : "<<s.empty()<<endl;
	cout<<"size of stack is :  "<<s.size()<<endl;
	
	return 0;
}

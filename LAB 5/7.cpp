#include <iostream> 
using namespace std; 

class A{
	public :
		virtual void show(){
			cout << "Henlo" << endl;
		}
};

class B : public A{
	public :
		void show () {
			cout << "Hello World" << endl;
		}
};

int main(){
	B b;
	b.show();
	return  0;
}

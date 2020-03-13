#include <iostream> 
using namespace std; 

class A{
	public :
		virtual void show() = 0 ;
		void sleeping(){
			cout << "Imma sleep." << endl ; 
		}
};

class B : public A{
	public :
		void show () {
			cout << "Hello World" << endl ;
		}
};

int main(){
	B b;
	b.show();
	b.sleeping();
	return  0;
}

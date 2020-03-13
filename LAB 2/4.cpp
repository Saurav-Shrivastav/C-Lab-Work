#include <iostream> 
using namespace std; 

class A{
	int i = 5;
	public:
		friend class B; //friend class B
};

class B{
	public:
		void show(A& a){
			cout << "Value of b is: " << a.i ;
		}
};

int main(){
	A a1;
	B b1;
	b1.show(a1);
	return  0;
}

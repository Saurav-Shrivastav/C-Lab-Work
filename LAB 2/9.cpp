#include <iostream> 
using namespace std; 

class A{
	public :
		virtual ~A()=0;
	};

A::~A(){ 
    std::cout << "Pure virtual destructor is called"; 
} 
  

class B : public A{
	public : 
		~B(){
			cout << "The derived class destructor is executed." ;
		}
};

int main(){
	B b;
	
	return  0;
}

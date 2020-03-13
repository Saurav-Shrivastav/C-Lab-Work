#include <iostream> 
using namespace std; 

class Base {
   protected : 
   int num = 7;    
};

class Derived : protected Base { 
   public :
   void func() {
      cout << "The value of num is: " << num << endl;
   }
};

class Derived1 : private Base {
	public :
		void func() {
			cout << "The value of num in the derived class with private access is: " << num;
		}
};

int main() {
   Derived obj;
   Derived1 obj1;
   obj.func(); 
   obj1.func();
   return 0;
}

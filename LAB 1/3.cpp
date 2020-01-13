#include <iostream> 

using namespace std; 

namespace ns1 { 
	int value() {
		return 5;
	}
} 

namespace ns2 { 
	int x=10; 
	double value() {
		return 4.99;
	}
} 
  
int main() { 
	cout << ns1::value() << endl;  
	cout << ns2::value() << endl;   
	cout<< ns2::x<<endl;  
}

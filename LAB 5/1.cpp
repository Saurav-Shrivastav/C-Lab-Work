#include <iostream>
using namespace std;

class A{
	public:
		int an;
};

class B: public A{
	public:
		int bn;
};

int main(){
	A a;
	B b;
	a.an=7;
	b.bn=21;
	cout<<"a =  "<<a.an<<endl;
	cout<<"b =  "<<b.bn;
	return 0;
}

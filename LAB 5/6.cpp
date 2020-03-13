#include<iostream>
using namespace std;
class base{
public:
int var1=20;
};

class derived:public base{
public:
void func(){
cout<<"single inheritance: "<<var1<<endl;
}
};

class base1{
public:
int var2=30;
};

class derived1:public base,public base1{
public:
void func1(){
cout<<"multiple inheritance: "<<var1<<" , "<<var2<<endl;
}
};

class derived2:public base{
public:
void func2(){
cout<<"hierar inherit: "<<var1<<endl;
}};

class derived3:public base{
public:
void func3(){
cout<<"hierar inherit: "<<var1<<endl;
}};

class derived4:public derived{
public:
void func4(){
cout<<"multilevel inheritance: "<<var1<<endl;}
};

class derived5:public virtual base{
public:
void func5(){
cout<<"hybrid inherit: "<<var1<<endl;
}};
class derived6:public virtual base{
public:
void func6(){
cout<<"hybrid : "<<var1<<endl;
}};
class derived7:public derived5,public derived6{
public:
void func7(){
cout<<"hybrid : "<<var1<<endl;}};

int main(){
derived der;
der.func();
derived1 der1;
der1.func1();
derived2 der2;
der2.func2();
derived3 der3;
der3.func3();
derived4 der4;
der4.func4();
derived7 der7;
der7.func7();
return 0;
}

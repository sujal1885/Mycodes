/*      Multiple inheritance
        By Sujal Agrawal
        july 05,2022          */

#include<iostream>
using namespace std;

class Base1{
    protected:
    int baseInt1;
    public:
    void setBaseInt1(int a){
        baseInt1=a;
    }
     
};

class Base2{
    protected:
    int baseInt2;
    public:
    void setBaseInt2(int a){
        baseInt2=a;
    }
     
};

class Base3{
    protected:
    int baseInt3;
    public:
    void setBaseInt3(int a){
        baseInt3=a;
    }
     
};

class Derived : public Base1,public Base2,public Base3{
    public:
    void show(){
        cout<<"The value of BaseInt1 is : "<<baseInt1<<endl;
        cout<<"The value of BaseInt2 is : "<<baseInt2<<endl;
        cout<<"The value of BaseInt3 is : "<<baseInt3<<endl;
    }
};


int main()
{
  Derived der;
  der.setBaseInt1(5);
  der.setBaseInt2(3);
  der.setBaseInt3(55);
  der.show();
  return 0;
}        
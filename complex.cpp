// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class complex{
public:
    int real,img;
public:
    void input(){
        cin>>real>>img;
    }
    void display(){
        cout<< real<<"+"<<img<<"i"<<endl;
    }
    complex(){
        //constructor
        real = 5;
        img = 4;
    }
    complex add(complex c){
        complex c1;
        c1.real = real+c.real;
        c1.img = img+c.img;
        return c1;
    }
  
};
int main() {
    // Write C++ code here
    complex obj;
    complex c2;
    complex s;
    c2.display();
    obj.input();
    obj.display();
    s = obj.add(c2);
    s.display();

    return 0;
}

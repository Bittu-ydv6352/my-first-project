#include<iostream>
using namespace std;
int main() {
    //Part 01: Arithmetic Operators
    cout<<"===Arithmetic Operators======"<<endl;
    int a = 15, b = 15;
    cout<<"a ="<<a<<",b ="<<b<<endl;
    cout<<"Add: "<<a+b<<endl;
    cout<<"Sub: "<<a-b<<endl;
    cout<<"Mul: "<<a*b<<endl;
    cout<<"Div: "<<a/b<<endl;
    cout<<"Mod: "<<a%b<<endl;


    //Part 02: Relational Operators
    cout<<"===Relational Operators==="<<endl;
    int x=10, y=20;
    cout<<"x ="<<x<<",y ="<<y<<endl;
    cout<<"x>y: "<<(x>y)<<endl;
    cout<<"x<y: "<<(x<y)<<endl;
    cout<<"x==y: "<<(x==y)<<endl;
    cout<<"x!=y: "<<(x!=y)<<endl;

    //Part 03: Logical Operators
    cout<<"===Logical Operators==="<<endl;
    int num=12;
    cout<<"num ="<<num<<endl;
    cout<<"Positive AND Even? "<<(num>0 && num%2==0)<< endl;
    cout<<"Negative OR Odd? "<<(num<0 && num%2==0)<<endl;
    cout<<"NOT Zero? "<<(!num==0)<<endl;
}
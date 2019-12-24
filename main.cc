#include<iostream>
using namespace std;
#include "math_function.cc"
int main(){
  cout<<"first input"<<endl;
  cout<<"second input"<<endl;
  cout<<"third input"<<endl;
  cout<<"fourth input"<<endl;
  int a=10;
  int b=2.7;
  cout<<"a: "<<a<<" b: "<<b<<endl;
  cout<<"sum: "<<Add(a,b)<<endl;
  cout<<"multi: "<<Multi(a,b)<<endl;
  return 0;
}
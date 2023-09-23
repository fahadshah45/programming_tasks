#include<iostream>
using namespace std;
main() {
float vi;
float a;
float t;
float vf;
cout<<"enter initial velocity(m/s): ";
cin>>vi;
cout<<"enter accelaration(m/s^2): ";
cin>>a;
cout<<"enter time(s): ";
cin>>t;
vf=vi+a*t;
cout<<"final velocity(m/s): "<<vf;
}
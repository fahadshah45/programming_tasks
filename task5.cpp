#include<iostream>
using namespace std;
main() {
string name;
float w;
float d;
cout<<"enter the name of the person: ";
cin>>name;
cout<<"enter target weight to loss in kilograms: ";
cin>>w;
d=w*15;
cout<<name<<"will need "<<d<<" days to lose "<<w<<" kg of weight by following the doctor suggestion ";
}
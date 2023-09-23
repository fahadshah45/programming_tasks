#include<iostream>
using namespace std;
main() {
int age;
int timesmoved;
int noOfHouses;
int average;
cout<<"enter the person age: ";
cin>>age;
cout<<"the number of times they moved: ";
cin>>timesmoved;
noOfHouses=timesmoved+1;
average=age/noOfHouses;
cout<<"average number of years lived in the same house: "<<average;
}

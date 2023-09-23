#include<iostream>
using namespace std;
main() {
int sizeofbag;
int costofbag;
int area;
int costperpound;
int costpersquarefoot;
cout<<"enter the size of the fertilizer bag in pound: ";
cin>>sizeofbag;
cout<<"enter the cost of bag: ";
cin>>costofbag;
cout<<"enter the area in square feet that can be covered by the bag: ";
cin>>area;
costperpound=costofbag/sizeofbag;
costpersquarefoot=costofbag/area;
cout<<"cost of fertilizer per  pound: "<<costperpound<<endl;
cout<<"cost of fertilizer per square foot: "<<costpersquarefoot<<endl;
}


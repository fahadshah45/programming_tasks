# include <iostream>
using namespace std;
main ()
{
int sqmeters;
int width;
int height;
int area;
int walls;

cout<<"Number of square meters you can paint: ";
cin>>sqmeters;

cout<<"Width of the single wall (in meters): ";
cin>>width;

cout<<"Height of the single wall (in meters): ";
cin>>height;

area=height*width;
walls=sqmeters/area;

cout<<"Number of walls you can paint: "<<walls;



}
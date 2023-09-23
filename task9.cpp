#include<iostream>
using namespace std;
main(){
	int four_digit_number;
	int num1;
	int num2;
	int num3;
	int num4;
	cout<<"Enter a 4-digit number: ";
	cin>>four_digit_number;
	num1=four_digit_number%10;
	num2=(four_digit_number/10)%10;
	num3=(four_digit_number/100)%10;
	num4=(four_digit_number/1000)%10;
	int sum;
	sum=num1+num2+num3+num4;
	cout<<"Sum of the individual digits: "<<sum;
}
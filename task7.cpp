#include<iostream>
using namespace std;
main() {
string moviename;
int adultticketprice;
int childticketprice;
int adultsoldticket;
int childsoldticket;
int charitypercentage;
int totalpriceofticketsold;
int donation;
int remainingamount;
cout<<"enter name of movie: ";
cin>>moviename;
cout<<"enter price of adult ticket: ";
cin>>adultticketprice;
cout<<"enter the price of child ticket: ";
cin>>childticketprice;
cout<<"enter number of adult tickets sold: ";
cin>>adultsoldticket;
cout<<"enter number of child ticket sold: ";
cin>>childsoldticket;
cout<<"enter the percentage of the amount to be donated to charity: ";
cin>>charitypercentage;
totalpriceofticketsold=(adultsoldticket*adultticketprice)+(childsoldticket*childticketprice);
donation=totalpriceofticketsold*0.1;
remainingamount=totalpriceofticketsold-donation;
cout<<moviename<<endl;
cout<<"total amount generated from ticket: "<<totalpriceofticketsold<<endl;
cout<<"donation to charity(10%): "<<donation<<endl;
cout<<"remaining amount after donation: "<<remainingamount;
}


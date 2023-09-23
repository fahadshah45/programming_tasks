#include<iostream>
using namespace std;
main() {
float vegetablePrice;
float fruitPrice;
int kilogramFruit;
int kilogramVegetable;
float totalEarningInCoins;
float earningInRuppee;
cout<<"enter vegetable price per kg(in coins): ";
cin>>vegetablePrice;
cout<<"enter fruit price per kg(in coins): ";
cin>>fruitPrice;
cout<<"enter total kilogram of fruit: ";
cin>>kilogramFruit;
cout<<"enter total kilogram of vegetable: ";
cin>>kilogramVegetable;
totalEarningInCoins=(vegetablePrice*kilogramVegetable)+(fruitPrice*kilogramFruit);
cout<<"total earning in coins: "<<totalEarningInCoins<<endl;
earningInRuppee=totalEarningInCoins/1.94;
cout<<"total earning in ruppee(rps): "<<earningInRuppee;
}


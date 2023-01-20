#include <iostream>
using namespace std;
float price;
float payable;
string day;
string month;
float discount();
main(){
cout << "Enter day: ";
cin >> day;
 cout << "Enter month: ";
 cin >> month;
 cout << "Enter price: ";
 cin >> price;

discount();
cout << payable;
}
float discount(){
   
if(day == "Sunday" && (month == "October" || month == "March" || month == "August")){
  payable = price - price * 0.1;

 }
  
  else
  payable = price;
 
  
  return payable;
  
}
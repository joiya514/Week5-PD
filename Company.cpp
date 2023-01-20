#include <iostream>
using namespace std;
float hour;
int days;
int workers;
void company();

main(){
  cout << "Enter number of workers: ";
  cin >> workers;
  cout << "Enter number of hours needed for project: ";
  cin >> hour;
  cout << "Enter number of days the company has: ";
  cin >> days;

 company ();
}
void company(){
 float dayss = days - (days * 0.1);
 float hours = dayss * workers * 10;
 if(hours >= hour){
  cout << "Yes " << hours - hour << " Hours left.";
 }
 if (hours < hour){

   cout << "No " << hour - hours << " hours are needed.";


 }

}
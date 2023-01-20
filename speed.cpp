#include <iostream>
using namespace std;
string speedchk;

float speed;
string speedinfo();
main(){
  cout << "Enter speed: ";
  cin >> speed;

   speedinfo();
   cout << speedchk;
}
string speedinfo(){
  if(speed <=10){
    speedchk = "slow";
  }
  if(speed > 10 && speed <= 50){
    speedchk = "average";
  }
  if(speed > 50 && speed <= 150){
    speedchk = "Fast";
  }
  if(speed > 150 && speed <=1000){
    speedchk = "Ultra-fast";
  }
  if(speed > 1000){
    speedchk = "Extremely Fast";
  }
  return speedchk;
}
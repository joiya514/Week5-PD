#include <iostream>
using namespace std;
string title();
string tittle;
float age;
char gender;
main(){
  cout << "Enter Age: ";
  cin >> age;
  cout << "Enter gender: ";
  cin >> gender;

  title();
  cout << tittle;
}
string title(){
   if(gender == 'm' && age >= 16){
    tittle = "Mr.";

   }
   if(gender == 'm' && age < 16){
    tittle = "Master";

   }
  if(gender == 'f' && age >= 16){
    tittle = "Mrs.";
  }
  if(gender == 'f' && age < 16){
    tittle = "Miss";
  }
  return tittle;

}
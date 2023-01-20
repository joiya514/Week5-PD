#include <iostream>
#include <cmath>
using namespace std;
int marks;
char result();
char grade;

main(){
 cout << "Enter Marks: ";
 cin >> marks;

 result();
 cout << grade;
}

char result(){
   if(marks < 50){
  grade = 'F';
   }
   if(marks >= 50 && marks < 60){
    grade = 'E';
   }
  if(marks >= 60 && marks < 70){
    grade = 'D';
  }
  if(marks >= 70 && marks < 80){
    grade = 'C';

  }
  if(marks >= 80 && marks < 85){
    grade = 'B';

  }
    if(marks >= 85){
        grade = 'A';
    }

    return grade;
}
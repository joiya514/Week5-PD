#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void moveup();
void movedown();
void moveleft();
void moveright();
void maze();
char getCharAtxy(short int x, short int y);
char nextLocation;
int score = 0;



  int x=5;
  int y=3;
main(){
  bool gameRunning = true;
   system("cls");
    system("color 27");

    maze();
    gotoxy(x, y);
    cout << "P";
    gotoxy(10,7);
    cout << "G";
   
   
    
   while(gameRunning){
    
  if(GetAsyncKeyState(VK_UP)){
    char nextLocation = getCharAtxy(x, y - 1);
    if(nextLocation == ' ' || nextLocation == '.'){
    moveup();

    }
if(nextLocation == 'G'){
gotoxy(x, y);
   cout << "I";
Sleep(500);
gotoxy(x, y);
cout << "i";
Sleep(500);
gotoxy(x, y);
cout << "_";
Sleep(500);
gotoxy(x, y);
cout << "Game Over!";
gotoxy(5, 25);
   return 0;
   }
if(nextLocation == '.'){
   score = score + 1;
gotoxy(20, 24); 
   cout << "Score: " << score;
    }
    
    }
    
   if(GetAsyncKeyState(VK_DOWN)){
     char nextLocation = getCharAtxy(x, y + 1);
    if(nextLocation == ' ' || nextLocation == '.'){
    movedown();
}
   
   
    if(nextLocation == 'G'){
gotoxy(x, y);
   cout << "I";
Sleep(500);
gotoxy(x, y);
cout << "i";
Sleep(500);
gotoxy(x, y);
cout << "_";
Sleep(500);
gotoxy(x, y);
cout << "Game Over!";
gotoxy(5, 25);
   return 0;
   }
if(nextLocation == '.'){
   score = score + 1;
gotoxy(20, 24); 
   cout << "Score: " << score;
    }
    
   }

   if(GetAsyncKeyState(VK_LEFT)){
     char nextLocation = getCharAtxy(x - 1, y);
    if(nextLocation == ' ' || nextLocation == '.'){
    moveleft();
   }
if(nextLocation == 'G'){
gotoxy(x, y);
   cout << "I";
Sleep(500);
gotoxy(x, y);
cout << "i";
Sleep(500);
gotoxy(x, y);
cout << "_";
Sleep(500);
gotoxy(x, y);
cout << "Game Over!";
gotoxy(5, 25);
   return 0;
   }
if(nextLocation == '.'){
   score = score + 1;
gotoxy(20, 24); 
   cout << "Score: " << score;
    }
   }
   if(GetAsyncKeyState(VK_RIGHT)){
     char nextLocation = getCharAtxy(x + 1, y);
    if(nextLocation == ' ' || nextLocation == '.'){
    moveright();
    
   }
if(nextLocation == 'G'){
gotoxy(x, y);
   cout << "I";
Sleep(500);
gotoxy(x, y);
cout << "i";
Sleep(500);
gotoxy(x, y);
cout << "_";
Sleep(500);
gotoxy(x, y);
cout << "Game Over!";
gotoxy(5, 25);
   return 0;
   }
if(nextLocation == '.'){
   score = score + 1;
gotoxy(20, 24); 
   cout << "Score: " << score;
    }

   
   }
}
}
  
  

void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


  
void moveup(){
    
    gotoxy(x, y);
    cout << " ";
    y = y - 1;
    gotoxy(x, y);
    cout << "P";
    Sleep(100);
    
}
void movedown(){
    gotoxy(x, y);
    cout << " ";
    y =  y + 1;
    gotoxy(x, y);
    cout << "P";
   Sleep(100);
}
void moveleft(){
    gotoxy(x, y);
    cout << " ";
    x = x - 1;
    gotoxy(x, y);
    cout << "P";
    Sleep (50);
}
void moveright(){
    gotoxy(x, y);
    cout << " ";
    x = x + 1;
    gotoxy(x , y);
    cout << "P";
    Sleep(50);
   
}

   
    
void maze(){
  
cout << "##############################################################################"<< endl;
cout << "||.. ...........................................................  ......    ||"<< endl;
cout << "||.. %%%%%%%%%%%%%%%%%         ...      %%%%%%%%%%%%%%%%   |%|..   %%%%     ||"<< endl;
cout << "||..        |%|    |%|      |%|...      |%|          |%|   |%|..    |%|     ||"<< endl;
cout << "||..        |%|    |%|      |%|...      |%|          |%|   |%|..    |%|     ||"<< endl;
cout << "||..        %%%%%%%%%   . . |%|...      %%%%%%%%%%%%%%%%      ..   %%%%.    ||"<< endl;
cout << "||..        |%|         . . |%|...     .................  |%| ..       .    ||"<< endl;
cout << "||..        %%%%%%%%%%%%. . |%|...     %%%%%%%%%%%%%%     |%| ..   %%%%.    ||"<< endl;
cout << "||..                 |%|.              |%|........        |%| ..    |%|.    ||"<< endl;
cout << "||..     ........... |%|.              |%|........|%|         ..    |%|.    ||"<< endl;
cout << "||..|%|  |%|%%%%%|%|.|%|. |%|             ........|%|         ..|%|.        ||"<< endl;
cout << "||..|%|  |%|     |%|..    %%%%%%%%%%%%%%  ........|%|          .|%|.        ||"<< endl;
cout << "||..|%|  |%|     |%|..            ...|%|      %%%%%%%         . |%|.        ||"<< endl;
cout << "||..|%|              .            ...|%|                 |%|  ..|%|.        ||"<< endl;
cout << "||..|%|  %%%%%%%%%%%%%%%%         ...|%|%%%%%%%%%%%%     |%|  ..|%|%%%%%%   ||"<< endl;
cout << "||....................................................   |%|  ...........   ||"<< endl;
cout << "||   .................................................            .......   ||"<< endl;
cout << "||..|%|  |%|     |%|..    %%%%%%%%%%%%%%  ........|%|    |%|  ..|%|.        ||"<< endl;
cout << "||..|%|  |%|     |%|..            ...|%|      %%%%%%%    |%|  ..|%|.        ||"<< endl;
cout << "||..|%|              .            ...|%|                 |%|  ..|%|.        ||"<< endl;
cout << "||..|%|  %%%%%%%%%%%%%%%%         ...|%|%%%%%%%%%%%%     |%|  ..|%|%%%%%%   ||"<< endl;
cout << "||....................................................   |%|  ...........   ||"<< endl;
cout << "||   .................................................           ........   ||"<< endl;
cout << "##############################################################################"<< endl;
}
char getCharAtxy(short int x, short int y){ 

 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' '; }
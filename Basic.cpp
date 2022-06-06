//print, input
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;  
int main( ) {  
  int age;  
   cout << "Enter your age: ";  
   cin >> age;  
   cout << "Your age is: " << age << endl;

   char ary[] = "Welcome to C++ tutorial";  
   cout << "Value of ary is: " << ary << endl;  
}

//Array:
//C++中記憶體空間一定是連續的


//Vector (底層是Array)
//- 取值: Begin, End, Index
//- for

//Structure: struct size


//Bitwise Operation
//const, static, volatile, union, 
/*
union AA
{
  char a[2];
  int s;
};
int main(){
  AA aa = { 0 };
  aa.a[0] = 12;
  aa.a[1] = 1;
  printf("%x\n", aa.s);           //10c
  printf("%d\n", sizeof(aa));     //4
  getchar();
  return 0;
}
*/

//enum
//https://www.geeksforgeeks.org/c-multiple-choice-questions/

//Switch Case:
//沒break就直接往下跑 

//OO
//-物件
//-封裝
//-多型
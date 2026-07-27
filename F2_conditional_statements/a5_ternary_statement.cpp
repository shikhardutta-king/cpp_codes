#include<iostream>
using namespace std;
int main(){
  //unary mean when operation is perform on only one operator
  //binary mean when operations is performing with two operation like if else , and not if- else if- else
  //TERNARY
  /*
  when operation is perform in more then two condition and in one line
  syntex to convert if else into ternatry
  condition ? "if true" : "if false";
  */
 // Gernally not preffered because it is hard to read ternary conditions
 int num = 14;
 cout<< (num%2 ==0 ? "Is even" : "Is not even")<<endl;
 cout<<"Code executed";
 return 0;
}
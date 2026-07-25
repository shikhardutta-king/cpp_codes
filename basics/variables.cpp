//Just like in maths, in coding also variable is the container which can contain deffrent values with deffrent datatypes
#include<iostream>
using namespace std;
int main(){
  int age = 21;  //age is a variable which contain a value of integer datatype
  string name = "Shikhar Dutta";  //name here is just a variable which contain any string datatype 
  bool birthday = true;  //This is boolean datatype which contain true and false value
  if(birthday == true) {  //this is contitional statement, you will see late, right now don't worry about it
    age++; //this is a urnary operator you will learn in the way
  }
  cout<<age; //now value of age is increased by one because of increment in uranary operator
  //like this you can change the value of variables too
  return 0;
}

#include<iostream>
using namespace std;
int main(){
  //  ---- Infinite loop ----
  /*
  infinite loop can consume you whole memory and you application crashed
  you need to avoide this condtion
  this happen when you dont write ending condition of loop or condition can not be true
  everthing which can be done using for loop can be done using while loop and everthing can be done
  using while loop can be dont using for loop too
  */

  //while loop run until conditon writen inside is true

  //Bellow is the condtion for infinit while loop
  /*
  bool isTrue = true;
  while(isTrue){
    cout<<"This condition is true";
    //you can write "isTrue = false" as you base condition to stop loop but if you dont it can become 
    //infnite loop
  }
  */

  //String is a datatype which is like array of characters
  string name = "Shikhar";
  string password = "password01";
  int count = 0;
  cout<<"Enter your password for \"Shikahr\""<<endl;
  string yourPassword = "";
  while(!(password == yourPassword)){
    count++; //to count in how much time you are writing correct password
    cin >> yourPassword;
    if(password != yourPassword){
      cout<<"Incorrect password"<<endl;
    }
  }
  cout<<endl<<"Correct password"<<endl;
  cout<<"Got correct password in "<<count<<" attempts"<<endl;
  cout<<"Code executed"<<endl;
  return 0;
}
#include<iostream>
using namespace std;
int main(){
  string password = "password01";
  string yourPassword = "";
  while(true){  //here is write true, mean it will run till infinity any we dont want that
    
    cin >> yourPassword; //while taking input space is not count as string in c++
    //so if you leave space it will consider it saprate inputs

    if(password == yourPassword){
      break;  //we write this statement to break loop, so it dont do for infinity
    }
    cout<<"Invalit password"<<endl;  //if password is correct this line will not get printed
    //because loop will break before reaching here
  }
  cout<<"Correct password"<<endl;
  cout<<"Code executed";
  return 0;
}
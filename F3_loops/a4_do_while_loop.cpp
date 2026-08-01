#include<iostream>
using namespace std;
int main(){
  //do while loop execute instruction one time before runing while loop

  string password = "password01";
  string yourPassword = "";

  do{
    cout<<"Enter your password"<<endl;
    cin >> yourPassword;
    if(password != yourPassword) cout<<"Invalid password"<<endl;
  }while(yourPassword != password);

  cout<<"Correct Password"<<endl;
  cout<<"Code executed"<<endl;
  return 0;
}

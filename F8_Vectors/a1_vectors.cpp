//vector is a array like datastructore which is visualized like an array but is dinamic

//      STL (Standard Tamplate Library) for cpp contain all the implementation for datatype in cpp

        //STL CONTAINERS
        /*
            Data structures which act as a container 
             1. Stack
             2. Queue
             3. Hash sets
             4. Vectors
        */

//        to include headerfile of vector
#include<iostream> 
#include<vector>
using namespace std;
int main(){
  // to define vector in cppp
  // vector<   DATA TYPE   >  variable_name;
  vector<int> vec = {1,2,3};
  //To access the value in vector is similar like array
  cout<<vec[0];
  return 0;
}
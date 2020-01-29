/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){

  //initializing array
  int intArray[10];
  int newInt = 0;

  for(int i = 0; i < 10; ++i){
    //prompting user for input
    cout << "Enter a non-negative integer" << endl;
    cin >> newInt;
    if(newInt < 0){
      while(newInt < 0){ //keeps prompting for user input while input is negative
        cout << "Invalid input please enter a valid number." << endl;
        cin >> newInt;
      }
      intArray[i] = newInt; //adding to the array
    }else{
      intArray[i] = newInt; //adding the the array
    }
  }

  for(int i = 0; i < 10; ++i){ //printing the numbers in the array
    cout << "Num " << i + 1 << " : " << intArray[i] << endl;
  }

  return 0;
}

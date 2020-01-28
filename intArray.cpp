#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int intArray[10];
  int newInt = 0;

  for(int i = 0; i < 10; ++i){
    cout << "Enter a non-negative integer" << endl;
    cin >> newInt;
    if(newInt < 0){
      while(newInt < 0){
        cout << "Invalid input please enter a valid number." << endl;
        cin >> newInt;
      }
      intArray[i] = newInt;
    }else{
      intArray[i] = newInt;
    }
  }

  for(int i = 0; i < 10; ++i){
    cout << "Num " << i + 1 << " : " << intArray[i] << endl;
  }

  return 0;
}

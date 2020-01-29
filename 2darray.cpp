/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){

  //initializing the array
  int a[4][5];
  int newInt = 0;

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      //prompting for user input
      cout << "Enter a number for row: " << i << " column: " << j << endl;
      cin >> newInt; //getting user input
      a[i][j] = newInt; //adding the input to the specific position in the array
    }
  }

  //printing the array
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      cout << a[i][j] << " ";
    }
    //at the end of each row printing to a new line
    cout << endl;
  }

  return 0;
}

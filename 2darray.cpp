#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int a[4][5];
  int newInt = 0;

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j < 5; ++j){
      cout << "Enter a number for row: " << i << " column: " << j << endl;
      cin >> newInt;
      a[i][j] = newInt;
    }
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

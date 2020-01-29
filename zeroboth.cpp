/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

class zero{
  public:
    zero(); //default constructor
    void zeroBoth(int &a, int &b); //function prototype

  private:
};

zero::zero(){} //defining the default constructor

void zero::zeroBoth(int &a, int &b){ //passing by reference
  a = 0;
  b = 0;
  cout << "First Number: " << a << " Second number: " << b << endl;
  //printing first and second number after the values are updated
}

int main(int argc, char **argv){

  zero* myZero = new zero(); //initalizing zero object to use the zeroBoth function

  int first = 0;
  int second = 0;

  //user input
  cout << "Enter a number" << endl;
  cin >> first;
  cout << "Enter another number" << endl;
  cin >> second;

  myZero->zeroBoth(first, second);

  return 0;
}

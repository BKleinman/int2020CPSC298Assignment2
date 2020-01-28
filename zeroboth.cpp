#include <iostream>

using namespace std;

class zero{
  public:
    zero();
    void zeroBoth(int &a, int &b);

  private:
};

zero::zero(){}

void zero::zeroBoth(int &a, int &b){
  a = 0;
  b = 0;
  cout << "First Number: " << a << " Second number: " << b << endl;
}

int main(int argc, char **argv){

  zero* myZero = new zero();

  int first = 0;
  int second = 0;

  cout << "Enter a number" << endl;
  cin >> first;
  cout << "Enter another number" << endl;
  cin >> second;

  myZero->zeroBoth(first, second);

  return 0;
}

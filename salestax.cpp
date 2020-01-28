#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  taxRate = taxRate/100;
  float finalCost = cost * (1 + taxRate);
  return finalCost;
}

int main(int argc, char **argv){

  float price = 0.0;
  float tax = 0.0;

  cout << "Enter the price of the item before tax" << endl;
  cin >> price;
  cout << "Enter the tax rate" << endl;
  cin >> tax;

  cout << "The price of the item after tax is: " << addTax(tax, price) << endl;

  return 0;
}

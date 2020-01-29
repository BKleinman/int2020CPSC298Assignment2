/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){ //defining the function that calculates
  taxRate = taxRate/100;
  float finalCost = cost * (1 + taxRate);
  return finalCost;
}

int main(int argc, char **argv){

  //initializing
  float price = 0.0;
  float tax = 0.0;

  //user input
  cout << "Enter the price of the item before tax" << endl;
  cin >> price;
  cout << "Enter the tax rate" << endl;
  cin >> tax;

  //printing to screen
  cout << "The price of the item after tax is: " << addTax(tax, price) << endl;

  return 0;
}

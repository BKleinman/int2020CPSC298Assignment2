/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
#include <string>
using namespace std;

void getLength(float& feet, float& inches){
  //getting user input
  cout << "Enter the length of the object (only the feet component)." << endl;
  cin >> feet;
  cout << "Enter the remaining length of the object in inches." << endl;
  cin >> inches;
}

float convert(float feet, float& inches, float& meters, float& centimeters){
  feet += (inches/12.0); //extra inches converted to decimal places for feet
  centimeters = (feet*0.3048*100); //converting feet to cm
  while(centimeters > 100){//looping to get meters from centimeters
    meters += 1;
    centimeters -= 100;
  }
}

void output(float feet, float inches, float meters, float centimeters){
  cout << feet <<  " Feet " << inches << " Inches is equivalent to " << meters  << " Meters " << centimeters << " Centimeters"<< endl;
  //printing to screen
}

int main(int argc, char **argv){

  //initalizing
  float feet = 0.0;
  float inches = 0.0;
  float meters = 0.0;
  float centimeters = 0.0;

  //variables used to control the while loop
  bool passGo = true;
  string check = "";

  while(passGo){ //allowing for the user to enter multiple values
    getLength(feet, inches);
    convert(feet, inches, meters, centimeters);
    output(feet, inches, meters, centimeters);
    cout << "Type 'exit' to exit." << endl;
    cout << "Hit any key and enter to continue." << endl;
    cin >> check;
    if(check == "exit"){//if user types exit the while loop terminates
      passGo = false;
    }else{
      continue;
    }
  }

  return 0;
}

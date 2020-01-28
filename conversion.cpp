#include <iostream>
#include <string>

using namespace std;

float getLength(){
  float feet = 0.0;
  float inches = 0.0;
  cout << "Enter the length of the object (only the feet component)." << endl;
  cin >> feet;
  cout << "Enter the remaining length of the object in inches." << endl;
  cin >> inches;
  inches = inches/12.0;
  float newLength = feet + inches;
  return newLength;
}

float convert(float lengthInFeet){
  float lengthInMeters = lengthInFeet * 0.3048;
  return lengthInMeters;
}

void output(float meters){
  cout << "Length in meters: " << meters << endl;
  float centimeters = meters/100;
  cout << "Length in centimeters: " << centimeters << endl;
}

int main(int argc, char **argv){

  bool passGo = true;
  string check = "";

  while(passGo){
    float feet = getLength();
    float meters = convert(feet);
    output(meters);
    cout << "Type 'exit' to exit." << endl;
    cout << "Hit any key and enter to continue." << endl;
    cin >> check;
    if(check == "exit"){
      passGo = false;
    }else{
      continue;
    }
  }

  return 0;
}

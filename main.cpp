#include <iostream>

using namespace std;

#include "statistics.h"

int main() {

  statistics stats;
  float value;
  char input, answer, answer2;

  do {
  cout << "Would you like to add to the sequence?(y/n)" << endl;
  cin >> input;

    stats.clear();
  if(input == 'Y' || input == 'y') {

    do {

    cout << "Enter a number: ";
    cin >> value;

    stats.add(value);

    cout << "Would you like to enter another value?(Y/N)" << endl;
    cin >> answer;
  }
  while (answer == 'Y' || answer == 'y');
  }

  else {
    cout << "Empty sequence, no mean could be calculated."  << endl;
    cout << "Number of values entered: 0" << endl;
    cout << "Sum of values entered: 0" << endl;
    cout << "Largest number: Empty sequence." << endl;
    cout << "Last number: Empty sequence." << endl;
    cout << "Smallest number: Empty sequence." << endl;

  }

  if(input == 'Y' || input == 'y') {
    cout << "Mean is: " << stats.getmean() << endl;
    cout << "Number of values entered: " << stats.getCount() << endl;
    cout << "Sum of values entered: " << stats.getsum() << endl;
    cout << "Largest number: " << stats.getlargest() << endl;
    cout << "Last number entered: " << stats.getlastNum() << endl;
    cout << "Smallest number entered: " << stats.getsmallest() << endl;
  }
  else 
    cout << endl;
  cout << "Would you like to run another sequence?(y/n)" << endl;
  cin >> answer2;
  }
  while (answer2 == 'Y' || answer2 == 'y');
}

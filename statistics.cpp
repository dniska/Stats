#include <cmath>

using namespace std;

#include "statistics.h"


statistics::statistics() {

}

statistics::~statistics() {
}

int statistics::getCount() { 

    return count;
  }

void statistics::setCount() {

    count = 0;
  }

double statistics::getlargest() {

    return largest;
  }

void statistics::setlargest() {

    largest = 0.0;
  }

double statistics::getsmallest() {

    return smallest;
  }

void statistics::setsmallest() {

    smallest = 0.0;
  }

double statistics::getmean() {
    
    return mean;
  }

void statistics::setmean() {

    mean = 0.0;
  }

double statistics::getlastNum() {

    return lastNum;
  }

void statistics::setlastNum() {

    lastNum = 0.0;
  }

double statistics::getsum() {

    return sum;
  }
  
void statistics::setsum() {
    
    sum = 0.0;
  }


void statistics::add(double value) {

  if(count == 0) {

    count = 1;
    sum = value;
    mean = value;
    lastNum = value;
    largest = value;
    smallest = value;
  }
  else {

  count = count + 1;
  sum = sum + value;
  mean = (double)sum/(double)count;
  lastNum = value;

  if(value > largest)
    largest = value;
  else if(value < smallest)
    smallest = value;
  else
    smallest = smallest;
  }
}

void statistics::clear() {

  count = 0;
  sum = 0;
  mean = 0;
  lastNum = 0;
  largest =0;
  smallest = 0;

  }

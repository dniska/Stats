#ifndef _STATISTICS
#define _STATISTICS

class statistics {

 public:

  statistics(); //Constructor

  ~statistics(); //Destructor

  int getCount();

  void setCount();

  double getlargest();

  void setlargest();

  double getsmallest();

  void setsmallest();

  double getmean();

  void setmean();

  double getlastNum();
  
  void setlastNum();

  double getsum();
  
  void setsum();

  void add(double value);

  void clear();


 private:

  int count;
  double largest, smallest, mean, lastNum, sum;
};

#include "statistics.cpp"
#endif

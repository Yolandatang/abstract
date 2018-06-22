#ifndef INTEGER_H
#define INTEGER_H

#include"RealNumber.h"

class Interger:public RealNumber
{
public:
  Integer(int c):RealNumber(c)
  {
    inte=c;
  }
  ~Integer(){}
  virtual void print();
  virtual Integer Integer::operator +(const Integer& other);
  virtual Integer Integer::operator *(const Integer& other);
private:
  int inte;
}
Integer Integer::operator +(const Integer& other)
{
  return inte+other.inte;
}
Integer Integer::operator *(const Integer& other)
{
  return inte*other.inte;
}
void Integer::print()
{
  cout<<inte;
}
#endif

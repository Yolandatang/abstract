#ifndef REALNUMBER_H
#define REALNUMBER_H

#include"AbstractNumber.h"

using namespace std;

class RealNumber:public Number
{
  public:
  RealNumber(double m):Number(m)
  {
    real=m;
  }
  ~RealNumber(){}
 virtual  RealNumber RealNumber::operator +(const RealNumber&other);
 virtual  RealNumber RealNumber::operator *(const RealNumber&other);
 virtual  void print();
  private:
  double real=0;
};
RealNumber RealNumber::operator +(const RealNumber& other)
{
  return(real+other.real);
}
RealNumber RealNumber::operator *(const RealNumber& other)
{
  return(real*other.real);
}
void RealNumber::print()
{
  cout<<real;
}
#endif

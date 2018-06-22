#ifndef COMPLEX_H
#define COMPLEX_H

#include"AbstractNumber.h"

class Complex:public Number
{
public:
  Complex(int a,int b):Number(a)
  {
   realpart=a;
   imagpart=b;
  }
  ~Complex(){}
  virtual void print();
  virtual Complex Complex::operator +(const Complex& other);
  virtual Complex Complex::operator *(const Complex& other);
private:
  int realpart;
  int imagpart;
}
Complex Complex::operator +(const Complex& other)
{
  return Complex(realpart+other.realpart,imagpart+other.imagpart);
}
Complex Complex::operator *(const Complex& other)
{
  return Complex(realpart*other.realpart-imagpart*other.imagpart,realpart*other.imagpart+imagpart*other.realpart);
}
void Complex::print()
{
  cout<<realpart<<"+"<<imagpart<<"i";
}
#endif

#ifndef NUMBER_H
#define NUMBER_H

#include<iostream>
#include<cmath>

using namespace std;

class Number
{
public:
  Number(double c)
  {
    c1=c;
  }
  ~Number(){}
 virtual  void print();
 virtual  Number operator +(const Number& other);
 virtual  Number operator *(const Number& other);
private:
   double c1;
};
void Number::print()
{
}
Number Number::add(const Number& other)
{
  return c1+other.c1;
}
Number Number::mul(const Number& other)
{
  return c1*other.c1;
} 
#endif


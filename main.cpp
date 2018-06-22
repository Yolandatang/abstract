#include"AbstractNumber.h"
#include"RealNumber.h"
#include"Complex.h"
#include"Integer.h"
using namespace std;

int main()
{
  double en1,en2;
  cout<<"Please enter two real number: \n1:";
  cin>>en1;
  cout<<"2:";
  cin>>en2;
  RealNumber a(en1);
  RealNumber b(en2);
  RealNumber c=a+b;
  cout<<"RealNumber+RealNumber=";c.print();cout<<endl;
  RealNumber d=a*b;
  cout<<"RealNumber*RealNumber=";d.print();cout<<endl;
  int en3,en4;
  cout<<"Please enter two integer number: \n1:";
  cin>>en3;
  cout<<"2:";
  cin>>en4;
  Integer p(en3);
  Integer q(en4);
  Integer z=p+q;
  Integer y=p*q;
  cout<<"IntegerNumber+IntegerNumber= ";z.print();cout<<endl;
  cout<<"IntegerNumber*IntegerNumber= ";y.print();cout<<endl;
  int en5,en6,en7,en8;
  cout<<"Please enter two complex number: \n1:";
  cin>>en5;cout<<"  ";cin>>en6;
  cout<<"2:";
  cin>>en7;cout<<"  ";cin>>en8;
  Complex one(en5,en6);
  Complex two(en7,en8);
  Complex three=one+two;
  Complex four=one*two;
  cout<<"ComplexNumber+ComplexNumber=";three.print();cout<<endl;
  cout<<"ComplexNumber*ComplexNumber=";four.print();cout<<endl;
  return 0;
}

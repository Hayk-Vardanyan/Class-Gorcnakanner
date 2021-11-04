#include <iostream>

class Complex
{
 public:
 Complex(int r, int i) {this->real = r; this->imagine = i;} 
 Complex() 
{
real = 0;
imagine = 0;
}
 friend Complex operator*(Complex comp1,Complex comp2);
 friend Complex operator+(Complex comp1,Complex comp2);
 friend Complex operator-(Complex comp1,Complex comp2);
 friend std::ostream& operator << (std::ostream& os,const Complex comp);
 void set_real(double d) {this->real = d;}
 void set_imagine(double d) {this->imagine = d;}

 private:
 double real;
 double imagine;
};

 Complex operator*(Complex comp1,Complex comp2)
{
  Complex res;
  res.real = (comp1.real * comp2.real) - (comp1.imagine * comp2.imagine);
  res.imagine = (comp1.imagine * comp2.real) + (comp1.real * comp2.imagine);
  return res;
}



Complex operator+(Complex comp1, Complex comp2)
{
  Complex res;
  res.real = comp1.real + comp2.real;
  res.imagine = comp1.imagine + comp2.imagine;
  return res;
}
Complex operator-(Complex comp1, Complex comp2)
{
  Complex res;
  res.real = comp1.real - comp2.real;
  res.imagine = comp1.imagine - comp2.imagine;
  return res;
}


std::ostream& operator<<( std::ostream& os,const Complex comp)
{
 os << comp.real << " + i" << comp.imagine;
 return os;
}

int main()
{
 Complex obj(3,2);
 Complex obj2(6, 7);
 Complex res; 
 res = obj + obj2;
 res = obj2 - obj;
 res = obj2 * obj;
 std::cout << res; 
}

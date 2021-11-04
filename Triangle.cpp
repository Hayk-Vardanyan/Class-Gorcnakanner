#include <iostream>
#include <cmath>

class Triangle
{
public:
 int get_area();
 int get_perimeter();
 
 void set(int a, int b, int c)
{
this -> a = a;
this -> b = b;
this -> c = c;
}

private:
 
 int a;
 int b;
 int c;
};

int Triangle::get_area()
{
 double area;
 double semiperim = (a + b + c);

 area = semiperim * (semiperim - a) * (semiperim - b) * (semiperim * c);
 return sqrt(area);

}

int Triangle::get_perimeter()
{

return a + b + c;
}
int main()
{
Triangle tr;
tr.set(3, 4, 5);

std::cout << tr.get_area();
std::cout << tr.get_perimeter();
}

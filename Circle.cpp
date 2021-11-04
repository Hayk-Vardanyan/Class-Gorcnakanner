#include <iostream>
#include <cmath>
class Circle
{
public:
double get_area();
double get_circ();
void set_r(int r) {this -> r = r;}

private:
int r;
const double P = 3.14;
};


double Circle::get_circ()
{
return 2 *( P * r);
}

double Circle::get_area()
{
return P * (pow(r, 2));

}
int main()
{
Circle obj;
obj.set_r(32);
std::cout << obj.get_area();

Circle obj2;
obj2.set_r(12);
std::cout << obj2.get_circ();
}

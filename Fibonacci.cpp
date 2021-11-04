#include <iostream>

class Fibonacci
{
public:
Fibonacci() : x(0), y(1), z(x + y) { }
void get_fib(int);
void set(int x){this -> x = x;}
private:
 int x;
 int y;
 int z;
};

void Fibonacci::get_fib(int i)
{
std::cout << y << std::endl;
while(i > 1){
std::cout << z << std::endl;
x = y;
y = z;
z = x + y;
--i;
}
}
int main()
{
Fibonacci obj;
obj.get_fib(3);
}

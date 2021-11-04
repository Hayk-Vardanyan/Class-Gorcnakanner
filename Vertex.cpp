#include <iostream>
#include <random>


class Vertex
{
public:
Vertex();
friend std::ostream& operator<<(std::ostream&, const Vertex&);


private:
int x;
int y;
};

Vertex::Vertex()
{
this -> x = -100 + rand() % 201;
this -> y = -100 + rand() % 201;

}

std::ostream& operator<<(std::ostream& os, const Vertex& obj)
{
std::cout << obj.x << std::endl <<  obj.y;
return os;
}
int main()
{
for(int i = 0; i < 1; ++i)
{
Vertex v;
std::cout << v << std::endl;
}
}

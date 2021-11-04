#include <iostream>

class Planet
{
  public:
  double get_gravity() {return count_gravity();}
  double get_distance() {return this->distance;}
  std::string get_name() {return this->name;}

  void set_name(std::string name) {this->name = name;}
  void set_distance(int distance) {this->distance = distance;}
  void set_r(double r) {this->r = r;}
  void set_M(double M) {this->M = M;}
    

  private:
  double count_gravity();
  double r;
  double M;
  const double G = 6.6743E-11;
  double distance;
  std::string name;
  

};

double Planet::count_gravity()
{
 return (G * M) / (r * r);

}

int main()
{
 Planet Earth;
 Earth.set_name("Earth");
 Earth.set_distance(150);
 Earth.set_r(6371);
 Earth.set_M(5.972E+24);

 std::cout << Earth.get_distance();
 std::cout << Earth.get_name();
 std::cout << Earth.get_gravity();

 
 Planet Elizium;
 Elizium.set_name("Elizium");
 Elizium.set_distance(100);
 Elizium.set_r(1000);
 Elizium.set_M(100000);

 std::cout << Elizium.get_distance();
 std::cout << Elizium.get_name();
 std::cout << Earth.get_gravity();
}

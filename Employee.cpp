#include <iostream>

class Employee
{
  public:

  void set_table(std::string name[],std::string add_arr[],int year_arr[]);
  
  void get_info();
  void set_size(int size) {this->size = size;}

 private:
 int size;
 std::string name_arr[20];
 int year_arr[20];
 std::string add_arr[20];
 std::string salary_arr[20];

};

void Employee::set_table(std::string name_arr[],std::string add_arr[], int year_arr[])
{


 for(int i = 0; i < size ; ++i)
{
  std::cout << "enter the name\n"; 
  std::cin >> name_arr[i];
  this->name_arr[i] = name_arr[i];

  std::cout << "enter the year of joining\n";
  std::cin >> year_arr[i];
  this->year_arr[i] = year_arr[i];


  std::cout << "enter the salary\n";
  std::cin >> salary_arr[i];
  this->salary_arr[i] = salary_arr[i];
  

  std::cout << "enter the address";
  std::cin >> add_arr[i];
  this->add_arr[i] = add_arr[i];
 

  
}

}

void Employee::get_info()
{
 std::cout << "Name\t" << "year of joining\t\t" << "address\n";

 for(int i = 0; i < size; ++i )
{
  std::cout << this -> name_arr[i] << '\t' << this->year_arr[i] << "\t\t\t" << this->add_arr[i] << '\n';

}

}


int main()
{
 Employee workers;
 
 std::cout << "How many workers do you have\t";
 int size;
 std::cin >> size;
 workers.set_size(size);

 std::string str[20];
 std::string str2[20]; 
 int arr[20];
 workers.set_table(str,str2, arr);
 workers.get_info();


}

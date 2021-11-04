#include <iostream>
#include <cstring>
class Student 
{
public:
void get_name() const;
void set_name(char*);
void set_sr(char*);
void get_sr();

private:
char name[20];
char surname[20];
};

void Student::get_sr()
{  
for(int i = 0; i < strlen(surname); ++i){
 
 std::cout << surname[i];

}



}

void Student::get_name() const
{
for(int i = 0; i < strlen(name); ++i){
std::cout << name[i];
}

}


void Student::set_name(char* arr)
{
for(int i = 0; i < strlen(arr); ++i){

 name[i] = arr[i];

}
}

void Student::set_sr(char* arr2)
{

for(int i = 0; i < strlen(arr2); ++i){

surname[i] = arr2[i];

}
}

int main()
{
Student obj;
char nname[55];
char srname[55];
//Student arr[5];

std::cin >> nname;
obj.set_name(nname);
std::cin >> srname;
obj.set_sr(srname);
obj.get_name();
obj.get_sr();
}

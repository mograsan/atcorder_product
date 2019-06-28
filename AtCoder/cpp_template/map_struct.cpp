#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;

struct Employee{
  string name;
  int age;
  Employee(const string name_, const int age_){
    name = name_;
    age = age_;
  }
};

bool operator<(const Employee& a, const Employee& b)
{
  if(a.name < b.name){
    return true;
  }
  if(a.name == b.name){
    if(a.age < b.age){
      return true;
    }
  }

  return false;
}

int main(){
  map<Employee, int> employees;
  employees[Employee("shinpei", 23)] = 200;
  employees[Employee("unko", 11)] = 0;
  cout << employees[Employee("unko", 11)] <<endl;
  cout << employees[Employee("shinpei", 23)] <<endl;
  return 0;
}

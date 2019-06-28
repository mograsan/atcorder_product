#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;

int main(){
  map<tuple<string, string, string>, int> employees;
  employees[make_tuple("person1", "gender", "age")] = 200;
  cout << employees[make_tuple("person1", "gender", "age")] << endl;
}

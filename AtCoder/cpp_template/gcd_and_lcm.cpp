#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;
long long int gcd(long long int a,long long int b) {
  long long int v0 = a, v1 = b, v2 = a % b;
  while (v2 != 0) {
    v0 = v1;
    v1 = v2;
    v2 = v0 % v1;
  };
  return v1;
}

long long int lcm(long long int a, long long int b) {
  return a * b / gcd(a, b);
}

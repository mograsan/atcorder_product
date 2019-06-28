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
int main() {
  long long int A, B, C, D;
  cin >> A >> B >> C >> D;
  long long int diff = B - A + 1;
  long long int two_r = A % C;
  if(two_r == 0){
    two_r = C;
  }
  long long int three_r = A % D;
  if(three_r == 0){
    three_r = D;
  }

  long long int E = lcm(C, D);
  long long int six_r = A % E;
  if(six_r == 0){
    six_r = E;
  }

  long long int num_two = (diff - C + two_r) / C;
  if((diff - C + two_r) % C > 0){
    num_two++;
  }
  long long int num_three = (diff - D + three_r) / D;
  if((diff - D + three_r) % D > 0){
    num_three++;
  }
  long long int num_six = (diff - E + six_r) / E;
  if((diff - E + six_r) % E > 0){
    num_six++;
  }
  long long int sum = diff - (num_two + num_three - num_six);
  cout << sum << endl;
  return 0;
}

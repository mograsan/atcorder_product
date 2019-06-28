#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
#include <algorithm>
using namespace std;
int main() {
  long long int N;
  cin >> N;
  long long int A[N];
  long long int B[N];
  vector<pair<int,int> > vec;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    vec.emplace_back(b, a);
  }
  sort(vec.begin(), vec.end());
  long long int sum = 0;
  for(auto v:vec){
    sum += v.second;
    if(sum > v.first){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}

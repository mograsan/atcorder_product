#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;
int main() {
  int N, L;
  cin >> N >> L;
  int sum = 0;
  if(L + N - 1 < 0){
    for(int i = 1; i <= N - 1; i++){
      sum += L + i - 1;
    }
  }
  else if (L <= 0 && 0 <= L + N - 1){
    for(int i = 1; i <= N; i++){
      sum += L + i - 1;
    }
  }
  else{
    for(int i = 2; i <= N; i++){
      sum += L + i - 1;
    }
  }
  cout << sum << endl;
  return 0;
}

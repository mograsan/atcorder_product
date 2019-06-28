#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main(){
  int N;
  long long int K;
  cin >> N >> K;
  int a[N];
  long long int rui[N];
  long long int sum = 0;
  long long int cnt = 0;
  for(int i = 0; i < N; i++){
    cin >> a[i];
    sum += a[i];
    rui[i] = sum;
    if(sum >= K){
      cnt++;
    }
  }
  if(sum < K){
    cout << 0 << endl;
    return 0;
  }
  bool flag = false;
  for(int i = 0; i < N-1; i++){
    if(rui[N-1]-rui[i] < K){
      break;
    }
    else if(rui[N-1]-rui[i] == K){
      cnt++;
      break;
    }
    for(int j = 1; j <= N-1-i; j++){
      long long tmp = rui[i+j] - rui[i];
      if(tmp >= K){
        cnt+=N-i-j;
        break;
      }
    }
  }

  cout << cnt << endl;
  return 0;
}

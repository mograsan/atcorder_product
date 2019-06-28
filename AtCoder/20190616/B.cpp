#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  int a[N];
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }
  int sum = 0;
  int cnt = 1;
  for(int i = 0; i < N; i++){
    sum += a[i];
    if(sum > X){
      break;
    }
    else{
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}

#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int calc_stair(int N){
  int sum = 1;
  int max_itr = N / 2;
  for(int i = 1; i <= max_itr; i++){
    int num = N - i;
    int mult1 = 1;
    int mult2 = 1;
    for(int j = 0; j <= i - 1; j++){
      mult1 *= num - j;
      mult2 *= j + 1;
    }
    int combi = mult1/mult2;
    sum += combi;
  }
  return sum;
}
int main()
{
  int N, M;
  cin >> N;
  cin >> M;
  int a[M];
  int prev_b = -5;
  bool end = false;
  for(int i = 1; i <= M; i++){
    int tmp;
    cin >> tmp;
    a[i-1] = tmp;
    if(tmp - prev_b == 1){
      end = true;
      break;
    }
    prev_b = tmp;
  }
  if(end){
    cout << 0 << endl;
    return 0;
  }
  int combi = 1;
  int now = 0;
  int step;
  for(int j = 0; j <= M - 1; j++){
    step = a[j] - 1 - now;
    combi *= calc_stair(step);
    now = a[j] + 1;
  }
  step = N - now;
  combi *= calc_stair(step);
  cout << combi%1000000007<< endl;

  return 0;
}

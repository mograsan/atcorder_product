#include <iostream>
#include <string>
#include<math.h>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    double onechan = 0.000000000000;
    if(N >= K){
      onechan = double(N-K+1)/N;
    }
    double prob = onechan;
    int lim = min(N, K-1);
    for(int i=1; i <=lim; i++){
      double point = double(i);
      int cnt = 0;
      while(point < K){
        point = point * 2.0;
        cnt++;
      }
      prob = prob + double(1)/N * pow(double(0.5), double(cnt));
      //cout<<double(1)/N * pow(double(0.5), double(cnt))<<endl;
    }
    cout << fixed << setprecision(12) << prob << endl;
    //cout<<prob<<endl;
    return 0;
}

#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pii pair<int, int>
#define plli pair <lli, lli>
#define F(i,n) for(lli (i)=0;(i)<(n);(i)++)
#define FR(i,n) for(lli (i)=(n)-1;(i)>=0;(i)--)
#define FSG(i,a,b) for(lli (i)=(a);(i)<(b);(i)++)
#define FSGR(i,a,b) for(lli (i)=(b)-1;(i)>=(a);(i)--)
#define VAL(n) cout << n << endl;
#define VALD(n) cout << #n << ": " << n << endl;

int main(){
  int N, D;
  cin >> N >> D;
  int x[N][D];
  F(i, N){
    F(j, D){
      cin >> x[i][j];
    }
  }
  int cnt = 0;
  F(i, N-1){
    FSG(j, i+1, N){
      double dist = 0.0;
      F(k, D){
        dist+=(x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
      }
      dist = sqrt(dist);
      if(ceil(dist) == floor(dist)){
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}

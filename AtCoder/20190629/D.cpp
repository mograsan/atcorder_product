#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
#define ll long long
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

ll MOD = 1000000007;
const int MAX = 2000;
lli c[MAX+1][MAX+1];
void makec(lli n){
  c[0][0] = 1;
  FSG(i, 1, n+1){
    F(j, i+1){
      if(j == 0 && j == i){
        c[i][j] = 1;
      }
      else{
        c[i][j] = (c[i-1][j] + c[i-1][j-1])%MOD;
      }
    }
  }
}

int main(){
  int N, K;
  cin >> N >> K;
  makec(MAX);
  F(i, K){
    cout << (c[N-K+1][i+1] * c[K-1][i]) % MOD << endl;
  }
  return 0;
}

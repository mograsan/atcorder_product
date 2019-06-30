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
  int N;
  cin >> N;
  int p[N];
  F(i, N){
    cin >> p[i];
  }
  int cnt = 0;
  FSG(i,1,N-1){
    if(max(p[i], max(p[i+1], p[i-1])) != p[i] && min(p[i], min(p[i+1], p[i-1]))){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}

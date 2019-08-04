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
  lli a[N];
  lli sum = 0;
  F(i, N){
    cin >> a[i];
    sum += a[i];
  }
  lli prev = 0;
  F(i, N){
    lli result = sum;
    int idx = (i+1)%N;
    if(i == 0){
      F(j, (N-1)/2){
        result -= 2*a[idx];
        idx = (idx+2)%N;
      }
    }
    else{
      result = 2*a[i-1] - prev;
    }
    cout << result;
    if(i != N-1){
      cout << " ";
    }
    prev = result;
  }
  cout << endl;
  return 0;
}

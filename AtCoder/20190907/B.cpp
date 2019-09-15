// #include <iostream>
// #include <string>
// #include <math.h>
// #include <map>
// #include <vector>
// #include <tuple>
// #include <algorithm>
// #include <queue>
#include<bits/stdc++.h>
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
  lli b[N];
  lli c[N-1];
  F(i, N){
    cin >> a[i];
  }
  F(i, N){
    cin >> b[i];
  }
  F(i, N-1){
    cin >> c[i];
  }
  lli sum = 0;
  F(i, N){
    lli tmp = a[i]-1;
    sum += b[tmp];
    if (i != 0 && a[i] == a[i-1] + 1){
      sum += c[a[i-1]-1];
    }
  }
  cout << sum << endl;
  return 0;
}

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
  lli b[N-1];
  lli sum = 0;
  F(i, N){
    cin >> b[i];
  }
  if(N==2){
    sum = 2*b[0];
  }
  else{
    F(i, N-1){
      lli tmp = b[i];
      if(i == 0){
        if(b[i] < b[i+1]){
          a[i] = b[i];
          a[i+1] = b[i];
        }
        else{
          a[i] = b[i];
          a[i+1] = b[i+1];
        }
      }
      else if (i == N-2){
        a[i+1] = b[i];
      }
      else{
        if(b[i] < b[i+1]){
          a[i+1] = b[i];
        }
        else{
          a[i+1] = b[i+1];
        }
      }
    }
    F(i, N){
      sum += a[i];
    }
  }
  cout << sum << endl;
  return 0;
}

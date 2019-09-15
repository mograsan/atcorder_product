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
  int N, K, Q;
  cin >> N >> K >> Q;
  lli ans[N] = {0};
  if (K > Q){
    F(i, N){
      cout << "Yes" << endl;
    }
  }
  else{
    F(i, Q){
      lli tmp = 0;
      cin >> tmp;
      ans[tmp-1] = ans[tmp-1] + 1;
    }
    F(i, N){
      if (K - (Q - ans[i]) > 0){
        cout << "Yes" << endl;
      }
      else{
        cout << "No" << endl;
      }
    }
  }
  return 0;
}

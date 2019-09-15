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
  int A, B;
  cin >> A >> B;
  int sum = 1;
  int cnt = 0;
  while(true){
    sum += A - 1;
    cnt ++;
    if (sum >= B){
      break;
    }
  }
  if (B == 1){
    cnt = 0;
  }
  cout << cnt << endl;
  return 0;
}

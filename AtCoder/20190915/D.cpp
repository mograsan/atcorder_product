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
  int N, M;
  cin >> N >> M;
  lli sum = 0;
  priority_queue<int> pqi;
  F(i, N){
    lli tmp = 0;
    cin >> tmp;
    pqi.push(tmp);
  }
  F(i, M){
    lli max = pqi.top();
    lli q = max / 2;
    pqi.pop();
    pqi.push(q);
  }
  F(i, N){
    sum += pqi.top();
    pqi.pop();
  }
  cout << sum << endl;
  return 0;
}
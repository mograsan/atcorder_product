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
lli combi(lli n, lli k){
  lli nume = 1;
  lli deno = 1;
  lli cnume = n;
  lli cdeno = k;
  F(i, k){
    nume *= cnume;
    cnume--;
    deno *= cdeno;
    cdeno--;
  }
  return nume / deno;
}

int main(){
  int N;
  cin >> N;
  string s[N];

  F(i, N){
    string st;
    cin >> st;
    vector<string> v;
    for(int j = 0; j < 10; j++){
      v.emplace_back(st.substr(j, 1));
    }
    sort(v.begin(), v.end());
    string tmps;
    tmps = v[0];
    FSG(j, 1, 10){
      tmps += v[j];
    }
    s[i] = tmps;
  }
  sort(s, s + N);

  lli cnt = 0;
  int cont = 1;
  FSG(i, 1, N){
    if(s[i-1] == s[i]){
      cont++;
    }
    if(i == N-1 || s[i-1] != s[i]){
      cnt += combi(cont, 2);
      cont = 1;
    }
  }
  cout << cnt << endl;

  return 0;
}

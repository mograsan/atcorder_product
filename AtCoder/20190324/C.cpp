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
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  string s[N];
  for(int i = 0; i < N; i++){
    s[i] = S.substr(i, 1);
  }
  bool flag = false;
  vi vec;
  F(i, N){
    string tmp = s[i];
    if(tmp == "A"){
      flag = true;
    }
    else if(tmp == "C" && flag){
      flag = false;
      vec.emplace_back(i);
    }
    else{
      flag = false;
    }
  }
  for(auto v:vec){
    cout << v;
  }
  F(i, Q){
    int s1 = 0;
    int s2 = 0;
    cin >> s1 >> s2;
    int cnt = 0;
    for(auto v:vec){
      if(v-1 >= s1 - 1 && v <= s2 - 1){
        cnt++;
      }
      else if(v > s2){
        break;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

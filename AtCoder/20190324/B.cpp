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
  string S;
  cin >> S;
  string s[S.length()];
  for(int i = 0; i < S.length(); i++){
    s[i] = S.substr(i, 1);
  }
  int cnt = 0;
  int maxcnt = 0;
  int start = 0;
  int maxs = 0;
  int maxg = 0;
  F(i, S.length()){
    if(s[i] == "A" || s[i] == "T" || s[i] == "G" || s[i] == "C"){
      cnt++;
    }
    else{
      if(maxcnt < cnt){
        maxcnt = cnt;
      }
      cnt = 0;
    }
  }
  cout << maxcnt << endl;
  return 0;
}

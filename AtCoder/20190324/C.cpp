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
  int rui[N];
  int cnt = 0;
  F(i, N){
    string tmp = s[i];
    if(tmp == "A"){
      flag = true;
    }
    else if(tmp == "C" && flag){
      flag = false;
      cnt++;
    }
    else{
      flag = false;
    }
    rui[i] = cnt;
  }
  F(i, Q){
    int s1 = 0;
    int s2 = 0;
    cin >> s1 >> s2;
    int rcnt = rui[s2-1] - rui[s1-1];
    cout << rcnt << endl;
  }
  return 0;
}

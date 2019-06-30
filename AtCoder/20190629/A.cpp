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
  int cnt1 = 0;
  int cnt2 = 0;
  string c1 = " ";
  string c2 = "i";
  F(i, S.length()){
    string c = s[i];
    cout << c << endl;
    if(i == 0){
      c1 = c;
      cnt1++;
    }
    else{
      if(c1 == c){
        cnt1++;
      }
      else if (c2 != c && i == 2){
        c2 = c;
        cnt2++;
      }
      else if(c2 == c){
        cnt2++;
      }
    }
  }
  if(cnt1 == 2 && cnt2 == 2){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}

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
  int cnt[S.length()];
  int fr_id = 0;
  int ll_id = S.length();
  int sr_id = S.length();
  int sl_id = S.length();
  for(int i = 0; i < S.length(); i++){
    s[i] = S.substr(i, 1);
  }

  for(int i = 0; i < S.length(); i++){
    if(i == 0 || s[i] == "R" && s[i-1] == "L"){
      fr_id = i;
    }
    if(s[i] == "R" && s[i+1] == "L"){
      sr_id = i;
    }
    if(s[i] == "L" && s[i-1] == "R"){
      sl_id = i;
    }
    if(i == S.length()-1 || s[i] == "L" && s[i+1] == "R"){
      ll_id = i;
    }
    if(ll_id == i){
      FSG(j, fr_id, ll_id+1){
        if(j == sr_id){
          cout << (sr_id - fr_id) / 2 + 1 + (ll_id - sl_id)/2 + (ll_id - sl_id)%2 << " ";
        }
        else if (j == sl_id){
          cout << (sr_id - fr_id) / 2 + (sr_id - fr_id) % 2+ (ll_id - sl_id)/2 + 1 << " ";
        }
        else{
          cout << 0 << " ";
        }
      }
    }
  }
  cout << endl;
  return 0;
}

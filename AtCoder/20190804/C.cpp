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
  int N;
  cin >> N;
  int h[N];
  int flag = true;
  int cnt = 0;
  F(i,N){
    cin >> h[i];
    if(i!=0){
      if(h[i] < h[i-1]){
        cnt++;
      }
      else if (h[i] > h[i-1]){
        cnt = 0;
      }
      if(h[i-1] - h[i] > 1){
        flag = false;
      }
      if(cnt > 1){
        flag = false;
      }
    }
  }

  if(flag){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}

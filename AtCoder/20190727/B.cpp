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
template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}
int main(){
  int N;
  cin >> N;
  int p[N];
  int pos = 0;
  int num = 0;
  int cnt = 0;
  string res = "YES";
  F(i, N){
    cin >> p[i];
    if(p[i] != i+1){
      if(cnt == 0){
        pos = i;
        num = p[i];
        cnt++;
      }
      else if(cnt == 1 && i == num-1 && p[i] == pos+1){
        cnt++;
      }
      else{
        res = "NO";
      }
    }
  }
  cout << res << endl;

  return 0;
}

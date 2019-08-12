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

int main() {
  long long int N, M;
  cin >> N >> M;
  vector<pair<int, int> > vec;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    vec.emplace_back(a, b);
  }
  sort(vec.begin(), vec.end());
  queue<pii> q;
  F(i, N){
    q.push(vec[i]);
  }
  long long int sum = 0;
  auto c = [](plli ai,plli bi){return ai.second < bi.second;};
  priority_queue<lli, vector<plli>, decltype(c)> pq(c);
  FSG(i, 1, M+1){
    while(q.size() > 0 && (q.front()).first <= i){
      pq.push(q.front());
      q.pop();
    }

    if(pq.size()>0){
      sum += (pq.top()).second;
      pq.pop();
    }
  }
  cout << sum << endl;
  return 0;
}

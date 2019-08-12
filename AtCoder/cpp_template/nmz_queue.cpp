/*{{{*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
// pll pp; -> (pp.first,pp.second)
// vector<vl> pp(n,vl(2)); sort(pp.begin(),pp.end(),[](vl a,vl b){return a[0]<b[0];});

#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define RREP(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define FOR(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define FORR(i,a,b) for(ll (i)=(b)-1;(i)>=(a);(i)--)
#define DEBUG(x) cout << #x << ": " << x << endl
#define CHMAX(a,b) a=max((a),(b))
#define CHMIN(a,b) a=min((a),(b))
/*}}}*/
int main() {
  ll n,m;
  cin >> n >> m;
  vector<pll> a(n);
  REP(i,n){
    ll ai,bi;
    cin >> ai >> bi;
    a[i] = make_pair(ai,bi);
  }
  sort(a.begin(),a.end(),[](pll ai,pll bi){return ai.first < bi.first;});
  queue<pll> q;
  REP(i,n) q.push(a[i]);

  //REP(i,n) cout<< a[i].first << "," << a[i].second << endl;

  auto c = [](pll ai,pll bi){return ai.second < bi.second;};
  priority_queue<ll, vector<pll>, decltype(c)> gain(c);

  ll ans = 0;
  REP(i,m+1){
    while(q.size()>0 && (q.front()).first<=i){
      gain.push(q.front());
      q.pop();
    }
    if(gain.size()>0){
      pll job = gain.top();
      ans += job.second;
      //cout << "Day " << i+1 << ", a=" << job.first << ",b=" << job.second << endl;
      gain.pop();
    }
  }

  cout << ans<< endl;
  return 0;
}

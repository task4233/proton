#include <bits/stdc++.h>

using namespace std;

#define EACH(i,a) for (auto& i : a)
#define FOR(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RFOR(i,a,b) for(int i=(int)b-1;i>=(int)a;--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define debug(x) cerr << #x << ":" << x << endl;
#define OK(ok) cout << (ok ? "Yes" : "No") << endl;
typedef long long ll;

void CINT(){}
template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail) {
  cin >> head; CINT(move(tail)...);
}
#define CIN(...) int __VA_ARGS__;CINT(__VA_ARGS__)
#define LCIN(...) ll __VA_ARGS__;CINT(__VA_ARGS__)
#define SCIN(...) string __VA_ARGS__;CINT(__VA_ARGS__)

const int INF = 1e9 + 1;
const int MOD = 1e9 + 7;
const int MAX_N = 575;

// dp[みてるとこ][重さ]
ll dp[MAX_N][MAX_N * MAX_N];

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  CIN(N, W);
  vector< int > w(N);
  vector< int > v(N);
  vector< int > diff(N);
  REP(i, N) {
    cin >> w[i] >> v[i];
  }
  REP(i, N) {
    diff[i] = w[i] - w[0];
  }

  ll diff;
  RREP(i, N) {
    RREP(j, N) {
      dp[i + 1][j + diff[i]] = max(dp[i + 1][j + diff[i]],
				   dp[i][j] + v[i]);
    }
  }

  ll ans = 0ll;
  W -= w[0];
  REP(i, N + 1) {
    REP(j, N) {
      debug(dp[i][W * i + j]);
      ans = max(ans, dp[i][W * i + j]);
    }
  }

  cout << ans << endl;
  

  return 0;
}


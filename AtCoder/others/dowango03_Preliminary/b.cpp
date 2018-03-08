// ------------------------------------
// Date:2018/ 3/ 8
// Problem:dowango03 preliminary ニコニコレベル b.cpp
//
// ------------------------------------

#include <bits/stdc++.h>

using namespace std;

#define EACH(i,a) for (auto&& i : a)
#define FOR(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RFOR(i,a,b) for(int i=(int)b-1;i>=(int)a;--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define debug(x) cerr << #x << ":" << x << endl

typedef long long ll;

static const int MOD = 1000000007;

pair< int, int > dp[101010];

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  memset(dp, 0, sizeof(dp));
  string T, tmp;
  cin >> T;

  ll ans = 0;
  REP(i, T.size()) {
    dp[i + 1] = dp[i] + max();
  }
  ans += cnt * 2;
  cout << ans << endl;

  return 0;
}

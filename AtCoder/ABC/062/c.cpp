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

const ll LINF = 1e18 + 1;
const int MOD = 1e9 + 7;
const int MAX_N = 1e5 + 1;

ll H, W;

ll solve()
{
  ll res = LINF;
  ll sq1, sq2, sq3;
  
  FOR (wi, 1, W) {
    sq1 = H * wi;
    REP(hi, 2) {
      if (hi == 0) {
	sq2 = H * ((W - wi) / 2);
      } else {
	sq2 = (H / 2) * (W - wi);
      }
      sq3 = H * W - sq1 - sq2;
      ll mx = max(sq1, max(sq2, sq3));
      ll mn = min(sq1, min(sq2, sq3));

      /*
	if (mx - mn < res) {
	debug(wi);
	debug(mx - mn);
	}
      */
      res = min(res, mx - mn);
    }
  }
  return res;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> H >> W;
  ll ans = LINF;
  ans = min(ans, solve());
  swap(H, W);
  ans = min(ans, solve());

  cout << ans << endl;

  return 0;
}


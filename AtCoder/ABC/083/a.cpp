// ------------------------------------
// Date:2018/ 3/ 5
// Problem:ABC 083 Libra a.cpp
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

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int l = a + b;
  int r = c + d;

  string ans;
  if (l == r)     ans = "Balanced";
  else if (l > r) ans = "Left";
  else            ans = "Right";

  cout << ans << endl;
  return 0;
}


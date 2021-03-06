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

const int INF = 1e9 + 1;
const int MAX_N = 1e5 + 1;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  int ans = max(max(a + b, a - b), a * b);

  cout << ans << endl;

  return 0;
}


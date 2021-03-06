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
const int MAX_N = 1e5 + 1;

int c[3][3];

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  REP(i, 3) {
    REP(j, 3) {
      cin >> c[i][j];
    }
  }

  vector< int > b(3);
  REP(i, 3) {
    b[i] = c[0][i];
    // int b0 = c[0][0];
    // int b1 = c[0][1];
    // int b2 = c[0][2];
  }

  bool ok = true;
  FOR(i, 1, 3) {
    vector< int > p(3);
    REP(j, 3) {
      p[j] = c[i][j] - b[j];
    }
    if (!(p[0] == p[1] && p[1] == p[2])) {
      ok = false;
    }
  }

  OK(ok);

  return 0;
}


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <queue>
#include <cmath>
#include <cfloat>
#include <set>
#include <map>

// statics
using namespace std;
using int64 = int_fast64_t;
using PAIR = pair<int64, int64>;
constexpr int INF = 1 << 30;
constexpr int64 LINF = 1LL << 60;
constexpr int MOD = 1e9 + 7;
constexpr int MAX_N = 3e5 + 1;

// init/input
#define int int64
#define INIT ios::sync_with_stdio(false);cin.tie(0);
#define VAR(type, ...) type __VA_ARGS__;MACRO_VAR_Scan(__VA_ARGS__);
template<typename T> void MACRO_VAR_Scan(T &t) {cin>>t;}
template<typename First, typename...Rest> void MACRO_VAR_Scan(First &first, Rest&...rest) {cin>>first;MACRO_VAR_Scan(rest...);}
#define VEC(type, c, n) vector<type> c(n);for(auto &&i:c)cin>>i;

// out
#define OUT(dist) cout<<(dist);
#define FOUT(n, dist) cout<<fixed<<setprecision(n)<<(dist);
#define SP cout<<" ";
#define BR cout<<endl;
#define zero(n) cout<<setfill('0')<<right<<setw(n)
#define debug(x) cerr<<#x<<":"<< (x);BR;

// utility
#define ALL(a) (a).begin(), (a).end()
#define EACH(i, a) for(auto &&i:(a))
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define RFOR(i, a, b) for(int i=(b)-1;i>=0;--i)
#define REP(i, n) for(int i=0;i<(n);++i)
#define RREP(i, n) for(int i=(n)-1;i>=0;--i)

signed main() {
  INIT;
	VAR(int, n);
	map< int, int > mp;
	
	auto primes = [&](int m) {
		for (int p=2; p*p<=m; ++p) {
			if (m%p != 0) continue;
			int num = 0;
			while (m%p == 0) ++num, m /= p;
			mp[p] += num;
		}
		if (m>1) mp[m]++;
	};

	REP(i, n) {
		primes(i+1);
	}

	int _2 = 0, _4 = 0, _14 = 0, _24 = 0, _74 = 0;
	EACH(mi, mp) {
		if (mi.second >= 74) ++_74;
		if (mi.second >= 24) ++_24; 
		if (mi.second >= 14) ++_14;
		if (mi.second >= 4) ++_4;
		if (mi.second >= 2) ++_2;
	}

	int ans = 0;
	ans += _4 * (_4-1) * (_2-2) / 2;
	ans += _14 * (_4-1);
	ans += _24 * (_2-1);
	ans += _74;

	/*
	debug(_2);
	debug(_4);
	debug(_14);
	debug(_24);
	debug(_74);
	debug(ans);
	*/
	OUT(ans)BR;
  
  return 0;
}

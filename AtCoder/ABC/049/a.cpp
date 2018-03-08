// ------------------------------------
// Date:2018/ 2/25
// Problem:ABC 049 UOIAUAI a.cpp
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

using ll = long long;

#define MOD 1000000007

int main()
{
  char ch;
  string output = "consonant";
  cin >> ch;
  switch (ch) {
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
      output = "vowel";
  }
  cout << output << endl;
  return 0;
}


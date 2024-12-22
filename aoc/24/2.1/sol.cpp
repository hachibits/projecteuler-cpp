#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  long long ans;
  int tt = 1000;
  for (int i = 0; i < tt; i++) {
    vector<int> a;
    while (true) {
      int x;
      scanf("%d", &x);
      a.push_back(x);
      char c; 
      scanf("%c", &c);
      if (c == '\n') {
        break;
      }
    }
    int k = (int) a.size();
    bool safe = true;
    bool inc = true;
    bool dec = true;
    for (int j = 0; j < k - 1; j++) {
      int diff = a[j+1] - a[j];
      if (!(1 <= abs(diff) && abs(diff) <= 3)) {
        safe = false;
        break;
      }
      if (diff > 0) {
        dec = false;
      }
      if (diff < 0) {
        inc = false;
      }
    }
    if (safe && (inc || dec)) {
      ans++;
    }
  }
  printf("%d\n", ans);
  cout << ans << '\n';
}

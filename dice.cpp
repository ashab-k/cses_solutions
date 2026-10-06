#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define eb emplace_back
#define f(i, s, e) for (ll i = s; i < e; i++)
#define cf(i, s, e) for (ll i = s; i <= e; i++)
#define rf(i, e, s) for (ll i = e - 1; i >= s; i--)

const ll MOD = 1'000'000'007;

template <class T>
void print_v(const vector<T>& v) {
  cout << "{";
  for (size_t i = 0; i < v.size(); i++) cout << (i ? "," : "") << v[i];
  cout << "}\n";
}

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solve() {
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vi dp(n+1);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  dp[4] = 5;
  dp[6] = 7;

  for (int i = 7 ; i <= n ; i++){
    dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6]) % MOD;
  }

  cout << dp[n];
  return 0;

  }

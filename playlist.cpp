#include <bits/stdc++.h>
#include <unordered_map>
#include <cmath>
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

  vi v(n);
  f(i, 0 , n){
    cin >> v[i];
  }
    
  int l = 0, r = 0;
  set<int> st;
  
 int ans = 0;
  while( l <= r && r < n){
    if (st.find(v[r]) == st.end()) {
      st.insert(v[r++]);
      ans = max(ans, (int)st.size());
    }
    while (st.find(v[r]) != st.end()){
      st.erase(v[l++]);
      }
    }


  cout << ans;
  return 0;

}

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vb = vector<bool>;
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
 
  int m , n;
  cin >> n >> m;
  

  multiset<int> h;

  f(i,0,n){
    int x;
    cin >> x;
    h.insert(x);
  }

  f(i ,0 ,m){
    int t;
    cin >> t;
    auto it = h.upper_bound(t);
    if( it == h.begin()){
      cout << -1 << endl;
    }
    else {
      --it;
      cout << *it << endl;
      h.erase(it);
    }
  }
  return 0;
}

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

  int n; cin >> n;
  
  vector<pair<int,int>> v;
  f(i ,0 ,n){
    int in, out;
    cin >> in >> out;
    v.push_back({out , in});
  }

  sort(v.begin(), v.end());
  int count = 1;
  int lastEnd = v[0].first;

   f(i,0,v.size()){ 
     if (v[i].second >= lastEnd){
       count++;

       lastEnd = v[i].first;
     }
  }

  cout << count;
  return 0;
}

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
  int n ,x;
  cin >> n >> x;

  vector<pair<int,int>> v;
  f(i,0,n){
    int a;
    cin >> a;
    v.push_back({a , i+1});
  }

  sort(v.begin() , v.end());

  int left = 0, right = n -1;

  while (left < right){
    if (v[left].first + v[right].first == x){
      if (v[left].second < v[right].second){
        cout << v[left].second << " " << v[right].second;
      }
      else {
         cout << v[right].second << " " << v[left].second;

      }
           return;
    }
    else if (v[left].first + v[right].first < x){
      left++;
    }
    else{
      right--;
    }
  }

  cout << "IMPOSSIBLE";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  solve();
  return 0;
}

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

#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  
  int n , m , k;
  cin >> n >> m >> k;
  
  vi applicants(n);
  vi apartments(m);

  f(i , 0 , n){
    cin >> applicants[i]; 
  }

  f(i , 0 , m ){
    cin >> apartments[i];
  }


  sort(applicants.begin(), applicants.end());
  sort(apartments.begin() , apartments.end());

  int i = 0 , j  = 0 ;
  int count = 0;

  while (i < n  && j < m ){
    if (abs(applicants[i] - apartments[j]) <= k){
      count++;
      i++;
      j++;
    }

    else if (applicants[i] > apartments[j]){
      j++;
    }
    else {
      i++;
    }
  }
  
  cout << count;

 }

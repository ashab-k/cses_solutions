#include <iostream> 

using namespace std;


long long powMod(int x , long long n , long long M){

  long long res = 1;
  for (long long i = 1 ; i <= n ; i++){
    res = (res * x) % M;
  }

  return res;
}
int main(){
  long long n;

  cin >> n;

  long long res = powMod(2 , n , 1e9 + 7 );

  cout << res;

  return 0;
  
}

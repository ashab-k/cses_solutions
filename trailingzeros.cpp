#include <iostream>

using namespace std;

int main(){

  long long n;
  cin >> n;

  long long res = 1;
  

  int count = 0;
  for (int i = 5 ; n / i > 0 ; i*=5){
    count += n / i ;
  }

  cout << count;

  return 0;
}

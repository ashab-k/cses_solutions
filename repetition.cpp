#include <iostream>
#include <string> 
using namespace std;

int main(){
  string dna;

  cin >> dna;

  int n = dna.size();

  int i = 0;
  int j = 0;
  int maxcount = 1;
  int count = 1;
  for (int i = 1 ; i < n ; i++ ){
    if (dna[i] == dna[j]) count++;
    else if (dna[i] != dna[j]){
      j = i;
      count= 1;
    }
    maxcount = max(count, maxcount);
  }

  cout << maxcount;
  return 0;
};

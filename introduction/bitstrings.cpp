#include <cmath>
#include <iostream>
using namespace std;

#define MOD 1000000007

int main() {
  long long n, res = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    res = res * 2;
    res = res % MOD;
  }
  cout << res << endl;
}
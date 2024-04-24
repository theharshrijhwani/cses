#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  for (long long i = 1; i <= n; i++) {
    long long totalCombinations = ((i * i) * ((i * i) - 1)) / 2;
    long long attackingWays = 4 * (i - 1) * (i - 2);
    cout << totalCombinations - attackingWays << endl;
  }
}
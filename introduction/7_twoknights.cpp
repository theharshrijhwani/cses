#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int totalCombinations = ((i * i) * ((i * i) - 1)) / 2;
    int attackingWays = 4 * (i - 1) * (i - 2);
    cout << totalCombinations - attackingWays << endl;
  }
}
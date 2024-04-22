#include <climits>
#include <iostream>

using namespace std;

int main() {
  string dna;
  int res = INT_MIN, temp = 1;
  cin >> dna;
  for (int i = 0; i < static_cast<int>(dna.size()) - 1; i++) {
    if (dna[i + 1] == dna[i]) {
      temp += 1;
    } else {
      res = max(res, temp);
      temp = 1;
    }
  }
  res = max(res, temp);
  cout << res << endl;
}
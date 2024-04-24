#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a;
        cin >> b;
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
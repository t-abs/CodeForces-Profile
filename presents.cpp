#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int gifts[n];
    int givers[n];

    for (int i = 0; i < n; i++) {
        givers[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
        givers[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << givers[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int count = 0;
    

    for (int a = 0; a * a <= n; ++a) {
        int b = n - a * a;
        if (b >= 0) {
            
            if (a + b * b == m) {
                count++;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}

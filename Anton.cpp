#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    
    int num_256 = min({k2, k5, k6});
    
    k2 -= num_256;
    
    int num_32 = min(k2, k3);
    
    int total_sum = num_256 * 256 + num_32 * 32;
    
    cout << total_sum << endl;
    
    return 0;
}

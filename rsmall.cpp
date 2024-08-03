#include <iostream>
#include <vector>
#include <algorithm> // For min and max functions
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Read the array elements
        }
        
        int min_val = *min_element(a.begin(), a.end());
        int max_val = *max_element(a.begin(), a.end());
        
        if (max_val - min_val <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

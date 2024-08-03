#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    
    int max_height = *max_element(heights.begin(), heights.end());
    int min_height = *min_element(heights.begin(), heights.end());
    
    int max_index = find(heights.begin(), heights.end(), max_height) - heights.begin();
    int min_index = find(heights.rbegin(), heights.rend(), min_height) - heights.rbegin();
    
    min_index = n - min_index - 1; // Convert to normal index
    
    int moves = max_index + (n - min_index - 1);
    
    if (max_index > min_index) {
        moves--;
    }
    
    cout << moves << endl;
    
    return 0;
}

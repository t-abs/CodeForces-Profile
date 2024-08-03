#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    set<pair<int, int>> goodElements;
    int middleIndex = n / 2;
    
    for (int i = 0; i < n; ++i) {
        goodElements.insert({i, i});
    }
    
    for (int i = 0; i < n; ++i) {
        goodElements.insert({i, n - 1 - i});
    }
    
    for (int j = 0; j < n; ++j) {
        goodElements.insert({middleIndex, j});
    }
    
    for (int i = 0; i < n; ++i) {
        goodElements.insert({i, middleIndex});
    }
    
    int sum = 0;
    for (const auto& elem : goodElements) {
        int i = elem.first;
        int j = elem.second;
        sum += matrix[i][j];
    }
    
    cout << sum << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    double sum = 0.0;
    int p[n];
    
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }
    
    double average = sum / n; 
    
    cout.precision(12); 
    cout << average << endl; 
    
    return 0;
}

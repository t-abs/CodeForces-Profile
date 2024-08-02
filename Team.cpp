#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of problems
    
    int count = 0;  // Counter for problems that will be implemented
    
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;  // Read the views of Petya, Vasya, and Tonya
        
        // Count how many are sure (i.e., how many are 1)
        int sure_count = petya + vasya + tonya;
        
        // If at least two friends are sure, increment the counter
        if (sure_count >= 2) {
            ++count;
        }
    }
    
    // Output the final count of problems to be implemented
    cout << count << endl;
    
    return 0;
}

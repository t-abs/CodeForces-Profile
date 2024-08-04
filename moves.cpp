#include <iostream>
#include <vector>
#include <string>
using namespace std;

string canAliceWin(const string& s) {
    int count = 0;
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if ((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')) {
            count++;
        }
    }
    return (count % 2 == 1) ? "DA" : "NET";
}

int main() {
    int t;
    cin >> t;
    vector<string> results;
    
    while (t--) {
        string s;
        cin >> s;
        results.push_back(canAliceWin(s));
    }
    
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}

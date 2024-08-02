#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;  
    
    int l = str.length(); 
    
    if (l % 2 != 0) {  
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}

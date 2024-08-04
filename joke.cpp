#include <iostream>
#include <string>
#include <vector>

bool checkAnagram(const std::string& str1, const std::string& str2) {
    std::vector<int> freq1(26, 0);
    std::vector<int> freq2(26, 0);
    
    for (char c : str1) {
        freq1[c - 'A']++;
    }
    
    for (char c : str2) {
        freq2[c - 'A']++;
    }
    
    return freq1 == freq2;
}

int main() {
    std::string guestName, hostName, pile;
    
    std::getline(std::cin, guestName);
    std::getline(std::cin, hostName);
    std::getline(std::cin, pile);
    
    std::string combinedNames = guestName + hostName;
    
    if (checkAnagram(combinedNames, pile)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}

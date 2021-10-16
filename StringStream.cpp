#include <bits/stdc++.h>

std::vector<int> parseInts(std::string str) {
	std::stringstream ss(str);
    std::vector<int> result;
    int num;
    char ch;
    while (ss >> num) {
        result.push_back(num);
        ss >> ch;
    }
    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}

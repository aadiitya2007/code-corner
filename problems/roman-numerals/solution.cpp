#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    const std::vector<std::pair<int, std::string>> numerals = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
        {1, "I"}
    };

    std::string out = "";
    for (const auto& entry : numerals) {
        int value = entry.first;
        const std::string& symbol = entry.second;
        while (n >= value) {
            out += symbol;
            n -= value;
        }
    }

    std::cout << out << std::endl;
    return 0;
}

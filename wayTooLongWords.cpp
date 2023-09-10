#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;

        if (word.length() > 10) {
            // Word is too long, abbreviate it
            std::cout << word[0] << word.length() - 2 << word.back() << std::endl;
        } else {
            // Word is not too long, keep it unchanged
            std::cout << word << std::endl;
        }
    }

    return 0;
}

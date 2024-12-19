#include <iostream>
#include <cstring>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        std::swap(str[i], str[n - i - 1]);
    }
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);

    reverseString(str);
    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}
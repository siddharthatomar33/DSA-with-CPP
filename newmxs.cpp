    #include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";
    
    bool dp[n][n] = {false};
    int start = 0, maxLength = 1;

    // Every single character is a palindrome......
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    // Check for palindromes of length 2.......
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for palindromes longer than 2...
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                start = i;
                maxLength = len;
            }
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
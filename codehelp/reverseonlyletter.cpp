#include<iostream>
using namespace std;

class Solution {
    public:
        string reverseOnlyLetters(string s) {
            int l=0,h=s.size()-1;
            while(l<h){
                if(isalpha(s[l]) && isalpha(s[h])){
                    swap(s[l],s[h]);
                    l++;
                    h--;
                }
                else if(!isalpha(s[l])){   //not alpha
                    l++;
                }
                else{
                    //!isalpha(s[h])
                    h--;
                }
            }
            return s;
        }
    };
    int main() {
        Solution sol;
        string s = "a-bC-dEf-ghIj";  // Example input
        string result = sol.reverseOnlyLetters(s);
        cout << "Reversed String: " << result << endl;  // Output
        return 0;
    }
    
string ordercopy;
class Solution {
public:
    static bool cmp(char a,char b){
    return (ordercopy.find(a) < ordercopy.find(b));  
    }

    string customSortString(string order, string s) {
        ordercopy=order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};  
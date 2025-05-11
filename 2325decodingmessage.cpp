class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mapping;

        char space=' ';
        mapping[space]=space;

        char start='a';
        int i=0;
        while(i<key.length() && start<='z'){
             char keycurrent=key[i];
        if(mapping.find(keycurrent)!=mapping.end()){
            i++;
        }
        else{
            mapping[keycurrent]=start;
            start++;
            i++;
        }
        }   
        string ans="";
        for(int i=0;i<message.length();i++){
            char msgch=message[i];
            char mappedcharacter=mapping[msgch];
            ans.push_back(mappedcharacter);
        }
        return ans;
    }
};
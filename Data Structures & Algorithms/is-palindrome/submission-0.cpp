class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int l = s.size() - 1;
        while(i < l){
            if(!isalnum(s[i])){
                ++i; continue;
            }
            if(!isalnum(s[l])){
                --l; continue;
            }
            if(tolower(s[i++]) != tolower(s[l--])) return false;
        }
        return true;
    }
};

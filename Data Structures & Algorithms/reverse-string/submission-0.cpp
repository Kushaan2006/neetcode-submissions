class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int l = s.size() - 1;
        while( i < l ){
            swap(s[i++], s[l--]);
        }
    }
};
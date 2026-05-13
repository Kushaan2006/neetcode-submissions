class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        for(auto c: s){
            map[c]++;
        }
        for(auto c: t){
            if(!map[c]) return false;
            map[c]--;
            if(!map[c]) map.erase(c);
        }
        return (map.empty())?true:false;
    }
};

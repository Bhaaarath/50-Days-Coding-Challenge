class Solution {
public:
    int speedup = []{
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        return 0;
    }();
    int romanToInt(string s) {
        int ans = 0;
        map<char, int> mp = { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500},{'M',1000} };
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]<mp[s[i+1]]) ans -= mp[s[i]];
            else ans+=mp[s[i]];
        }
        return ans;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp;
        if(s.length() != t.length()){
            return false;
        }

        for(auto itr:s){ 
            mpp[itr]++;
        }
        for(auto itr:t){
            mpp[itr]--;
        }

        for(auto lex: mpp){
            if(lex.second != 0){
                return false;
            }
        }
        return true;
    }
};

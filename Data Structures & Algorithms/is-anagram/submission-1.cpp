class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int flg=0;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==t[i]){
                flg++;
            }
        }

        if(flg==s.length()){
            return true;
        }else{
            return false;
        }
    }
};

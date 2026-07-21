class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> v(150,1000);
        for(int i=0;i<s.length();i++){
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i])) return false;
        }
        vector<int> v1(150,1000);
        for(int i=0;i<t.length();i++){
            int idx=(int)t[i];
            if(v1[idx]==1000) v1[idx]=t[i]-s[i];
            else if(v1[idx]!=(t[i]-s[i])) return false;
        }
        return true;
    }
};
class Solution {
public:
    int longestPalindrome(string s) {
       int n=s.length();
        if(n==1){
            return n;
        }
        map<char,int>mp;
        for(auto x: s){
            mp[x]++;
        }
        int count=0;
        for(auto p: mp){
            if(p.second>1 ){
                if(p.second%2==0)
                count=count+p.second;
                else
                     count=count+(p.second-1);
            }
        }
        if(count!=n){
            return count+1;
        }
        return count;
    }
};
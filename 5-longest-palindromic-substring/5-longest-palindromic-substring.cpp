class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen=1,start=0;
        int l,h;
        int n=s.length();
        for(int i=0;i<n;i++){
            l=i-1;
            h=i+1;
            while(h<n && s[i]==s[h])
                h++;
            while(l>=0 && h<n && s[l]==s[h]){
                h++;
                l--;
            }
            int len= h-l-1;
            if(len>maxLen){
                maxLen=len;
                start=l+1;
            }
        }
        return s.substr(start,maxLen);
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
        return 0;

        else{
            int l=0;
            int r=0;
            int longestlenght=0;
            while(r<n){
                bool duplicate=false;
                for(int i=l; i<r;i++){
                    if(s[r]==s[i]){
                        duplicate=true;
                        break;
                    }
                }
                    if(duplicate)
                    l++;
                    else{
                        longestlenght=max(r-l+1,longestlenght);
                    r++;
                }
            }
             return longestlenght;
    }
        }
};
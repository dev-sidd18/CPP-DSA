class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxpara=0;
        int para=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                maxpara=max(count,maxpara);
                count--;
            }
        }
        return maxpara;
    }
};
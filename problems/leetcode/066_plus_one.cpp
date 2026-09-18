class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
                digits[n-1]++;
                return digits;
            }
        if(n==1){
            if(digits[0]==9){
                digits[0]=1;
                digits.push_back(0);
            }
            else
            digits[0]++;

            return digits;
        }
        else{
            digits[n-1]=0;
        for(int i=n-2; i>0;i--){
            if(digits[i]==9)
            digits[i]=0;

            else{
            digits[i]++;
            return digits;
            }
        } 
        if(digits[0]==9 && digits[1]==0){
            digits[0]=1;
            digits.push_back(0);
        }
        else{
            digits[0]++;
            return digits;
        }
        }
        return digits;
    }
};
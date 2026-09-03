class Solution {
public
    int threeSumClosest(vectorint& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size();
        int best=nums[0]+nums[1]+nums[2];
        for(int i=0;in-2;i++){
            int f=i+1,r=n-1;
            while(fr){
                sum=nums[i]+nums[f]+nums[r];
                if(abs(target - sum)  abs(target - best)){
                    best=sum;
                }
                if (sum  target) {
                    f++;
                }
                else if (sum  target) {
                    r--;
                }
                else {
                    return best;
                }
            }
        }
        return best;
    }
};
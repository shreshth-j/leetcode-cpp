class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int farthest=nums[0];
        int i=0;
        while(i<n){
            
            
            if(i<=farthest){
                farthest=max(farthest,nums[i]+i);
            }
            else{
                return false;
            }
            i++;
        }
        return true;
    }
};
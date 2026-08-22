class Solution {
public:
    int jump(vector<int>& nums) {
        int i=0;
        int farthest=0;
        int currentend=0;
        int n=nums.size();
        int jumps=0;

        while (i<n-1){
            farthest=max(farthest, i+nums[i]);
            if(i==currentend){
                currentend=farthest;
                jumps++;
            }
            i++;
        }
       return jumps; 
    }
};
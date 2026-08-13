class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        //vector<int> left(n);
        int total=0;
        //vector<int> right(n);
        
        //left[0]=nums[0];
        for (int i=0;i<n;i++){
            total+=nums[i];
        }
        //right[n-1]=nums[n-1];
        int left=0;
        for (int i=0;i<n;i++){
            int right=total-left-nums[i];

            if (right==left){
                return i;
            }
            
            left=left+nums[i];
        }
        
        return -1;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int total=0;
        int n=height.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        rightmax[n-1]=height[n-1];

        for (int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1], height[i]);
        }
        leftmax[0]=height[0];
        for (int j=1;j<n;j++){
            leftmax[j]=max(leftmax[j-1], height[j]);
        }
        for( int k =0 ; k<n;k++){
            total+= min(leftmax[k],rightmax[k])-height[k];
        }
        return total;
        
        
        }
    
};
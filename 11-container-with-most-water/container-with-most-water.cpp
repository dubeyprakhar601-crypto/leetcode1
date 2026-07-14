class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
       int  maxArea=0;
        while(i<=j){
            int minLen=min(height[i],height[j]);
            int width=j-i;
            maxArea=max(maxArea,minLen*width);
            height[i]>height[j]?j--:i++;
            

        }
        return maxArea;
        
    }
};
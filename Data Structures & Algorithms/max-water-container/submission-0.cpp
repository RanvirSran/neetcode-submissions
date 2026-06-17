class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVal = 0;
        int i=0, j=heights.size() - 1;
        while(i < j){
            if(heights[i] < heights[j]){
                maxVal = max((j-i)*heights[i], maxVal);
                i++;
            } else {
                maxVal = max((j-i)*heights[j], maxVal);
                j--;
            } 
        }
        return maxVal;
    }
};

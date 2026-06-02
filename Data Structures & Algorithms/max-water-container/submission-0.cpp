class Solution {
public:
    int maxArea(vector<int>& heights) {
      int n = heights.size();
      int l=0;
      int r=n-1;
      int area=0;
      while(l<r){
        if(heights[l]<heights[r]){
            area=max(area,heights[l]*(abs(l-r)));
            l++;
        }
        else{
            area=max(area,heights[r]*(abs(l-r)));
            r--;
        }
      } 
      return area; 
    }
};

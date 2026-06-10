class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int Maxwater=0;
        int l=0,r=n-1;
        while(l<r){
            int width=r-l;
            int height=min(heights[l],heights[r]);
            int currwater=width*height;
            Maxwater=max(Maxwater,currwater);

            heights[l]<heights[r]?l++:r--;
        }
    return Maxwater;
    }
};

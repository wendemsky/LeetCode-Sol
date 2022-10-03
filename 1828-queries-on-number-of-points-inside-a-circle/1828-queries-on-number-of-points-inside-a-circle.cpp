class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int pts = 0;
            for(int j=0;j<points.size();j++){
                if((sqrt(pow(points[j][0]-queries[i][0],2) + pow(points[j][1]-queries[i][1],2))) <= queries[i][2]){
                    pts++;
                }
            }
            ans.push_back(pts);
        }
        
        return ans;
    }
};
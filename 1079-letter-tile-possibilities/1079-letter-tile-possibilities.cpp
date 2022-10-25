class Solution {
public:
    void f(int ind, string tiles, int &ans){
        ans++;
        for(int i=ind;i<tiles.size();i++){
            if(i!=ind && tiles[i]==tiles[ind]) 
                continue;
            swap(tiles[i], tiles[ind]);
            f(ind+1, tiles, ans);
        }
    }
    int numTilePossibilities(string tiles) {
        int ans = -1;
        sort(tiles.begin(), tiles.end());
        f(0, tiles, ans);
        
        return ans;
    }
};
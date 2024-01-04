class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        while(!mpp.empty()){
            vector<int> temp, elem;
            for (auto &[f, s] : mpp) {
                temp.emplace_back(f);
                s--;
                if (s == 0)elem.emplace_back(f);
            }
            ans.push_back(temp);
            for (auto &i : elem){
                mpp.erase(i);
            }
        }
        return ans;
    }
};
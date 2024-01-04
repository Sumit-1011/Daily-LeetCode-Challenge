class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mpp;
        int cnt=0;
        for(int x : nums){
            mpp[x]++;
        }
        for(auto it : mpp){
            int freq = it.second;
            if(freq==1){
                return -1;
            }
            cnt+=ceil((double)freq/3);
        }
        return cnt;
    }
};
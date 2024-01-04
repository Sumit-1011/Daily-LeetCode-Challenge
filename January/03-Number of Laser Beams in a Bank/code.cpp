class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total=0;
        vector<int>temp;
        for(auto a : bank){
            string s = a;
            int cnt=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='1') cnt++;        //if security device is present
            }
            if(cnt>0) temp.push_back(cnt);  //if not present will not be added in temp
        }
        for(int i=1; i<temp.size(); i++){
            int t=temp[i]*temp[i-1];        
            total+=t;
        }
    return total;
    }
};
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        map<int,set<int>> freq;
        for(int i=0;i<logs.size();i++)
        {
            cout<<logs[i][0]<<" "<<logs[i][1]<<"\n";
            freq[logs[i][0]].insert(logs[i][1]);
        }
        for(auto i:freq)
        {
            ans[i.second.size()-1]++;
        }
        return ans;
    }
};
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int n1 = details[i].size();
            string ans = string(1, details[i][n1-4] )+string(1,details[i][n1-3]);
            if (stoi(ans)>60)
            {
                count++;
            }
            
        }
        return count;   
    }
};
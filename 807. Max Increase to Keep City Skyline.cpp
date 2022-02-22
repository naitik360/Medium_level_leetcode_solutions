class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& v) {
        int n= v.size(),sum=0;
        vector<int> north(n,-1),east(n,-1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                north[j]=max(north[j],v[i][j]);
                east[i]=max(east[i],v[i][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int k = min(north[j],east[i]);
                if(k>=v[i][j])
                {
                    sum=sum+k-v[i][j];
                }
            }
        }
      return sum;
    }
};
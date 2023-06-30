class Solution {
public:
    void dfs(vector<vector<int>>&v,int x,int y,vector<vector<int>>&vis,int &f)
    {
        if(x==v.size()-1)
        {f=1;return;}
        vis[x][y]=1;
        if(x+1<v.size()&&vis[x+1][y]==-1&&v[x+1][y]==1)
        dfs(v,x+1,y,vis,f);
        if(x-1>=0&&vis[x-1][y]==-1&&v[x-1][y]==1)
        dfs(v,x-1,y,vis,f);
        if(y-1>=0&&vis[x][y-1]==-1&&v[x][y-1]==1)
        dfs(v,x,y-1,vis,f);
        if(y+1<v[0].size()&&vis[x][y+1]==-1&&v[x][y+1]==1)
        dfs(v,x,y+1,vis,f);
        return;
    }
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int l=0;
        int r=cells.size()-1;
        int ans=INT_MAX;
        while(l<=r)
        {
            int m=(l+r)/2;
            vector<vector<int>>v(row,vector<int>(col,1));
            for(int i=0;i<=m;i++)
            {
                v[cells[i][0]-1][cells[i][1]-1]=0;
            };
            int f=0;
            vector<vector<int>>vis(row,vector<int>(col,-1));
            for(int i=0;i<v[0].size();i++)
            {
                if(v[0][i]==1&&vis[0][i]==-1)
                {   
                    dfs(v,0,i,vis,f);
                    if(f==1)
                    break;
                }
            };
            if(f==1)
            {
                l=m+1;
            }
            else
            {
                ans=min(ans,m);
                r=m-1;
            }
        };
        return ans;
    }
};
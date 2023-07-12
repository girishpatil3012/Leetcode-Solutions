class Solution {
public:
    bool dfs(vector<vector<int>> &graph, vector<int> &visited, int node, vector<bool> &answer){
        if(graph[node].size()==0){
            answer[node]=true;
            visited[node]=2;
            return true;
        }
        bool an=true;
        visited[node]=1;
        for(int i=0;i<graph[node].size();i++){
            if(visited[graph[node][i]]==0){
                an=an&dfs(graph,visited,graph[node][i],answer);
            }   
            else if(visited[graph[node][i]]==2){
                an=an&answer[graph[node][i]];
            }  
            else if(visited[graph[node][i]]==1){
                an=an&false;
            }       
        }
        visited[node]=2;
        answer[node]=an;
        return an;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> visited(n,0);
        vector<bool> answer(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(graph,visited,i,answer);
            }            
        }
        vector<int> asw;
        for(int i=0;i<answer.size();i++){
            if(answer[i]){
                asw.push_back(i);
            }
        }     
        return asw;   
    }
};
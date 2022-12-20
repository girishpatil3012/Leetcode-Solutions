class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        queue<int> q;
        int n = rooms.size();
        
        vector<bool> visited(n,false);
        q.push(0);

        while(!q.empty())
        {
            int temp = q.front();    
            q.pop();                 
            
            if(visited[temp] == true) 
                continue; 
            visited[temp] = true;
            
            for(auto room : rooms[temp])
            {   
                q.push(room);
            }

        }
        
        for(int i = 0; i < n; i++)
        {         
            if(visited[i]==false) 
                return false;
        }
        return true;

    }
};
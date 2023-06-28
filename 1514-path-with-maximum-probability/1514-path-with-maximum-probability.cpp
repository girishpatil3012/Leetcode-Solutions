typedef pair<double, int> PI;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        vector<list<PI>> graph(n);
        vector<double> probability(n, 1e-5);
        priority_queue<PI> maxHeap;

        for(int i = 0; i < edges.size(); i++)
        {
            graph[edges[i][0]].push_back({succProb[i], edges[i][1]});
            graph[edges[i][1]].push_back({succProb[i], edges[i][0]});
        }

        maxHeap.push({1.0,start});
        probability[start] = 1;

        while(!maxHeap.empty())
        {
            auto [prob, node] = maxHeap.top();
            maxHeap.pop();

            if(node == end)
                return prob;

            for(auto [nProb, nNode] : graph[node])
            {
                if(prob * nProb > probability[nNode])
                {
                    probability[nNode] = prob * nProb;
                    maxHeap.push({probability[nNode], nNode});
                }
            }
        }

        return 0.0;
    }
};
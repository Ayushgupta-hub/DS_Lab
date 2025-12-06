class Solution {
  public:
    void add_edge(int src,int des,int w,vector<list<pair<int,int>>>&graph,vector<vector<int>>& edges){
        graph[src].push_back({des,w});
        graph[des].push_back({src,w});
    }
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<list<pair<int,int>>>graph(V,list<pair<int,int>>());
        
        for(int i=0;i<edges.size();i++){
            int src=edges[i][0];
            int des=edges[i][1];
            int w=edges[i][2];
            add_edge(src,des,w,graph,edges);
        }
        
        vector<bool>vis(V,false);
        int sum=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        pq.push({0,0});
        
        while(not pq.empty()){
            auto it=pq.top();
            pq.pop();
            
            int node=it.second;
            int w=it.first;
            
            if(vis[node]) continue;
            
            vis[node]=true;
            sum+=w;
            
            for(auto nbr: graph[node]){
                if(not vis[nbr.first]){
                    pq.push({nbr.second,nbr.first});
                }
            }
        }
        return sum;
    }
};

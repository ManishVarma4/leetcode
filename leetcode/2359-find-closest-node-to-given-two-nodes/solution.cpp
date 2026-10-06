class Solution {
public:
    void solve(int node,vector<int>& edges, vector<int>& a){
        int n=edges.size();
        queue<int> q;
        q.push(node);
        a[node]=0;
        vector<bool> visited(n);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(visited[curr]) continue;
            visited[curr]=1;
            int ngh = edges[curr];
            if(ngh != -1 && !visited[ngh]){
                a[ngh]= 1+a[curr];
                q.push(ngh);
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        vector<int> a(n,-1),b(n,-1);
        solve(node1,edges,a);
        solve(node2,edges,b);
        for(auto p:a)cout<<p<<" ";
        cout<<endl;
        for(auto p:b)cout<<p<<" ";

        int ans=-1, k=INT_MAX;
        for(int i=0;i<a.size();i++){
            int l;
            if((a[i]==-1)||(b[i]==-1)) continue;
            if(k>(l=max(a[i],b[i]))){ans=i;k=l;}
        }
        return ans;

    }
};
int di[]={0,0,1,-1};
int dj[]={1,-1,0,0};

int Solution::solve(vector<vector<int> > &ar){
    int n=ar.size(),m=ar[0].size();
    queue<int> q;
    bool *vis=new bool[m*n](); 
    q.push(0);
    vis[0]=true;
    while (q.size()){
        int cur=q.front();q.pop();
        for(int it=0;it<4;it++){
            int prevI=cur/m,prevJ=cur%m,newI=prevI+di[it],newJ=prevJ+dj[it];
            if(prevI==n-1 && prevJ==m-1) return 1;
            if(newI>=0 && newI<n && newJ>=0 && newJ<m && !vis[newI*m+newJ] && ar[newI][newJ]<=ar[prevI][prevJ]) {q.push(newI*m+newJ);vis[newI*m+newJ]=true;}
        }
    }
    return 0;
}
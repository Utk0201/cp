int help(vector<int> &ar,unordered_set<int> &indexes){
    int ans=0,n=indexes.size();
    for(auto it:indexes){
        if((it && (ar[it]%ar[it-1])==0) || (it+1<ar.size() && (ar[it]%ar[it+1])==0)) ans++;           //  it has contribution in treasure
    }
    return ans;
}

vector<int> Solution::solve(vector<int> &ar, vector<vector<int>> &q) {
    int n = ar.size(), ans = 0;
    vector<int> ret;
    for(int i=0;i<n;i++) ans+=( (i && ar[i]%ar[i-1]==0) || (i+1<n && ar[i]%ar[i+1]==0));
    for(auto it:q){
        int x=min(it[0]-1,it[1]-1),y=max(it[0]-1,it[1]-1);
        unordered_set<int> indexes;
        if(x) indexes.insert(x-1);
        indexes.insert(x);
        if(x+1<n) indexes.insert(x+1);
        if(y) indexes.insert(y-1);
        indexes.insert(y);
        if(y+1<n) indexes.insert(y+1);
        ans-=help(ar,indexes);           //  I hv to take only the changes at indexes into account
        swap(ar[x],ar[y]);
        ans+=help(ar,indexes);
        ret.push_back(ans);
    }
    return ret;
}
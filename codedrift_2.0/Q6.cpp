long dp[201][201];
long help(vector<int> &animals,int pos,int k){
    long n=animals.size();
    if(pos==n) return 0;
    if(!k) return (1LL<<31);
    if(dp[pos][k]!=-1) return dp[pos][k];
    long dis=0,ans=(1LL<<31);
    for(long i=pos;i<n;i++){
        // animals[pos]~animals[i] are assigned 1 shelter
        if(i>pos) dis+=(i-pos)*(animals[i]-animals[i-1]);
        ans=min(ans,dis+help(animals,i+1,k-1));
    }
    dp[pos][k]=ans;
    return ans;
}

int Solution::solve(vector<int> &animals,int shelter){
    int n=animals.size();
    memset(dp,-1,sizeof(dp));
    sort(animals.begin(),animals.end());
    return help(animals,0,shelter);
}

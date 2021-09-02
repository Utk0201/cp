#define mod 1000000007
int Solution::solve(vector<int> &ar){
    sort(ar.begin(),ar.end());
    long long t=0,ans=0;
    for(auto it:ar) ans=(ans+t)%mod,t=(t+it)%mod;
    return (int)ans;
}

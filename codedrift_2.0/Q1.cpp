#define mod 1000000007
int Solution::solve(vector<int> &ar,int k){
    long long int ans = ar[0]+ar.back();
    vector<int> tmp;
    for(int i=0;i<ar.size()-1;i++) tmp.push_back(ar[i]+ar[i+1]);
    sort(tmp.begin(),tmp.end());
    for(int i=tmp.size()-1;i>=tmp.size()-(k-1);i--) ans=(ans+tmp[i])%mod;
    return ans;
}
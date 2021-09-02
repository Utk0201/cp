#define mod 1000000007
int Solution::calculateCells(int A, int B, int C) {
    int **dp=new int*[2];
    for(int i=0;i<2;i++) dp[i]=new int[A]();
    dp[0][0]=1,dp[1][0]=1;
    for(int j=1;j<A;j++){
        if(j-B>=0) dp[0][j]=(dp[1][j-B]*1LL+mod)%mod;               //  store birth
        if(j-C>=0) dp[0][j]=(dp[0][j]*1LL-dp[1][j-C]+mod)%mod;      //  store birth
        if(j) dp[1][j]=(dp[1][j-1]*1LL+mod)%mod;                    //  store preSum of births
        dp[1][j]=(dp[1][j]*1LL+dp[0][j]*1LL+mod)%mod;               //  store preSum of births
    }
    int ans=dp[1][A-1];
    if(A-1-C>=0) ans=(ans-dp[1][A-1-C]+mod)%mod;
    return ans%mod;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int matriz[100][100];
    int n,aux;
    int sum[100][101];
    int dp[101];
    
    while(cin>>n){
        for(int i=0; i<n ;i++) for(int j=0;j<n;j++) cin>>matriz[i][j];
        
        for(int i=0; i<n ;i++){
            sum[i][0]=0;
            for(int j=1 ;j<=n ;j++) sum[i][j]=sum[i][j-1]+matriz[i][j-1];
        }
        
        aux=-(2e9);
        
        for(int i=0; i<n ;i++){
            for(int j=i; j<n ;j++){
                dp[0]=0;
                for(int k=0; k<n ;k++){
                    dp[k+1]= max(sum[k][j+1]-sum[k][i]+dp[k],sum[k][j+1]-sum[k][i]);
                    aux= max(aux,dp[k+1]);
                }
            }
        }
        
        cout << aux <<endl;
    }
    
    return 0;
}
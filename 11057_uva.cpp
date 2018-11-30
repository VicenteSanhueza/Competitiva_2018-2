#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m;
    int v[10000];
    
    while (cin >> n)    {
        for (int i = 0; i < n; ++i) cin >> v[i];
        sort(v, v + n);
        
        cin >> m;
        
        int i = 0, j = n - 1;
        int aux1, aux2;
        while (i < j){
            if (v[i] + v[j] < m) i++;
            else if (v[i] + v[j] == m){
                aux1 = i;
                aux2 = j;
                i++;
                j--;
            }else j--;
        }
        
        cout << "Peter should buy books whose prices are " << v[aux1] << " and " << v[aux2] << ".\n\n";
    }
}
#include <bits/stdc++.h>

using namespace std;
 
int a [1000010];
 
void precalculate (){
    a [0] = 1; 
    for ( int i = 1; i <= 1000000; i++ ) {
        a [i] = a [(int)floor(i - sqrt (i))] + a [(int)floor (log (i))] + a [(int)floor (i * sin (i) * sin (i))];
        a [i] %= 1000000;
    }
}
 
int main (){
    precalculate (); 
    int x; 
    while (cin>>x) {
        if(x==-1) break;
        cout<< a[x]<<endl;
    }
 
    return 0;
}
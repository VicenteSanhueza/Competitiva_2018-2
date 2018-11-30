#include <bits/stdc++.h>
using namespace std;

#define INF 1e5

vector<vector< pair<int,int> >> lista;
vector<int> visitado;
vector<int> distancia;

void limpiar(int n){
	lista.clear();
	lista.resize(n);

	visitado.clear();
	visitado.resize(n,0);

	distancia.clear();
	distancia.resize(n,INF);


}

void guardaDatos(int m){
	for(int i=0; i<m ;i++){

		int a,b,c; cin>>a>>b>>c;
		pair<int,int> par;
		par=make_pair(b,c);

		lista[a].push_back(par);

		par=make_pair(a,c);
		lista[b].push_back(par);
	
	}
}

void dijkstra(int s){
	priority_queue< pair<int,int> , vector< pair<int,int> >, greater< pair<int,int> > > q; 
	distancia[s]=0;
	q.push({0,s});
	while(!q.empty()){
		int u= q.top().second;
		q.pop();
		for(auto c: lista[u]){
			int v= c.first;
			int w= c.second;
			if(distancia[v] > distancia[u]+w){
				distancia[v]= distancia[u]+w;
				q.push({distancia[v],v});
            }
		}
	}
}

int main(){
	int N; cin>>N;
	int z=1;
	while(N--){
		int n,m,S,T; cin>>n>>m>>S>>T; 
		limpiar(n);
		guardaDatos(m);
		dijkstra(S);
		if(distancia[T] < INF) cout<<"Case #"<<z++<<": "<<distancia[T]<<endl;
		else cout<<"Case #"<<z++<<": "<<"unreachable"<<endl;
	}

	return 0;
}
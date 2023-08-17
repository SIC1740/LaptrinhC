#include<bits/stdc++.h>
using namespace std;

int v , e , k ;
vector<int>vt[100001];
bool visited[100001];
void inp(){
	cin >> v >> e >> k ;
	fill(vt,vt+100001,vector<int>());
	for (int i = 0 ; i < e ; i ++){
		int x , y ; cin >> x >> y ;
		vt[x].push_back(y);
		vt[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void dfs(int u){
	cout << u << " ";
	visited[u] = true ;
	for (int x : vt[u]){
		if (!visited[x]){
			dfs(x);
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t ;
	cin >> t ;
	while(t--){
		inp();
		dfs(k);
		cout << endl ;
	}
	 return 0;
	}

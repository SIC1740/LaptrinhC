#include<bits/stdc++.h>
using namespace std;

int f[101][101][101];
void testcase(){
	int x,y,z ;
	cin >> x >> y >> z ;
	string x1,y1,z1;
	cin >> x1 >> y1 >> z1;
	memset(f,0,sizeof(f));
	int res = 0 ;
	for(int i = 1 ; i <= x ; i ++){
		for (int j = 1 ; j <= y ; j ++){
			for (int k = 1 ; k <= z ;k ++){
				if (x1[i-1] == y1[j-1] && x1[i-1] == z1[k-1])
					f[i][j][k] = f[i-1][j-1][k-1] + 1 ;
				else 
					f[i][j][k] = max({f[i-1][j][k],f[i][j-1][k],f[i][j][k-1]});
				res = max(res,f[i][j][k]);
			}
		}
	}
	cout << res ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}

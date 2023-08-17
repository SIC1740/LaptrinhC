#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	queue<int>qe;
	while (n--){
		int m ;
		cin >> m; 
		if (m == 1){
			cout << qe.size() << endl ;
		}
		else if (m == 2){
			if (qe.empty()) cout << "YES" ;
			else cout << "NO";
			cout << endl;
		}
		else if (m == 3){
			int a ;
			cin >> a ;
			qe.push(a);
		}
		else if (m == 4){
			if (!qe.empty())
				qe.pop();
		}
		else if (m == 5){
			if (!qe.empty())
				cout<<qe.front();
			else cout << "-1";
			cout << endl ;
		}
		else if (m == 6){
			if(qe.empty()) cout <<"-1\n";
			else cout << qe.back() << endl ;
		}  
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while (t--){
		testcase();
		cout << endl;
	}
	return 0;
	}

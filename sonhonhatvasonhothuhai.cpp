#include<bits/stdc++.h>
using namespace std;

int main()
	{
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ;
		set<int> s ;
		for (int i = 0 ; i < n ; i ++){
			int x ;
			cin >> x ;
			s.insert(x);
		}
		if(s.size() == 1) cout << "-1";
		else {
			auto it = s.begin();
			if(it != s.end()){
				cout << *it<< " ";
				++ it ;
			}
			cout << *it ;
		}
		cout << endl; 
	}
	 return 0;
	}

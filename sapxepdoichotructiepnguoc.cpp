#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n ; 
	cin >> n ;
	vector<int>a(n);
	vector<vector<int>> b;
	for (int &i: a) cin >> i ;
	
	for (int i = 0 ; i < n-1 ; ++ i){
		for (int j = i+1; j< n ; ++ j){
			if (a[j] < a[i])
			{
				swap(a[i],a[j]);
			}
		}
		b.push_back(a);
	}
	for(int i = b.size()-1 ; i >= 0 ; -- i){
		cout << "Buoc " +to_string(i+1)+": " ;//sử dụng chuyển đổi giá trị của biến i thành một chuỗi
		for (int j = 0 ; j < n ; ++ j){
			cout << b[i][j] << " " ;
		}
		cout << endl ;
	}
}
int main()
	{
	int T ;
	cin >> T ;
	while (T--){
		testCase();
		cout << "\n";
	}
	 return 0;
	}

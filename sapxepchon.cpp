#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n ; 
	cin >> n ;
	vector<int>a(n);
	for (int &i: a) cin >> i ;
	
	for (int i = 0 ; i < n -1 ; ++ i){
		bool is_sorted = true ;
		for (int j =  i + 1 ; j< n ; ++ j){
			if (a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
				is_sorted = false ;
			}
		}
		if (is_sorted) break;
		
		cout << "Buoc " +to_string(i+1)+": " ;//sử dụng chuyển đổi giá trị của biến i thành một chuỗi
		for (int j = 0 ; j < n ; ++ j){
			cout << a[j] << " " ;
		}
		cout << endl ;
	}
}
int main()
	{
	testCase();
	cout << "\n";
	 return 0;
	}

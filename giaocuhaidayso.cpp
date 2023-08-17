#include<bits/stdc++.h>
using namespace std;

int main()
	{
	int n, m ;
	cin >> n >> m ;
	
	unordered_set<int>A, B ;
	int num ;
	
	for (int i = 0 ; i < n ; i ++){
		cin >> num ;
		A.insert(num) ;
	}
	
	for (int i = 0 ; i < m ; i ++){
		cin >> num ;
		B.insert(num);
	}

//Tìm tập giao của A và B	
	set<int>C;
	for(int num :A){
		if(B.count(num) > 0){// khi duyệt từng phần tử của A thì thuật toán 
//count sẽ tìm kiếm từng của phần từ của B
			C.insert(num);
		}
	}
	for (int num :C){
		cout << num <<" ";
	}
	 return 0;
	}

#include<bits/stdc++.h>
using namespace std;

int count(const string& str){
	const int Maxchars = 256 ;// Số lượng kí tự có thể có trong bảng mã ASCII(256)
	
	bool visited [Maxchars] = {false};// Mảng đánh đấu các kí tự đã xuất hiện
	int Uniquecount = 0 ;
	
	for (char c : str){// duyệt từng kí tự trong chuỗi str
		if (!visited[c]){
			visited[c] = true;
			Uniquecount ++ ;
		}
	}
	
	return Uniquecount;
}
int main()
	{
		string input;
		getline (cin , input);
		
		int uniquecount = count(input) ;
		cout << uniquecount-1 << endl ;
	 return 0;
	}
// Đếm số lương kí tự khác nhau trong chuỗi 

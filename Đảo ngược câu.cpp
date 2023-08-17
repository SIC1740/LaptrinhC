#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string sentence;// khai báo câu 
  getline(cin, sentence);// nhập câu
  
  vector<string> words;// khai báo vector kiểu string để lưu trữ các từ trong câu
  string word;//biến word khởi động lưu trữ từng từ trong câu
  for (char c : sentence) {
  // Mỗi phần tử c trong sentence thì vòng lặp sẽ thực hiện các câu lệnh trong phạm vi của vòng lặp,
  // trong từng lần lặp giá trị của c sẽ được gán với từng giá trị của sentence
    if (c == ' ') {
      words.push_back(word);// Nếu c là dấu cách thì từ hiện tại là word sẽ được đưa vào words
      word.clear();// sau đó sẽ xóa sạch dữ liệu của biến word
    } else {
      word += c;// Nếu ko phải thì c sẽ thêm vào word để xây dựng từ hiện tại
    }
  }
  words.push_back(word);// từ word cuối cùng được thêm vào words
  reverse(words.begin(), words.end());//Hàm reverse trong algorithm được sử dụng để đảo thứ tự các phần tử trong vector words
  
  string reversed_sentence;// Khởi tạo biến 
  for (const string& w : words) {// hàm string& tham chiếu không thay đổi đến phần từ của vector words
  // hàm const nhqrm đảm bảo sự không thay đổi trong quá trình lặp và tính toàn vẹn của dữ liệu ban đầu
    reversed_sentence += w + " ";//sẽ ghép từng từ trong vector words vào biên reserved_sentence
  }
  reversed_sentence.pop_back();//loại bỏ kí tự cuối cùng tức là khoảng trắng ra khỏi biến 
  
  cout  << reversed_sentence << endl;
  
  return 0;
}
// ĐẢO NGƯỢC TỪNG TỪ TRONG CÂU

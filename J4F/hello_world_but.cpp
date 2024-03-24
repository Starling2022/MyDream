//Made by HLong:) just for fun:33
#include <bits/stdc++.h>
using namespace std;

//ĐIỀU CHỈNH THỜI GIAN DELAY GIỮA CÁC KÍ TỰ Ở ĐÂY:
#define delay_milliseconds 13
bool mode = 0;  //chọn cách lấy dữ liệu, nếu mode = 1, nhập từ bàn phím,
string read_me = "Hello, I'm Gay:)";    //với mode = 0, dòng lệnh chương trình chạy ở đây;


//Khong sửa cái này
string text="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!#$%&'()*+,-./:;<=>?@[]^_`{|}~ ";
using namespace std::this_thread;
using namespace std::chrono;

//hàm chính thực hiện chương trình
int32_t main(){
    string words, val = "";
    int cnt=0;
    if (mode == 1)
        cin >> words;
    if(mode == 0)
        words=read_me;
    for(char i : words){
        for(char j : text){
            if(j == i || i == 0 || i == words[words.size()-1]){
                sleep_for(milliseconds(delay_milliseconds));
                cout << val + j << "\n";
                val+=i;
                break;
            }
            else{
                sleep_for(milliseconds(delay_milliseconds));
                cout << val + j << "\n";
            }
        }
        ++cnt;
    }
    for(int i = 0; i <= delay_milliseconds*cnt; ++i){
        cout << words << "\n";
        sleep_for(milliseconds(delay_milliseconds));
    }
}
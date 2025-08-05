#include <iostream>
#include <iterator>
#include <regex>
#include <string>
using namespace std;

// int main(){
//     string s1;
//     string s2("Hello");
//     string s3(s2);
//     string s4(8,'a');
//     cout << s1<< endl;
//     cout << s2<< endl;
//     cout << s3<< endl;
//     cout << s4<< endl;
//     return 0;
// }
int main(){

    string s("12345");
//     s.push_back('6');
//     s.append("789");
//     s += "10";
//     cout << s <<endl;
// 
//     string s2("123456789");
//     int _val = 0;
//     for(size_t i = 0;i<s2.size();i++){
//        _val*=10;
//        _val+= s2[i] - '0';
//     };
//     cout << "s2 = "<<_val<<endl;
// }
//         string s1;
//         string s2("Yajun");
//         string s3("Hello Yajun",5);
//         string s4("Hello Yajun",1,4);
//         string s5("Hello Yajun",0,string::npos);
//         cout<< s1<< endl;
//         cout<< s2<< endl;
//         cout<< s3<< endl;
//         cout<< s4<< endl;
//         cout<< s5<< endl;
// 
        string s1("Hello");
        s1 += ' ';
        s1 += "world!";
        cout<< s1<<endl;
        for(int i = 0;i<s1.size();i++){
            cout<< s1[i]<< " ";
        }        
        cout << endl;
        //迭代器
        string::iterator it = s1.begin();
        while (it != s1.end()) {
            cout<< *it <<" ";
            it++;
        }
        cout << endl;
        it = s1.begin();
        while (it != s1.end()) {
            *it -= 1;
            cout << *it  <<" ";
            it++;
        }
        cout <<endl;
        for(auto ch :s1){
            cout<<ch<<" ";
        }
        cout << endl;

        //反向迭代器
        string::reverse_iterator sit = s1.rbegin();
        while(sit != s1.rend()){
            cout<< *sit <<" ";
            sit++;
        }
        cout << endl;

}


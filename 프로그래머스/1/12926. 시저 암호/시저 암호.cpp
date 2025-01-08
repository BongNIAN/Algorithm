#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){continue;}
        
        if(s[i]+n >'z' && s[i]>='a'&& s[i]<='z'){
            s[i]  = s[i]  - 'z' + 'a' +n-1 ;
        }
        else if (s[i] +n > 'Z' && s[i]>='A' && s[i]<='Z') s[i]  = s[i]  - 'Z' + 'A' +n -1;
        
        else {
            s[i]+=n;
        }
        
        
    }
    cout << 'a'+1 <<endl;
    cout << 'z' +1 <<endl;
    
    return s;
}
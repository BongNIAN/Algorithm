#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    //아스키 코드상 대문자 -> 소문자 
    //문자끼리의 교환은 문자
    char tmp = ' ';
    
    for(int i=0;i<s.size()-1;i++){
        for(int j=0;j<s.size()-1-i;j++){
        if(s[j] < s[j+1]){
            tmp = s[j];
            s[j] = s[j+1];
            s[j+1] = tmp;
        }
            
        }
        
    }
    
    return s;
}
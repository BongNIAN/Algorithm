#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    //짝수일경우 size/2 와 size/2 +1 값을 문자열로 
    // 문자열기준이니깐 size/2 , size/2 -1
    //흠..그냥 문자열 합치면 안되나?
    //현재 스트링[i]의 형태는 뭐지?
    if(s.size() %2 == 0){
        answer = string (1,s[size/2 -1 ]) + s[size/2 ]; 
    }
    //홀수일경우 size/2 +1만 리턴
    //문자열기준 size/2 리턴 
    else {
        
        answer = string(1,s[size/2]);
    }
    return answer;
}
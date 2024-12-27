#include <string>
#include <vector>
#include<iostream>

using namespace std;

string solution(vector<string> seoul) { 
    //vector는 compare연산자가 없다 , 
    //compare 연산자는 스트링클래스 내부에 있다.
    string answer = "";
    string locate="";
    string compare = "Kim";
    
    for(int i=0;i<seoul.size();i++){
    if(seoul[i]==compare)
    {
     
     locate = to_string(i);
    }
        
    }
    answer = "김서방은 "+locate +"에 있다";
    
    return answer;
}
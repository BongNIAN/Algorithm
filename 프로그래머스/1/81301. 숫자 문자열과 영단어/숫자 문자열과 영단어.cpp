#include <string>
#include <vector>
#include<unordered_map>
#include<iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    string answerString="";
    unordered_map<string,string> number ={
        {"zero","0"}
        ,{"one","1"}
        ,{"two","2"}
        ,{"three","3"}
        ,{"four","4"}
        ,{"five","5"}
        ,{"six","6"}
        ,{"seven","7"}
        ,{"eight","8"}
        ,{"nine","9"}
    };
    
// s.substr (범위1, 범위2)
    
    for(int i=0;i<s.size();){
        
        
        if(s[i]>='0'&&s[i] <='9') {answerString += s[i] ; i++ ; continue;}
        
        //3,4,5만 존재 
        auto it = number.find (s.substr(i,3));
        if(it != number.end()){
            answerString += it->second;
            i+=3;
            continue;
        }
        
       it = number.find (s.substr(i,4));
       if(it != number.end()){
            answerString += it->second;
            i+=4;
            continue;
        }
        
        it = number.find (s.substr(i,5));
       if(it  != number.end()){
            answerString += it->second;
            i+=5;
            continue;
        }
        

        
    }
    
    
    answer = stoi(answerString);
   
    
    
    
    
    return answer;
}
#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(vector<int> food) {
    string answerLeft = "";
    string answerRight = "";
    string answer= "";
    
    
    
    for(int i=1;i<food.size();i++)
    {
        
            //홀수
            int cnt1=0;
            cnt1 = food[i] / 2;
            for(int j=0;j<cnt1 ;j++){
            answerLeft +=  to_string(i);
            answerRight = to_string(i) + answerRight ;
                }
         
       
    }
    
    
    cout <<"Left : " <<  answerLeft <<"Right : " << answerRight <<endl; 
    answer = answerLeft + "0" + answerRight;
    
    return answer;
    
    
    
}
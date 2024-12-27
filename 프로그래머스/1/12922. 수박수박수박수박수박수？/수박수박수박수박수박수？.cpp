#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    //홀수 = 수박수  수 박수 박수  수 박수 박수 박수 
    //짝수 = 수박 수박 수박 수박
    //홀수  = 수 + 박수*2 ex ) 5개면  x size/2 7개면 x size/3
  
    string answer = "";
    int iter = n/2;
    if(n%2 == 0){
        //짝수
       
        for(int i=0;i<iter;i++ ){
            answer = answer + "수박";
        }
    }
    else {
        //홀수
        answer = "수";
        for(int i=0;i<iter;i++ ){
            answer = answer +"박수";
        }
    }
    
    
    
    return answer;
}
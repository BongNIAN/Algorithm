
#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int testSize = p.size();
    
    for(int i=0;i< t.size() - p.size() +1;i++){
    
       //substr도 있다
    if(t.compare(i,testSize,p,0,testSize)  <= 0){
        
        answer++;
        
    }
        }
    

    return answer;
}
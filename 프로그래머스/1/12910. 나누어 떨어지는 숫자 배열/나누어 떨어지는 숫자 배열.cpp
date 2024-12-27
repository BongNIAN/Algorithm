#include <string>
#include <vector>
#include<iostream>


using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    int cnt=0;
    vector<int> answer;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]%divisor==0){
            cnt++;
            answer.push_back(arr[i]);
        }
    }
    
   if(cnt==0) {answer.push_back(-1);return answer;}
    
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer.size()-1-i;j++){
            if(answer[j]>answer[j+1])
            std::swap(answer[j],answer[j+1]);
        }
        
    }
   
    
    return answer;
}
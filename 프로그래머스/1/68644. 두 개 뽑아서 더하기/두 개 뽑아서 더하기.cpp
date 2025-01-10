#include <string>
#include <vector>
#include<map>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> numbers) {
    map<int,int> answer;
    vector <int> num;
    
    for(int i=0;i<numbers.size();i++){
        for(int j=i;j<numbers.size();j++){
            if(i==j){continue;}
            auto it = answer.find(numbers[i] + numbers[j]);
            if(it != answer.end()){
            it->second ++;
            }
            else
            {
                answer.insert({numbers[i] + numbers[j],1});
            }
        }
        
    }
    for(auto it = answer.begin();it!=answer.end();it++)
    {
           cout << it->first<<endl;
        num.push_back(it->first);
    }
  
    
    return num;
}
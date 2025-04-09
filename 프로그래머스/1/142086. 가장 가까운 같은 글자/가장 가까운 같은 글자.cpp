#include <string>
#include <vector>
#include<iostream>
#include<unordered_map>


using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> map;
    
    for(int i=0;i<s.size();i++)
    {
        auto it = map.find(s[i]);
        if(it == map.end()){

            answer.push_back(-1);
            map[s[i]] = i;
            
        }
        
        else
        {  
            answer.push_back(i-(it->second) );
            it->second = i;
        }
        
     cout <<s[i] <<endl;
    }
    
    
    
    return answer;
}
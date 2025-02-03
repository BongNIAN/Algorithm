#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int k=0;
    int size = section.size();
    int sum = 0;
    for(int i=0;i<section.size();i++)
    {
         if(section[i] <=sum) continue;
         
        sum = section[i]+m -1;
        answer++;
    }
    
    return answer;
}


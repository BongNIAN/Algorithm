#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compareWithSort(int a,int b)
{
    return a>b;
}

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    int cnt=0;
    vector<int> tmp;
    for(int i=0;i<score.size();i++)
    {
     
        if(cnt==k)
        {
            
            
            if(tmp[cnt-1]<= score[i])
            {
              
                tmp[cnt-1] = score[i];
                sort(tmp.begin(),tmp.end(),compareWithSort);
                answer.push_back(tmp[cnt-1]);
                continue;
            }
         answer.push_back(tmp[cnt-1]);
        }
        else
        {
            tmp.push_back(score[i]);
            std::sort (tmp.begin(), tmp.end(),compareWithSort);
            cnt++;     
            answer.push_back(tmp[cnt-1]);
           
            
        }
     
        
    }

    return answer;
}
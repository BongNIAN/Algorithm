#include <string>
#include <vector>
#include <algorithm>
#include <iostream> 
using namespace std;


vector<int> solution(vector<int> answers) {
    //1번 : {1,2,3,4,5}
    //2번 : {2,1,2,3,2,4,2,5}
    //3번 : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5
    vector<int> answer;
    vector<int>Player1 =  {1,2,3,4,5};
    vector<int>Player2 =  {2,1,2,3,2,4,2,5};
    vector<int>Player3 =  { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1=0; //idx i
    int cnt2=0; // idx j
    int cnt3=0; // idx k
    int i=0,j=0,k=0;
    
   for(int z=0;z<answers.size();z++)
   {
       //인덱스 초과하면 0번으로 가는 로직
       if(i==Player1.size()) i=0;
       if(j==Player2.size()) j=0;
       if(k==Player3.size()) k=0;
       
       if(answers[z] == Player1[i++]) cnt1++;
       if(answers[z] == Player2[j++]) cnt2++;
       if(answers[z] == Player3[k++]) cnt3++;
       
       
   }
    

    int a = max(cnt1,max(cnt2,cnt3));
    if(a==cnt1)
    {
        answer.push_back(1);
    }
    if(a==cnt2)
    {
         answer.push_back(2);
    }   
    if(a == cnt3)    
    {
         answer.push_back(3);
    }
    

    
    
    return answer;
}
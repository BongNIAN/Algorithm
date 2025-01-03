#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
   vector<int> answerVector ;
    while(n>0){
       answerVector.push_back(n%3) ;
        n/=3;
    }
  int k=1;
     for(int i=answerVector.size()-1;i>=0;i--){
         cout << answerVector[i]<<"\n";
         if(k==1){
              cout <<"first answer : "<<answer<<"\n";
             answer= answerVector[i];
                  cout <<"after answer : "<<answer<<"\n";
                 }
         
        else{
            cout <<"first answer : "<<answer<<"\n";
            answer=answer + k*answerVector[i];
             cout <<"after answer : "<<answer<<"\n";
            }
        
         k*=3;
     }
    
    
    return answer;
}
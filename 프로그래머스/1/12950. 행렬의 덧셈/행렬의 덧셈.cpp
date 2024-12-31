#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    //vertor[i].size = 행
    // vertor.size = 열 
    vector<vector<int>> answer;
    vector<int> tmp;
    vector <int> ini;
    
   int totalSize = arr1.size();
    
    for(int i=0;i<totalSize;i++){
        
         int arrIsize =  arr1[i].size();
        
        tmp.assign(0,0); //여기에 tmp만 초기화를 하면 되는데 
        //ini = move(tmp); =>이렇게하면 tmp는 비워진다
        
        for(int j=0;j<arrIsize;j++){
            
           
            tmp.push_back( arr1[i][j] + arr2[i][j]);
          
        }
        answer.push_back(tmp) ;
      
    }
    
   
    
    return answer;
}
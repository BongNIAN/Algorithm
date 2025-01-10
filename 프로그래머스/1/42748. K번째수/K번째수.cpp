#include <string>
#include <vector>
#include<iostream>
#include <algorithm>

using namespace std;

vector<int> slice(const vector<int> & a,int i,int j){
    // 솔트에는 2가지 인자만 들어갈 수 있는데, 여기에서는 들어갈 수 있을것 같은데?
    //return값이 vector<int> 맞나?
    vector<int> sliceVector ;
    for(int b = i-1; b<=j-1;b++){
        sliceVector.push_back(a[b]);
        cout << " " << a[b];
    }
    cout <<"\n";
    
    return sliceVector;
}

// bool sortCompare(const vector<int>&a){
    
    
// } 람다사용해보자 


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
   
    vector<int> tmp;
    for(int i=0;i<commands.size() ;i++){
       
        tmp = slice(array,commands[i][0],commands[i][1]);
        //벡터는 cout 출력이 안된다
        //오름차순이라 조건 달 필요없는데 연습삼아서 달아보기 
       
        sort(tmp.begin(),tmp.end(),
            [](int a, int b){
                return a < b;
            }
            );
        
       answer.push_back(tmp[commands[i][2] -1 ] );
        
    }
     
    
    
   
    return answer;
}
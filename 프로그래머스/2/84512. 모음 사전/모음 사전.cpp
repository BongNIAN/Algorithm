#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    int size = word.size();
    vector<int> weight ;
    weight.push_back(781);
    weight.push_back(156);
    weight.push_back(31);
    weight.push_back(6);
    weight.push_back(1);
    vector<int>multiplier;
    
    for(int i=0;i<size;i++){
        if(word[i]=='A'){multiplier.push_back(0);}
        if(word[i]=='E'){multiplier.push_back(1);}
        if(word[i]=='I'){multiplier.push_back(2);}
        if(word[i]=='O'){multiplier.push_back(3);}
        if(word[i]=='U'){multiplier.push_back(4);}
    }
    
     int answer = 0;
    
    
    
    //01234
    //DFS로 푸는건가 이건? 뭐였지..다른방법은 없나 
    //지금부터는 i랑 모음과의 연계지 예를들어서 내가 입력받은수가 o라면 시작부터 3개를 건너뛰는거지
    // 그러면 만일 o가 4라면 a가 1이라면 ==> o를 3으로 a를 0으로 마치 배열처럼 가중치를 둔다면 괜찮을듯
    // 이걸 만약에 내가 for문에서 if로 케이스를 나눈다하면 5n정도?
    //만약에 내가 외부에서 따로 case를 나눠서 배열에 집어넣는다면 
    // 추가적인 공간이 필요하지만 시간복잡도가 줄어들까?
    // size에 따라 다르겠지만 지금은 5이하니깐 대충 상수가 되겠네 
    //그럴거면 이번엔  size를 알고 있으니깐 시간을 아껴서 해보자 
    //그러면 aeiou는 크기가 a<e<i<o<u인데 활용할 방법이 없을까?
    
    for(int i=0;i<word.size();i++){
        answer = answer + 1 + multiplier[i]*weight[i] ;  
        
    
       
        
    }
  
    
    
   // A로 시작하는 단어의 수는 5^4 + 5^3 + 5^2 + 5^1 + 1 = {781,156,31,6,1}
    //AA로 시작하는 단어의 수는
    //하나를 건너 뛰었을 때, 얻을 수 있는 갯수..
    // 1자리수일때는 x781 
   
    return answer;
}
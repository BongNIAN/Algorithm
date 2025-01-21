#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(int a, int b) {
    //1. 윤년 =>2월이 29일
    //2. 5번째 인덱스가 금요일 
    //3. 맨마지막 값에 +5를 해서 7로 나눈 나머지를 기준으로 인덱스 설정
    //4. 월별로 설정하면 됨 
    
    vector<string> abc ={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    string answer = "";
    int sum=0;
    sum+=b;
    a--;
    while(1)
    {
        if(a==12){
            sum +=31;
        }
        if(a==11) sum +=30;
        if(a==10) sum +=31;
        if(a==9) sum +=30;
         if(a==8)sum +=31;
         if(a==7)sum +=31;
         if(a==6)sum +=30;
         if(a==5)sum +=31;
         if(a==4)sum +=30;
        if(a==3)sum +=31;
        if(a==2)sum +=29;
        if(a==1)sum +=31;
        if(a==0)break;
        a--;
        
    }
    
    cout << sum<<endl;
    sum+=4;
    sum%=7;
    answer = abc[sum];
    
    return answer;
}
#include <string>
#include <vector>
#include<cctype>
#include<iostream>
using namespace std;

string solution(string s) {
    //오..tolower,toupper =>cctype header
   int word_cnt =0;
    
    for(int i=0;i<s.length();i++,word_cnt++){
        if(s[i] == ' '){word_cnt=1;continue;}
        if(word_cnt %2==0){
            cout<<s[i]<<"\n";
            if(s[i]>='a' && s[i]<='z'){
           
            s[i] = toupper(s[i]);
            
            }
        }
        
        else {
             cout<<s[i]<<"\n";
            if (s[i]>='A' && s[i]<='Z'){
           
            s[i] = tolower(s[i]);
         
        }
             }
    }
    
    return s;
}
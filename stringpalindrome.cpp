#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
      for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    
    string temp=s;
    int c=0;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]!=temp[s.length()-1-i]){
           c=1;
           break;
        } 
    }
    if(c==0){return true;}
    else{return false;}
}

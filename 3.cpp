#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    for(int i=0;i<100;i++){
        if(isspace(s[i])){
            s.erase(i-1,2);
        }}
        for(int i=s.length()-1;i>0;i++){
            for(int j=0;j<i;j++){
                if(s[i]<s[i+1]){
                    int x;
                    x=s[i];
                    s[i]=s[i+1];
                    s[i+1]=x;
                    }
            }
        }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    
    return 0;
}


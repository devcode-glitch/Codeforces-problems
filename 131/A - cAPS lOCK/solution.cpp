#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isUpper(char c){
    return (int(c)>=65 && int(c)<=90);
}
bool isLower(char c){
    return (int(c)>=97 && int(c)<=122);
}
char makeUpper(char c){
    int new1 = (int)c;
    new1-=32;
    return (char)new1;
}
char makeLower(char c){
    int new1 = (int)c;
    new1+=32;
    return (char)new1;
}
void check(string target,int length){
    string cpy = target;
    if(length == 1){
        if(isUpper(target.at(0))){
            char c2 = makeLower(target.at(0));
            target.at(0)=c2;
            cout<<target<<endl;
        }
        else if(isLower(target.at(0))){
            char c2 = makeUpper(target.at(0));
            target.at(0)=c2;
            cout<<target<<endl;
        }
    }
    else{
        char first = target.at(0);
        if(isLower(first)){
            bool flag = true;
            for(int i=1;i<length;i++){
                if(isUpper(target.at(i)))
                continue;
                else{
                    flag = false;
                    cout<<target<<endl;
                    return;
                }
            }
            if(flag)// case where the first letter is lower and the subsequent letters are upper
            {
                char c2 = makeUpper(cpy.at(0));
                cpy.at(0)=c2;
                for(int i=1;i<length;i++){
                    char c3 = makeLower(cpy.at(i));
                    cpy.at(i)=c3;    
                }
                target = cpy;
                cout<<target<<endl;
            }
        }
        else if(isUpper(first)){
            bool flag = true;
            for(int i=1;i<length;i++){
                if(isUpper(cpy.at(i)))
                continue;
                else{
                    flag = false;
                    cout<<cpy<<endl;
                    return;
                }
            }
            if(flag){ // case where all the letters are upper case
                for(int i=0;i<length;i++){
                    char c3 = makeLower(cpy.at(i));
                    cpy.at(i)=c3;    
                }
                target = cpy;
                cout<<target<<endl;
            }
        }
        else{
            cout<<target<<endl;
            return;
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    int len = s.length();
    check(s,len);
    return 0;
}
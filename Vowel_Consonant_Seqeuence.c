#include<iostream>
#include<vector>
using namespace std;
int isConsonant(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
       return 0;
       else return 1;
}
int isVowel(char ch){
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
       return 1;
       else return 0;
}
int main(){
    string str;
    cin>>str;
    vector<char> res;
    int v = 0;
    int c = 0;
    for(int i = 0 ; i < str.size() ; i++){
        if(isConsonant(str[i]) && c==0){
            v = 0;
            c = 1;
            res.push_back('C');
        }
        if(isVowel(str[i]) && v == 0){
            c = 0;
            v = 1;
            res.push_back('V');
        }
    }
    for(int i = 0 ; i < res.size() ; i++){
        cout<<res[i];
    }
}
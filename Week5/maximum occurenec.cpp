#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//alphabet maximum no of occurence
int main(){
    string s="abbaccddd";
    vector<int>a(26);
    for(int i=0;i<s.size();i++){
        int st=s[i]-'a';
        a[st]++;
    }
    int maxi=0;
    char value;
    for(int k=0;k<26;k++){
     if(maxi<a[k]){
         maxi=a[k];
         value=k+'a';
     }
    }
    cout<<"maximum occurence is "<<value;
    return 0;
}
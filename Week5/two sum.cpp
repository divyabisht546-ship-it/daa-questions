// two elements sum equal to given key
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,2,3,5};
    int key=3;
    vector<int>ans;
    int flag=0;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        if(mp.find(key-arr[i])!=mp.end()){
            flag=1;
            ans.push_back(arr[i]);
            ans.push_back(key-arr[i]);
          break;
        }
        mp[arr[i]]++;
    }
    if(flag==0){
        cout<<"NO SUCH ELEMENT EXIST ";
    }
    else{
        cout<<ans[0]<<" "<<ans[1];
    }
    return 0;
}
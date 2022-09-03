#include <bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string> &strs){

    int min_size=INT_MAX;
    int end_index=0;
    for(int i=0;i<strs.size();i++){
        min_size=min(min_size,(int)strs[i].length());
    }
    bool flag=false;
    char curr=strs[0][0];
    for(int i=0;i<min_size;i++){
        curr=strs[0][i];
        for(int j=1;j<strs.size();j++){
            if(strs[j][i]!=curr){
                flag=true;
            }
        }
        if(flag){
            break;
        }
        end_index++;
    }


    return strs[0].substr(0,end_index);
}

int main(){

    vector<string> strs{"dog","racecar","car"};

    cout<<longestCommonPrefix(strs)<<"\n";

    return 0;
}
//only method is coded
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums,int target){
    unordered_map<int,int> map;
    vector<int> result(2,0);

    for(int i=0;i<nums.size();i++){
        if(map.find(target-nums[i])!=map.end()){
            result[0]=i;
            result[1]=map[target-nums[i]];
            return result;
        }
        else{
            map[nums[i]]=i;
        }
    }
    
    return result;
}

int main(){
    //input nums={2,7,11,15}, target=9;
    int target=9;
    vector<int> nums={2,7,11,15};
    vector<int> result=twoSum(nums,target);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
    
    return 1;
}
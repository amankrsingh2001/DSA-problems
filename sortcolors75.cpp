#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>nums = {2,0,1};
    int n = nums.size();
    int l= 0;
    int h = n-1;
    int i = 0;
    while(i<=h){
        if(nums[i]== 0){
            swap(nums[i],nums[l]);
            i++;
            l++;
        }else if(nums[i]==2){
            swap(nums[i],nums[h]);
            h--;
        }else{
            i++;
        }
    } 
    for(auto it:nums){
        cout<<it<<endl;
    }
}
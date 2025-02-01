#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> nums = {4,3,1,6};
    int n = nums.size();
    for(int i =1;i<n;i++){
        int previous = nums[i-1]%2;
        if(nums[i]%2==previous){
            cout<<false<<endl;
        }
    
    }
    cout<<true<<endl; 
    return 0;
}
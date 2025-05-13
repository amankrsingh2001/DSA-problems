#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<vector<string>>groupAnagram(vector<string> &strs){
    int n = strs.size();
    unordered_map<string, vector<string>>hash;
    vector<vector<string>>result;
    for(int i=0;i<n; i++){
        string str = strs[i];        // <1> str = eat       <2> str = tea               <3> str = tan       <4> str =  ate                  <5> str = nat                  <6> str = bat                                      
        sort(str.begin(), str.end()); // <1> sort => aet    <2> sort => aet             <3> sort => ant     <4> sort => aet                 <5> sort => ant                <6> sort => abt
        hash[str].push_back(strs[i]);  // <1> {aet, [eat]}  <2> {aet , [eat, tea]}      <3> {ant ,[tan]}    <4> {aet, [eat, tea, ate]}      <5> {ant ,[tan, nat]}          <6> {abt, [bat]} 
    }

    for(auto it:hash){
        result.push_back(it.second);
    }
    
    return result;
}

int main(){
    vector<string>strs = {"eat","tea","tan","ate","nat","bat"};
    
}

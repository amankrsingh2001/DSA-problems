#include<iostream>
#include<vector>

using namespace std;


int rowCount(vector<vector<int>> &matrix, int i, int j ){
    
    for(int z = 0; z<matrix[0].size(); z++){
        if(z != j && matrix[i][z] == 1){
            return 1;
        }
    }
    return 0;
}


int colCount(vector<vector<int>> &matrix, int i, int j ){
    
    for(int z = 0;z<matrix.size();z++){
        if(z != i && matrix[z][j] == 1){
            return 1;
        }
    }
    return 0;
}


int main(){
    vector<vector<int>> matrix =  {{1,1,0,0},{0,0,1,0},{0,0,1,0},{0,0,0,1}};
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == 1){
                    int row = rowCount(matrix, i, j);                    
                    ans+=row;
                    if(row == 1) continue;;
                    int col = colCount(matrix, i , j);
                    ans += col;
                }
                 
            }
           
        }
    cout<<ans<<endl;

    return 0;

}
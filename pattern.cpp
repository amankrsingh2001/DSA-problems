#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 5;
    int totalCount = n;
   
    for(int i = 0;i<=2*n;i++){
        for(int j = 0;j<=2*n;j++){
          int valueToPrint = min(min(i, j), min(2*n-i, 2*n-j));
          cout<<valueToPrint<<" ";
        }
        cout<<endl;
    }


}
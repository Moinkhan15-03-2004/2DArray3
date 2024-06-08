#include<iostream>
using namespace std;
#include<vector>
int main(){
   vector<vector<int> >v(3,vector<int>(4,2));
 // meaning hai 3 row 4 coloumn har ki value 2
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
 }
  cout<<v.size()<<endl;//printing row
  cout<<v[0].size();// printing coloumn
}
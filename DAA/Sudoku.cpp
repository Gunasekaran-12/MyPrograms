//Sudoku
#include<iostream>
#include<vector>
using namespace std;
bool canplace(int i,int j,vector<vector<int>>& soduku,int num){
    for(int g=0;g<9;g++){
            if(soduku[i][g]==num) return false;
            if(soduku[g][j]==num) return false;
            if(soduku[3*(i/3)+g/3][3*(j/3)+g%3]==num) return false;
    }
    return true;
}
bool solve(vector<vector<int>>& soduku){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(soduku[i][j]==0){
               for(int k=1;k<=9;k++){
                  if(canplace(i,j,soduku,k)){
                     soduku[i][j]=k;
                     if(solve(soduku)){
                         return true;
                     }
                     soduku[i][j]=0;
                  }
               }
               return false;
            }
        }
    }
     return true;
}
int main(){
    vector<vector<int>> suduku(9,vector<int>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>suduku[i][j];
        }
    }
    if(solve(suduku)){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<suduku[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"Solution doesn't exists.";
    }
}

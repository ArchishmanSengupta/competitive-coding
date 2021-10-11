#include<bits/sdc++.h>
using namespace std;
int bishopMoves(int row,int col){
    return min(row-1,col-1)+min(row-1,8-col)+min(8-row,col-1)+min(8-row,8-col);
}
int main(){
    cout<<bishopMoves(4,4);
}
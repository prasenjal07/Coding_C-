#include<iostream>
using namespace std;

bool ISsafe(int**arr,int x,int y,int n){
    if(x<=n-1 && y<=n-1 && arr[x][y]=1){
        return true;
    }
    return false;
}

bool RATMAZE(int**arr,int x,int y,int n,int**solarr){

    if(ISsafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(RATMAZE(arr,x+1,y,n,solarr)){
            return true;
        }
        if(RATMAZE(arr,x,y+1,n,solarr)){
            return true;
        }
        solarr[x][y]=0;
        return false;
    }
    return false;
}
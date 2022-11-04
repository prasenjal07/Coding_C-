#include<iostream>
using namespace std;

bool ISSAFE(int**arr,int x,int y,int n){
    for(int row=0;row<x;row++){
      if(arr[row][y]==1){
        return false;
      }
    }
    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
     while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
}

bool NQueen(int**arr,int x,int n){
  if(x>=n){
    return true;
  }
  for(int col=0;col<n;col++){
     if(ISSAFE(arr,x,col,n)){
        arrr[x][col]==1;
        if(NQueen(arr,x+1,n)){
            return true;
        }
        arr[x][col]=0;
        return false;
     }
  }
  return false;
}
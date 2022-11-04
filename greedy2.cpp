#include<iostream>
using namespace std;

int main(){
    int cost=0;
    int arr[]={1,0,0,0,1,0,0,1,0,1,1,0,1,0,1};

    for(int i=0;i<15;i++){
        
        
        if(cost%2==0){
          if(arr[i]==1){
            arr[i]=1;
          }
          else arr[i]=0;
        }

        else{
            if(arr[i]==0){
                arr[i]=1;
            }
            else{
                arr[i]=0;
            }
        }
        if(arr[i]==1){
            continue;
        }
        else {
            cost+=1;
        }
       


    }
    cout<<"cost required is as:"<<cost<<endl; 
    /*for(int i=0;i<15;i++){
        cout<<arr[i]<<" ";
    }*/
    return 0;
}
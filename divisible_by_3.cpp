#include<iostream>
#include<vector>
using namespace std;
void determine_divisibility(vector<int>data,int k){
    int sum=0;
    pair<int,int> ans;
    for(int i=0;i<k;i++){
        sum+=data[i];
    }
    bool ISdivisible=false;
    if(sum%3==0){
      ans=make_pair(k,1);
      ISdivisible=true;
    }
    int j=0;
    for(int i=k;i<data.size();i++){
        if(ISdivisible){
            break;
        }
        sum=sum+data[i]-data[i-k];
        if(sum%3==0){
            ISdivisible=true;
            ans=make_pair(i-k+1,i+1);
        }
    }

    if(ISdivisible){
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    else{
        cout<<"no subarrY found";
    }

}
int main(){
vector<int>arr={84,23,45,12,56,82};
determine_divisibility(arr,3);
return 0;
}
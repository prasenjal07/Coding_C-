#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void find_combination_set(int index,int sum,int arr[],vector<int>&ds,vector<vector<int>>&ans){
    int n=5;
    if(sum==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index;i<n-1;i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>sum){
            break;
        }
        ds.push_back(arr[i]);
        find_combination_set(index+1,sum-arr[i],arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>find_combonation(int arr[],int n,int sum)
{   
   
    vector<vector<int>>ans; 
    vector<int>ds;
    find_combination_set(0,sum,arr,ds,ans);
    return ans;
}

int main(){
int arr[]={1,1,1,2,2};
int sum = 4;
//int n=sizeof(arr)/sizeof(arr[0]);
//cout<<n<<endl;
vector<vector<int>>v;
find_combonation(arr,5,sum)=v;
for(auto i:v){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}
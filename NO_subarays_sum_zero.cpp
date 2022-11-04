#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"enter the size of arr"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of arr"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int>count;
    int prefixSUM=0;
    for(int i=0;i<n;i++){
        prefixSUM+=arr[i];
        count[prefixSUM]++;
    }

    int ans=0;
    map<int,int>::iterator it;
    for(it=count.begin();it!=count.end();it++){
        int c=it->second;
        ans+=c*(c-1)/2;

        if(it->first==0){
            ans=ans+it->second;
        }
    }

    cout<<ans;


    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool customsort(string a,string b){
    int p,q;
    p=stoi(a,nullptr,10);
    q=stoi(b,nullptr,10);
    
    return p<q;
}
vector<string> bigSorting(vector<string> &unsorted) {
sort(unsorted.begin(),unsorted.end(),customsort);
return unsorted;
}
int main(){
vector<string> s={"6","7","100","1","90"};
vector<string>ans=bigSorting(s);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
}

return 0;
}
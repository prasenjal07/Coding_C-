#include<iostream>
#include<vector>
const int N = 10e5+3;
using namespace std;

vector<int>p1[N];

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>p1[N];
    vector<int>p(n+1,0);
    vector<vector<int>>p2(n+1,p);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;

        p2[x][y]=1;
        p2[y][x]=1;
    }

    cout<<"adjacency matrix is given by"<<endl;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<p2[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        int l,k;
        cin>>l>>k;
        p1[l].push_back(k);
        p1[k].push_back(l);
    }

    return 0;
}
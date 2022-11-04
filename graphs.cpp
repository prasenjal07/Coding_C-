#include<iostream>
#include<vector>
const int N=1e5+7;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>p(n+1,0);
    vector<int>p1[N];
    vector<vector<int>>p2(n+1,p);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        p2[x][y]=1;
        p2[y][x]=1;
    }
    cout<<"the adjecencey matrix is as follows"<<endl;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<p2[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        p1[x].push_back(y);
        p1[y].push_back(x);
    }

    cout<<"adjecency list of above graph is as follows:"<<endl;

    for(int i=1;i<n+1;i++){
    cout<<i<<"->";
    vector<int> :: iterator it;
    for(it=p1[i].begin();it!=p1[i].end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    }

    return 0;
}
#include<iostream>
#include<vector>

const int N = 10e3+2;

using namespace std;

int main(){
    int n,m;
    //where m is no of edges and n is no of nodes;
    cin>>n>>m;
    vector<int>p(n+1,0);
    vector<int>p2[N];
    vector<vector<int>>p1(n+1,p);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        p1[x][y]=1;
        p1[y][x]=1;
    }

    cout<<"printing out"<<endl;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<p1[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<<"taking input for adjecency list"<<endl;

   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    p2[x].push_back(y);
    p2[y].push_back(x);
   }

   cout<<"printing out adjecency list"<<endl;

   for(int i = 1;i<n;i++){
    cout<<i<<"->";
    vector<int>::iterator it;
    for(it=p2[i].begin();it!=p2[i].end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
   }
 

    return 0;
}
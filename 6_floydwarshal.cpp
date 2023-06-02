#include<bits/stdc++.h>
using namespace std;

#define N 5
#define inf 999

int w[N][N]=
    {{0,3,8,inf,-4},
    {inf,0,inf,1,7},
    {inf,4,0,inf,inf},
    {2,inf,-5,0,inf},
    {inf,inf,inf,6,0}
    };

int main(){
    for(int k=0; k<N; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(w[i][k]+w[k][j] < w[i][j])
                    w[i][j]=w[i][k]+w[k][j];
            }
        }
        cout<<"D("<<k<<"):"<<endl;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(w[i][j]==inf)
                    cout<<setw(5)<<"INF";
                else
                cout<<setw(5)<<w[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

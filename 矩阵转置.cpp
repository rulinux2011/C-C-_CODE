#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    vector<int>t;
    vector<int>a;
    int r,c,b;
    cin>>r>>c;
    int x=r*c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
          cin>>b;
          a.push_back(b);
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<fixed<<right<<setw(3)<<a[i];
        if((i+1)%c==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }


    for(int j=0;j<c;++j){
        for(int i=0;i<r;++i){
            t.push_back(a[i*c+j]);
        }
    }
    cout<<endl;

    for(int i=0;i<x;i++){
        cout<<fixed<<right<<setw(3)<<t[i];
        if((i+1)%r==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }

    return 0;
}

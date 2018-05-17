#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int n;
    int j=0,k=0;
    cin>>n;
    int *p=new int[n];
    for(int i=2;i<n;++i){
        if(isprime(i)){
            *(p+(j++))=i;
            ++k;
        }
    }
    for(size_t i=0;i<k;++i){
        cout<<*(p+i)<<" ";
    }
    delete [] p;
    return 0;
}

//不完善的方法,每个数等于它上方两数之和
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
             if(j==0||j==i){
                a[i][j]=1;
             }else{
                 a[i][j]=a[i-1][j-1]+a[i-1][j];
             }
             cout<<setw(6)<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  a[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<=i;++j){
             if(j==0||j==i){
                a[i][j]=1;
             }else{
                 a[i][j]=a[i-1][j-1]+a[i-1][j];
             }
        }
    }

        for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            cout<<setw(3)<<" ";
        }
        for(int j=0;j<=i;++j){
            cout<<setw(6)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}

/*

#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //cin>>n;
    int a[10][21];
    for(int i=0;i<10;++i){
        for(int j=0;j<21;++j){
            a[i][j]=0;
        }
    }
    a[0][10]=1;
    for(int i=1;i<10;++i){
        for(int j=10-i;j<=10-i+2*i+1-1;j+=2){
            a[i][j]=a[i-1][j-1]+a[i-1][j+1];

        }

    }

       for(int i=0;i<10;i++){
    	cout<<"\t";
	    for(int j=0;j<21;j++){
	    if(a[i][j]==0){
	     	cout<<"  ";
	    }else{
	    	cout<<setw(4)<<a[i][j];
	    }
	    }
	    cout<<endl;
    }
    cout<<endl;


    return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a=new int[n*n];
    for(int i;i<n*n;++i){
        a[i]=0;
    }
    a[0]=1;
    a[n]=1;
    a[n+1]=1;
    for(int i=2;i<n;++i){
        a[i*n]=1;
        a[i*n+i]=1;
        for(int j=1;j<i;++j){
            a[i*n+j]=a[(i-1)*n+j-1]+a[(i-1)*n+j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            cout<<setw(3)<<" ";
        }
        for(int j=0;j<=i;++j){
            cout<<setw(6)<<a[i*n+j];
        }
        cout<<endl;
    }
    delete [] a;
    return 0;
*/





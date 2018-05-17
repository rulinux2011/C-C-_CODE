#include<iostream>
#include<stdlib.h>
#define MAX 255

using namespace std;

void Bubble_Sort(int a[],int n){

    int temp,i,j;
    for(i=0;i<n-1;i++){
      for(j=n-1;j>i;j--){
        if(a[j]<a[j-1]){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    }
    cout<<i+1<<":";
    for(int k=0;k<n;k++)
        cout<<a[k]<<",";
    cout<<endl;
    }
}


int main(){
    int n;
    int array[MAX];
    cout<<"PLZ input total elements number of the sequence:";
    cin>>n;
    if(n<=0||n>MAX){
        cout<<"n must more than 0 and less than "<<MAX<<" !"<<endl;
        exit(0);
    }
    cout<<"plz input the sequence one by one:"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }cout<<endl;

    cout<<"The sequence you input is:";
    for(int i=0;i<n;i++){
            cout<<array[i]<<",";
    }
    cout<<endl;
    Bubble_Sort(array,n);
    cout<<"The sequence after sort is:";
    for(int i=0;i<n;i++)
        cout<<array[i]<<",";
    cout<<endl;
    cin.get();

}

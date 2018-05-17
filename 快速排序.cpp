#include<iostream>
#include<stdlib.h>
#define MAX 255

using namespace std;

void quicksort(int a[],int l,int r){
    if(l<r){
        int i=l,j=r,key=a[l];
        while(i<j){
            while(i<j&&a[j]>key)
                j--;
            if(i<j)
                a[i++]=a[j];
            while(i<j&&a[i]<key)
                i++;
            if(i<j)
                a[j--]=a[i];
        }
        a[i]=key;
        quicksort(a,l,i-1);
        quicksort(a,i+1,r);
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
    quicksort(array,0,n-1);
    cout<<"The sequence after sort is:";
    for(int i=0;i<n;i++)
        cout<<array[i]<<",";
    cout<<endl;
    cin.get();

}

#include<iostream>
#include<stdlib.h>
#define MAX 255

using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int a[],int l,int r){
    int key=a[l];
    while(l>=0&&l<r){
        while(l<r&&a[r]>=key)
            r--;
        swap(&a[l],&a[r]);
        while(l<r&&a[l]<key)
            l++;
        swap(&a[l],&a[r]);
    }
    return l;
}

void Quick_Sort(int a[],int l,int r){
    if(l<r){
      int part=partition(a,l,r);
      Quick_Sort(a,l,part-1);
      Quick_Sort(a,part+1,r);
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
    Quick_Sort(array,0,n-1);
    cout<<"The sequence after sort is:";
    for(int i=0;i<n;i++)
        cout<<array[i]<<",";
    cout<<endl;
    cin.get();
}

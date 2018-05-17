#include<iostream>
#include<stdlib.h>
#define MAX 255

using namespace std;

void Bubble_Sort(int a[],int n){
    int i=n-1;
    while(i>0){
        int exchange=0;
        for(int j=0;j<i;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            exchange=j;
        }
      }
      i=exchange;

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

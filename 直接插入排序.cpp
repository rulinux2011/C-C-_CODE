#include<iostream>
#include<stdlib.h>
#define MAX 255

using namespace std;


void InsertSort(int a[],int n)
{
    int j,i,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        cout<<i<<": ";
        for(int k=0;k<n;k++){
            cout<<a[k]<<",";
        }
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
    InsertSort(array,n);
    cout<<"The sequence after sort is:";
    for(int i=0;i<n;i++)
        cout<<array[i]<<",";
    cout<<endl;
    cin.get();

}

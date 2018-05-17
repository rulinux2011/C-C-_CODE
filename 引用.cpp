#include<iostream>

using namespace std;

void function(int *(&p1),int *(&p2)){
    int * temp=p1;
    p1=p2;
    p2=temp;
}

int main(){
    int a=1,b=2;
    int *p1=&a;int *p2=&b;
    function(p1,p2);
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    return 0;
}




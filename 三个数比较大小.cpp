#include<stdio.h>


void fun(int *a,int *b,int *c){
    if(*a<*b){
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
    if(*a<*c){
        *a=*a+*c;
        *c=*a-*c;
        *a=*a-*c;
    }
    if(*b<*c){
        *b=*b+*c;
        *c=*b-*c;
        *b=*b-*c;
    }



}

 int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *p1=&a,*p2=&b,*p3=&c;
    fun(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    return 0;
 }

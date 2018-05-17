/*
题目描述
    求1-n内的完数，所谓的完数是这样的数，它的所有因子相加等于它自身，比如6有3个因子1,2,3,1+2+3=6，那么6是完数。即完数是等于其所有因子相加和的数。

输入
    测试数据有多组，输入n，n数据范围不大。

输出
    对于每组输入,请输出1-n内所有的完数。如有案例输出有多个数字，用空格隔开，输出最后不要有多余的空格。

样例输入
6
样例输出
6
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0)
            {
                        vector<int>a;
                        for(int j=1;j<=n;++j)
                        {
                                    int sum=0;
                                    for(int i=1;i<j;++i){
                                                if(j%i==0){
                                                            sum+=i;
                                                }
                                    }
                                    if(sum==j){
                                                a.push_back(j);
                                    }
                        }
                        for(int i=0;i<a.size();++i){
                                  cout<<a[i];
                                  if(i==a.size()-1){
                                    cout<<endl;
                                  }else{
                                     cout<<" ";
                                  }
                        }
            }
            return 0;
}
*/


/*
题目描述
求正整数N(N>1)的质因数的个数。
相同的质因数需要重复计算。如120=2*2*2*3*5，共有5个质因数。
输入
可能有多组测试数据，每组测试数据的输入是一个正整数N，(1<N<10^9)。

输出
对于每组数据，输出N的质因数的个数。

样例输入
120
200
样例输出
5
5
*/
/*
#include<iostream>
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0)
            {
                        int k=0;
                        for(int i=2;i<n;++i)
                        {
                                    while(i!=n)
                                    {
                                                if(n%i==0)
                                                {
                                                            n=n/i;
                                                            ++k;
                                                }else{
                                                            break;
                                                }
                                    }
                        }
                        ++k;
                        cout<<k<<endl;
            }
            return 0;
}
*/

/*
题目描述
输入n个整数,依次输出每个数的约数的个数。

输入
输入的第一行为N，即数组的个数(N<=1000)
接下来的1行包括N个整数，其中每个数的范围为(1<=Num<=1000000000)
当N=0时输入结束。

输出
可能有多组输入数据，对于每组输入数据，
输出N行，其中每一行对应上面的一个数的约数的个数。

样例输入
6
1 4 6 8 10 12
0
样例输出
1
3
4
4
4
6
*/
/*
#include<iostream>
#include<cmath>
int fun(int n)
{
        int k=0;
        int a=sqrt(n);
        for(int i=1;i<=a;++i)
       {
            if(n%i==0){
                        k+=2;
            }
       }
            if(a*a==n) k--;
       return k;
}
using namespace std;
int main(){
            int n,m;
            while((cin>>n)&&n!=0)
            {
                        for(int i=0;i<n;++i)
                        {
                                cin>>m;
                                cout<<fun(m)<<endl;

                        }
            }
            return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,a;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            printf("%d\n",fun(a));
        }
    }
    return 0;
}

int fun(int n)
{
    int i;
    int num=0;
    int a = sqrt(n);
    for(i=1; i<= a; i++)
    {
        if(n%i==0)
            num=num+2;
    }
    if(a*a==n) num--;
    return num;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
            cout<<"E"<<":"<<" ";
            for(int i=2;i<=60;++i){
                        int sum=0;
                        for(int j=1;j<i;++j){
                                    if(i%j==0){
                                            sum+=j;
                                    }
                        }
                         if(sum==i){
                              cout<<sum<<" ";
                         }
            }
            cout<<endl;
            cout<<"G"<<":"<<" ";
             for(int i=2;i<=60;++i){
                        int sum=0;
                        for(int j=1;j<i;++j){
                                    if(i%j==0){
                                            sum+=j;
                                    }
                        }
                         if(sum>i){
                              cout<<sum<<" ";
                         }
            }
            cout<<endl;
}
*/


  /*
#include<iostream>

int main()
{
            int sum=0,sum2=0;
            for(int i=0;i<10;++i){
                   for(int j=0;j<10;++j){
                        for(int k=0;k<10;++k){
                                   if(i*100+j*10+k+j*100+k*10+k==532){
                                            std::cout<<i<<" "<<j<<" "<<k<<std::endl;
                                   }
                        }
                   }
            }
            return 0;
}
*/
/*
题目描述
守形数是这样一种整数，它的平方的低位部分等于它本身。
比如25的平方是625，低位部分是25，因此25是一个守形数。
编一个程序，判断N是否为守形数。

输入
输入包括1个整数N，2<=N<100。

输出
可能有多组测试数据，对于每组数据，
输出"Yes!”表示N是守形数。
输出"No!”表示N不是守形数。

样例输入
6
11
样例输出
Yes!
No!
*/
/*
#include<iostream>
using namespace std;
int main()
{
            int n;
            while((cin>>n)&&n!=0)
            {
                        int a=n*n,res=0,l=1,k=0;
                        while(a!=0){
                        res+=(a%10)*l;
                        l*=10;
                        a/=10;
                        if(res==n){
                               ++k;
                        }
                        }
                        if(k==0){
                                    cout<<"No!"<<endl;
                        }else{
                                    cout<<"Yes!"<<endl;
                        }
            }
            return 0;
}
*/

/*
题目描述
设N是一个四位数，它的9倍恰好是其反序数（例如：1234的反序数是4321）
求N的值

输入
程序无任何输入数据。

输出
输出题目要求的四位数，如果结果有多组，则每组结果之间以回车隔开。

*/
/*
#include<iostream>
using namespace std;
int fun(int n){
            int a=0,res=0;
            while(n!=0){
                    a=n%10;
                    res=res*10+a;
                    n/=10;
            }
            return res;
}
int main()
{
            int num=0;
            for(int i=1000;i<10000;++i)
            {
                       num=fun(i);
                       if(9*i==num){
                        cout<<i<<" ";
                       }
            }
            cout<<endl;
}
*/

/*
题目描述
输入20个数，每个数都在1-10之间，求1-10中的众数（众数就是出现次数最多的数，如果存在一样多次数的众数，则输出权值较小的那一个）。

输入
测试数据有多组，每组输入20个1-10之间的数。

输出
对于每组输入,请输出1-10中的众数。


注意如果存在一样多次数的众数，则输出权值较小的那一个。


样例输入
8 9 6 4 6 3 10 4 7 4 2 9 1 6 5 6 2 2 3 8
样例输出
6
*/

/*
#include<stdio.h>
#include<string.h>
int main(){
            int num[20];
            int flag,a;
            while(scanf("%d",&a)!=EOF){
                        memset(num,0,sizeof(num));
                        num[a]++;
                        for(int i=1;i<20;++i){
                                 scanf("%d",&a);
                                 num[a]++;
                        }
                        int temp=0;
                        for(int i=1;i<=10;++i){
                                    if(temp<num[i]){
                                                flag=i;
                                                temp=num[i];
                                    }
                        }
                        printf("%d\n",flag);
            }
            return 0;
}
*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n;
            vector<int>a(20);
            while((cin>>n)&&n!=0){
                        a[n]++;
                        for(int i=1;i<20;++i){
                              cin>>n;
                              a[n]++;
                        }
                        int max=0,N;
                        for(int i=1;i<=10;++i){
                                    if(max<a[i]){
                                                max=a[i];
                                                N=i;
                                    }
                        }
                        cout<<N<<endl;
            }
            return 0;
}




/*
题目描述
编写程序，读入一个整数N。若N为非负数，则计算N 到2N 之间的整数和；若N为一个负数，则求2N 到N 之间的整数和。
输入
第一行表示样例数m，接下来m行每行一个整数N，N的绝对值不超过100。


输出
输出m行，每行表示对应的题目所求。

样例输入
2
2
-1
样例输出
9
-3
提示
 注意N可能为负数
 */
 /*
 #include<iostream>
 using namespace std;
 int main()
 {
             int n;
             while((cin>>n)&&n!=0)
             {
                         int m;
                         while(n!=0)
                         {
                            int sum=0;
                            cin>>m;
                            if(m<0){
                                 for(int i=2*m;i<=m;++i){
                                    sum+=i;
                                 }
                         }
                           if(m>0){
                                     for(int i=m;i<=2*m;++i){
                                                sum+=i;
                                     }
                         }
                         cout<<sum<<endl;
                                    --n;
                         }
             }
             return 0;
 }
 */

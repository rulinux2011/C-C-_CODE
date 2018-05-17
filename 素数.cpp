/*
题目描述
输入一个整数n(2<=n<=10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出-1。

输入
输入有多组数据。
每组一行，输入n。

输出
输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数(素数之间用空格隔开，最后一个素数后面没有空格)，如果没有则输出-1。

样例输入
70
样例输出
11 31 41 61
*/
/*
#include<iostream>
#include<cmath>
bool isprime(int n){
            if(n==1){
                        return 0;
            }else{
            for(int i=2;i<=sqrt(n);++i){
                        if(n%i==0){
                                    return 0;
                                    break;
                        }
               }
            }
            return 1;
}
using namespace std;
int main(){
            int n;
            while((cin>>n)&&n!=0){
            int array[n]={0};
            int *p=array;
            if(n>=2&&n<=10000){
                                    int j=0;
                                    for(int i=2;i<n;++i){
                                                if(isprime(i)){
                                                          *(p+(j++)) =i;
                                                }
                                    }
            int k=0,r=0;
            for(int i=0;i<j;++i){
                        if(*(p+i)%10==1){
                                    k++;
                        }
            }
            for(int i=0;i<j;++i){
                        if(*(p+i)%10==1){
                              r++;
                              cout<<*(p+i);
                                    if(r==k){
                                                cout<<endl;
                                    }else{
                                                cout<<" ";
                                    }
                              }
                      }
                      if(k==0){
                            cout<<"-1"<<endl;
                      }
            }
       }
      return 0;
}
*/

/*
题目描述
Output the k-th prime number.

输入
k≤10000

输出
The k-th prime number.

样例输入
10
50
样例输出
29
229
*/
/*
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
            for(int i=2;i<=sqrt(n);++i){
                        if(n%i==0){
                                    return 0;
                                    break;
                        }
            }
            return 1;
}
int main(){
            int n;
               while((cin>>n)&&n!=0){
                        if(n>0&&n<=10000){
                                    int array[n];
                                    int *p=array;
                                    int i=2,j=0;
                                    while(j!=n){
                                         if(isprime(i)){
                                                *(p+(j++))=i;
                                         }
                                         ++i;
                                     }

                                  cout<<*(p+n-1)<<endl;
                        }
                  }

                        return 0;
            }
*/
/*
题目描述
Goldbach's Conjecture: For any even number n greater than or equal to 4, there exists at least one pair of prime numbers p1 and p2 such that n = p1 + p2.
This conjecture has not been proved nor refused yet. No one is sure whether this conjecture actually holds. However, one can find such a pair of prime numbers, if any, for a given even number. The problem here is to write a program that reports the number of all the pairs of prime numbers satisfying the condition in the conjecture for a given even number.

A sequence of even numbers is given as input. Corresponding to each number, the program should output the number of pairs mentioned above. Notice that we are interested in the number of essentially different pairs and therefore you should not count (p1, p2) and (p2, p1) separately as two different pairs.


输入
An integer is given in each input line. You may assume that each integer is even, and is greater than or equal to 4 and less than 2^15. The end of the input is indicated by a number 0.


输出
Each output line should contain an integer number. No other characters should appear in the output.


样例输入
4
10
16
0
样例输出
1
2
2
*/

#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
            if(n==1){
                        return 0;
            }else{
            for(int i=2;i<=sqrt(n);++i){
                        if(n%i==0){
                                    return 0;
                                    break;
                        }
              }
            }
            return 1;
}
int main(){
            int n;
            while((cin>>n)&&n!=0){
                        int k=0;
                        for(int i=2;i<=n/2;++i){
                                    if(isprime(i)&&isprime(n-i)){
                                                k++;
                                    }
                        }
                        cout<<k<<endl;
            }
            return 0;
}




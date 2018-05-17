/*II
#include<iostream>
using namespace std;
int main(){
            int n,a,b;
            int *p=new int[n];
            cin>>n;
            for(int i=0;i<n;++i){
                        cin>>a>>b;
                        *(p+i)=a+b;
            }
            for(int i=0;i<n;++i){
                        cout<<*(p+i)<<endl;
            }
            return 0;
}
*/
/*iii
#include<iostream>
using namespace std;
int main(){
       int a,b;
       while(cin>>a>>b,a||b){
       cout<<a+b<<endl;
            }
       return 0;
       }
*/

/*I
#include<stdio.h>
int main(){
    int a, b;
    while(scanf("%d%d",&a,&b)!=EOF){
        printf("%d\n",a+b);
    }
    return 0;
}
*/
/*III
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0){
            break;
        }else{
            cout<<a+b<<endl;
        }
    }
    return 0;
}
*/
/*iv
#include<iostream>
#include<memory.h>
using namespace std;
int main(){
            int n,a;
            //int  array[100];
            int *array=new int[100];
            int t=1;
            while(t=1){
            cin>>n;
            if(n!=0&&n>0){
                        for(int i=0;i<n;++i){
                                    //scanf("%d",&array[i]);
                                    cin>>a;
                                    array[i]=a;
                        }
                        int sum=0;
                        for(int i=0;i<n;++i){
                                    sum+=array[i];
                        }
                        cout<<sum<<endl;
            }else{
                 t=0;
                 return 0;
            }
            }
            delete [] array;
            return 0;
}
*/
/*#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
            int n,b;
            while(cin>>n){
                        if(n!=0){
                              vector<int> a;
                              int sum=0;
                              for(int i=0;i<n;++i){
                                    cin>>b;
                                    a.push_back(b);
                              }
                              for(vector<int>::size_type i=0;i<a.size();++i){
                                    sum+=a[i];
                              }
                              cout<<sum<<endl;
                        }else{
                              break;
                        }
            }
            return 0;
}

*/
/*
#include<stdio.h>


int main(){
            int n;
            scanf("%d",&n);
            for(int i=0;i<n;++i){
                        int m,a,sum=0;
                        scanf("%d",&m);
                        for(int i=0;i<m;++i){
                                    scanf("%d",&a);
                                    sum+=a;
                        }
                        printf("%d\n",sum);
            }
            return 0;

}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n,m,a;
            cin>>n;
            if(n!=0){
            for(int i=0;i<n;++i){
                           cin>>m;
                           if(m!=0){
                           vector<int>a;
                           int b,sum=0;
                           for(int i=0;i<m;++i){
                                         cin>>b;
                                         a.push_back(b);
                                         sum+=a[i];
                                  }
                                  cout<<sum<<endl;
                           }else{
                                       break;
                           }
            }

            }else{
                return 0;
            }
            return 0;
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
            int n,a,b;
           while( cin>>n){
            vector<int>a;
            int sum=0;
            for(int i=0;i<n;++i){
                       cin>>b;
                       a.push_back(b);
                       sum+=a[i];
            }
            cout<<sum<<endl;
           }
            return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
            int a,b;
            while(cin>>a>>b){
                        cout<<a+b<<endl;
                        cout<<"  "<<endl;
            }
            return 0;
}
*/
/*
#include<stdio.h>


int main(){
            int n;
            scanf("%d",&n);
            for(int i=0;i<n;++i){
                        int m,a,sum=0;
                        scanf("%d",&m);
                        for(int i=0;i<m;++i){
                                    scanf("%d",&a);
                                    sum+=a;
                        }
                        printf("%d\n",sum);
                        printf("\n");
            }
            return 0;

}
*/






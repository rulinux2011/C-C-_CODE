#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cstddef>

using namespace std;


int main()
{
    int ia[3][4] = {{1,2,3,0},{4,5,6,0},{7,8,9,0}};

    for( *p = ia;p! = ia+3;p++)

    {
        for(int *q = *p;q != p+4;q++)
            cout<<*q<<' ';
        cout<<endl;
    }
    cout<<endl;

    for(const auto &q:ia)
    {
        for(auto p:q)
            cout<<p<<' ';
        cout<<endl;
    }
    cout<<endl;

    for(const int (&n)[4]:ia)
    {
        for(const int q:n)
            cout<<q<<' ';
        cout<<endl;
    }
    cout<<endl;

    for(size_t i=0;i<3;i++)
    {
        for(size_t j=0;j<4;j++)
            cout<<ia[i][j]<<' ';
        cout<<endl;
    }
    cout<<endl;

    for(int (*p)[4] = ia;p != ia+3;p++)
    {
        for(size_t i=0;i<4;i++)
            cout<<*((*p)+i)<<' ';
        cout<<endl;
    }
    cout<<endl;

    system("pause");
    return 0;
}



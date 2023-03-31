//1200000 有多少个约数（只计算正约数）。
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=1;i<=1200000;i++)
    {
        if(1200000%i==0)
        sum+=1;
    }
    cout<<sum;
    return 0;
}

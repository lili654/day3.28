／*
如果一个分数的分子和分母的最大公约数是 1，这个分数称为既约分数。
请问，有多少个既约分数，分子和分母都是 1 到 2020 之间的整数（包括 1 和 2020）
*／
#include <iostream>

using namespace std;

int gcd(int m,int n)
{
    if(m%n==0) return n;
    if(n%m==0) return m; 
    if(m>=n) 
    return gcd(n,m%n);
    else 
    return gcd(m,n%m);
}

int main()
{
    int sum=0;
    int i,j;
    for(i=1;i<=2020;i++)
    {
        for(j=1;j<=2020;j++)
        {
            int a=gcd(i,j);
            if(a==1)
            sum+=a;
        }
    }
cout<<sum<<endl;
    return 0;
}










#include<bits/stdc++.h>
using namespace std;
int *get_array(int a)
{
    int *ar=new int[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    return ar;
}
int main()
{
    int n;
    cin>>n;
    int *x=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}



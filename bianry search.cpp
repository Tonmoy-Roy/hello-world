#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],i,n,q,x,first,last,mid;
    cin>>n>>q;
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    while(q--)
    {
        cin>>x;
        first=0;
        last=n-1;
        mid=(first+last)/2;
        while(first<=last)
        {
            if(a[mid]==x)
            {
                cout<<"found";
                break;
            }
            else if(a[mid]<x)
                first=mid+1;
            else
                last=mid-1;
            mid=(first+last)/2;
        }
        if(first>last)
            cout<<"not found";
    }
}

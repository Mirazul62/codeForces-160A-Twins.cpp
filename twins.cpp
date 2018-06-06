#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[100],temp,av=0,sum=0,s1=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    av=sum/2;

    //cout<<av<<endl<<sum<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }

        }
    }
    for(i=0;i<n;i++)
    {
        s1+=a[i];
        count++;
        if(s1>av)
            break;
    }
   cout<<count<<endl;
   //  for(i=0;i<n;i++)
   //      cout<<a[i]<<endl;


}

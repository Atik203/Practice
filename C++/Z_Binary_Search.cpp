#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q;
   cin>>n>>q;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   sort(a,a+n);
   while(q--)
   {
        int x;
        cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid_index=(l+r)/2;
            if(a[mid_index]==x)
            {
                flag=true;
                break;
            }
            if(x>a[mid_index])
            {
                // go right
                l=mid_index+1;
            }
            if(x<a[mid_index])
            {
                // go left
                r=mid_index-1;
            }
        }
        
             if(flag==true) cout<<"found"<<endl;
            else cout<<"not found"<<endl;
   }
    return 0;
}
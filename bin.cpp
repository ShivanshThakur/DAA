#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s=clock();
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<(i+1)<<": ";
        cin>>a[i];
    }
    int f=0, l=n-1, m, se, c=0;
    cout<<"Enter :";
    cin>>se;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]>se)
            l=m-1;
        if(a[m]<se)
            f=m+1;
        if(a[m]==se)
        {
            cout<<"Found";
            c=1;
            break;
        }
    }
    if(c==0)
        cout<<"Not found.";
    cout<<"Exec. time: "<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s= clock();
    int n, c=0;
    cout<<"Enter limit :";
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        c=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            cout<<i<<" ";
    }
    cout<<"\nEXECUTION TIME :"<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s= clock();
    int n;
    cout<<"Enter limit :";
    cin>>n;
    int a=0, b=1, sum=0;
    cout<<a<<" "<<b;
    while(sum<n)
    {
        sum=a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
    }
    cout<<"\nEXECUTION TIME :"<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s= clock();
    int n;
    unsigned int val=1;
    cout<<"Enter a number :";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        val*=i;
    }
    cout<<"Factorial ("<<n<<"!) :"<<val<<"\n";
    cout<<"EXECUTION TIME :"<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

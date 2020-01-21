#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s= clock();
    int a, b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int sum= a+b;
    cout<<"Sum :"<<sum<<"\n";
    cout<<"EXECUTION TIME :"<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

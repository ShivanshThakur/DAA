#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t start=clock();
    int n, c=0;
    int a[]={834, 850, 681, 732, 761, 596, 456, 633, 775, 576, 589, 820, 784, 799, 857, 655, 872, 895, 999, 678, 683, 770};
    cout<<"Enter item to be searched :";
    cin>>n;
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<s; i++)
        if(n==a[i])
        {
            cout<<"Found\n";
            c=1;
            break;
        }
    if(c==0)
        cout<<"Not found!\n";
    cout<<"\nEXECUTION TIME :"<<(double)(clock()-start)/CLOCKS_PER_SEC;
    return 0;
}

#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    clock_t s=clock();
    int a[]={834, 850, 681, 732, 761, 596, 456, 633, 775, 576, 589, 820, 784, 799, 857, 655, 872, 895, 999, 678, 683, 770};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n-1; i++)
        for(int j=i; j<n; j++)
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    cout<<"Sorted array...\n\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n\nExecution time :"<<(double)(clock()-s)/CLOCKS_PER_SEC;
    return 0;
}

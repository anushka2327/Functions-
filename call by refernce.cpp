// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sawp(int*x,int*y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int x=500,y=100;
    swap(x,y);
    cout<<"value of x is:"<<x<<endl;
    cout<<"value of y is:"<<y<<endl;
    return 0;
}
/*value of x is:100
value of y is:500


=== Code Execution Successful ===/*
#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if((num==1)||(num==0))
        return num;
    else
        return (fibonacci(num-1)+fibonacci(num-2));
}
int main()
{
    int n;
    cout<<"Enter number of terms of the series: \n";
    cin>>n;
    cout<<"The Fibonacci Series is: ";
    for(int i=1;i<=n;i++)
    {
        cout<<" "<<fibonacci(i);
    }
    return 0;
}






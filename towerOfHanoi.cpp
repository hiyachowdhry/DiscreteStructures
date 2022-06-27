#include<iostream>
using namespace std;

/*rod1 is initial rod
rod2 is final rod
rod3 is the helping rod*/

void towerOfHanoi(int n, char rod1,char rod2,char rod3)
{
    if(n==0)
        return;
    towerOfHanoi(n-1, rod1,rod3,rod2);
    cout<<"Move the disk "<<n<<" from rod "<<rod1<<" to rod "<<rod2<<endl;
    towerOfHanoi(n-1, rod3,rod2,rod1);
}

int main()
{
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    towerOfHanoi(n,'A','B','C'); //assuming names of rods as A,B,C
    return 0;
}


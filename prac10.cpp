#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
}
cout << endl;
}

void findPermutations(int a[], int n)
{
    sort(a, a + n);
    cout << "Possible permutations are:"<<endl;
    do {
        print(a, n);
    } while (next_permutation(a, a + n));
}

int main()
{
    int n;
    cout<<"Enter the no. of digits: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the digits: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    findPermutations(a, n);

    return 0;
}

#include <iostream>
using namespace std;

bool ismember(int size,int A[])
{
    int a;
    cout << "\nEnter the element to be searched: ";
    cin >> a;

    for(int i=0;i<size;i++)
    {
        if(A[i]==a)
            return true;
    }

    return false;
}

void powerset(int A[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <=j; k++)
            {
            cout<<A[k]<<" ";

            }
            cout<<endl;
        }
    }
}

int main()
{
    bool x;
    int size;
    cout << "\nEnter the size of set: ";
    cin >> size;
    int A[size];
    cout << "\nEnter the elements: ";
    for(int i=0;i<size;i++)
    {
        cin >> A[i];
    }
    cout<<endl;
    cout<<"Cardinality is: "<<size<<endl;
    x=ismember(size,A);
    if(x==true)
        cout << "\nTRUE, Value is present!";
    else
        cout << "\nFALSE, Value is not present!!!";

    cout << "\n\nThe possible subset pairs\n" << endl;
    powerset(A,size);

    return 0;
}

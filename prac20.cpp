#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int m ,i;
    cout<<"Enter value of m in m-ary tree: "<<endl;
    cin>>m;
    cout<<"Enter number of internal vertices: "<<endl;
    cin>>i;
    int result = 0;
    result = i * (m - 1) + 1;
    cout<<"Number of leaf nodes: "<<result;
    return 0;
}

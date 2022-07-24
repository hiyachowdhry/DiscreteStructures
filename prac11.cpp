#include<iostream>

using namespace std;

int nCr(int, int);
int nPr(int, int);


int main()
{
	int n,r;
	cout << "Enter the value of n: "<<endl;
	cin >> n;
	cout << "Enter the value of r: "<<endl;
	cin >> r;

	cout << "\nPERMUTATION " << "P(" << n << ", " << r << "): " << nPr(n, r);
	cout << "\nCOMBINATION " << "C(" << n << ", " << r << "): " << nCr(n, r);

	return 0;
}

int nPr(int n, int r)
{
	if(r == 0)
		return 1;

	if(r > n)
		return 0;

	return nPr(n-1, r) + r * nPr(n-1, r-1);
}

int nCr(int n, int r)
{
	if(r ==0 || r ==n)
		return 1;

	return nCr(n-1, r) + nCr(n-1, r-1);
}


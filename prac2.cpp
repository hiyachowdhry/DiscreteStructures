#include<iostream>
using namespace std;

class SET{
    int i,j;
public:

    void Subset(int A[], int n1, int B[], int n2){
        int c=0;
        for(i=0; i<n1; i++){
            for(j=0;j<n2;j++){
                if (A[i]==B[j]){
                    c++;
                }
            }
        }
        if(c != n1)
			cout << "SET A is not a subset of SET B" << endl;

		else
			cout << "SET A is a subset of SET B" << endl;

		int c1=0;

		for(i=0; i<n2; i++)
			for(j=0; j<n1; j++)
				if(B[i] == A[j])
					c1++;

		if(c != n2)
			cout << "SET B is not a subset of SET A" << endl;

		else
			cout << "SET B is a subset of SET A" << endl;

    }

    void UnionInters(int A[],int n1,int B[],int n2)
    {
        int n3=n1+n2;
        int C[n3];
        int D[n3];
        int x=0,y=0;

        for(i=0;i<n1;i++){
            C[x]=A[i];
            x++;
        }
        for(i=0;i<n2;i++){
            C[x]=B[i];
            x++;
        }
        for(i=0;i<x;i++){
            for(j=i+1;j<x;j++){
                if(C[i]==C[j]){
                    D[y]=C[i];
                    y++;

                    for(int k=j;k<x-1;k++)
                        C[k]=C[k+1];
                        x--;
                }
                else
                    continue;
            }
        }
        cout << "Union of two sets is : {";
		for(i=0; i<x; i++)
			cout << C[i] << " ";
		cout << "}";

		cout << endl;

		if(y != 0)
		{
			cout << "Intersection of two sets is : {";

			for(i=0; i<y; i++)
				cout << D[i] << " ";
			cout << "}";
		}

		else
			cout << "No intersection found";

		cout << endl;
    }

    void Complement(int A[],int n1,int B[],int n2)
    {
        int n3;
        cout<<"Enter the no. of elements of universal set: ";
        cin>>n3;
        cout<<"Enter the elements of universal set: ";
        int U[n3];
        for(i=0;i<n3;i++)
            cin>>U[i];

        int A1[n3],p=0,q=0;
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n1;j++)
            {
                if(U[i]==A[j])
                    q++;
                else
                    continue;
            }
            if(q==0){
                A1[p]=U[i];
                p++;
            }
            q=0;
        }
        cout<<endl;
        cout<<"Complement of SET A is: {";
        for(i=0;i<p;i++)
            cout<<A1[i]<<" ";
        cout<<"}"<<endl;

        int B1[n3],p1=0,q1=0;
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(U[i]==B[j])
                    q1++;
                else
                    continue;
            }
            if(q1==0){
                B1[p1]=U[i];
                p1++;
            }
            q1=0;
        }
        cout<<endl;
        cout<<"Complement of SET B is: {";
        for(i=0;i<p1;i++)
            cout<<B1[i]<<" ";
        cout<<"}"<<endl;
    }

    void setSymDiff(int A[],int n1,int B[],int n2)
    {
        int ABDif[100],q=0,ctr=0;

		for(i=0; i<n1; i++)
		{
			for(j=0; j<n2; j++)
			{
				if(A[i] == B[j])
					ctr++;

				else
					continue;
			}

			if(ctr == 0)
			{
				ABDif[q]=A[i];
				q++;
			}

			ctr=0;
		}

		cout << "Set difference A-B is : {";
		for(i=0; i<q; i++)
			cout << ABDif[i] << " ";
		cout << "}" << endl;

		int BADif[100],p=0,c=0;

		for(i=0; i<n2; i++)
		{
			for(j=0; j<n1; j++)
			{
				if(B[i] == A[j])
					c++;

				else
					continue;
			}

			if(c == 0)
			{
				BADif[p]=B[i];
				p++;
			}

			c=0;
		}

		cout << "Set difference B-A is : {";
		for(i=0; i<p; i++)
			cout << BADif[i] << " ";
		cout << "}" << endl;

		int uSize=q+p;
		int symDif[uSize];
		int x=0,y=0;

		for(i=0; i<q; i++)
		{
			symDif[x]=ABDif[i];
			x++;
		}

		for(i=0; i<p; i++)
		{
			symDif[x]=BADif[i];
			x++;
		}

		cout << "Symmetric difference b/w two sets is : {";
		for(i=0; i<x; i++)
			cout << symDif[i] << " ";
		cout << "}";

		cout << endl;

    }

    void CartesianProduct(int A[],int n1,int B[],int n2)
    {
        int sizeAB,sizeBA,x=0,y=0;

		sizeAB=n1*n2;
		sizeBA=sizeAB;

		int AB[sizeAB*2],BA[sizeBA*2];

		for(i=0; i<n1; i++)
		{
			for(j=0; j<n2; j++)
			{
				AB[x++]=A[i];
				AB[x++]=B[j];
			}
		}

		for(i=0; i<n2; i++)
		{
			for(j=0; j<n1; j++)
			{
				BA[y++]=B[i];
				BA[y++]=A[j];
			}
		}

		cout << "A X B = { ";
		for(i=0; i<x; i++)
		{
			if(i%2 == 0)
				cout << "(";
			cout << AB[i] << " ";

			if(i%2 != 0)
				cout << ")";
		}
		cout << " }" << endl;

		cout << "B X A = { ";
		for(i=0; i<y; i++)
		{
			if(i%2 == 0)
				cout << "(";
			cout << BA[i] << " ";

			if(i%2 != 0)
				cout << ")";
		}
		cout << " }" << endl;
	}
};


int main()
{
    int sizeA, sizeB;
    cout << "Enter the no. of elements in SET A : ";
	cin >> sizeA;

	int arrA[sizeA];

	cout << "Enter the elements : ";
	for(int i=0; i<sizeA; i++)
		cin >> arrA[i];

	cout << "Enter the no. of elements in SET B : ";
	cin >> sizeB;

	int arrB[sizeB];

	cout << "Enter the elements : ";
	for(int i=0; i<sizeB; i++)
		cin >> arrB[i];

    SET ob;
    cout << "-------------------------------------------------" << endl;

    cout<<"\tSUBSET\n";
    ob.Subset(arrA,sizeA,arrB,sizeB);
    cout << "-------------------------------------------------" << endl;

    cout<<"\tUNION AND INTERSECTION\n";
    ob.UnionInters(arrA,sizeA,arrB,sizeB);
    cout << "-------------------------------------------------" << endl;

    cout<<"\tCOMPLEMENT\n";
    ob.Complement(arrA,sizeA,arrB,sizeB);
    cout << "-------------------------------------------------" << endl;

    cout << "\tSET and SYMMETRIC DIFFERENCE\n" << endl;
	ob.setSymDiff(arrA, sizeA, arrB, sizeB);
    cout << "-------------------------------------------------" << endl;

    cout << "\tCARTESIAN PRODUCT\n" << endl;
	ob.CartesianProduct(arrA, sizeA, arrB, sizeB);

	return 0;
}

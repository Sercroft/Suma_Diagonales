#include <iostream>
#include<locale>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, "spanish");
	cout<<"Digite el tamaño de la matriz: ";
	cin>>n;cout<<endl;
	int n2,i=0, j=0, A[n][n], x=1, k, x1=0, x2=0, sum=0, sum2=0, z=0, x3=0;
	for (int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"Ingrese el valor del número "<<x<<"\n";
		cin>>A[i][j];
		x++;
		}
	}
	
	for (int i=0; i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<"\t"<<A[i][j];
			x++;
		}
	}
	for(int x=0;x<n;x++)
	{
		x1=0;
		x2=0;
		sum=A[x][x]+sum;
	}
	for(int x=0;x<n;x++)
	{
		x1=n-z;
		x1--;
		x2=-1+z;
		x2++;
		z++;
		sum2=A[x1][x2]+sum2;
		cout<<endl<<endl<<"Posición "<<x1<<", "<<x2;
	}
	cout<<endl<<endl<<"La suma de la primera diagonal es: "<<sum<<"\n";
	cout<<"La suma de la segunda diagonal es: "<<sum2;
	return 0;
}

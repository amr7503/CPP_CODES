#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"You want to print multiplication table of : ";
	cin>>n;
	cout<<"                                     Upto : ";
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
	

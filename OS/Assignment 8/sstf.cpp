#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
void sstf(int a[],int n,int h)
{
	vector<int> s;
	int size=n;
	int ad=0;
	int pos,min;
	while(n>0)
	{	
		min=abs(h-a[0]);
		for(int i=0;i<n;i++)
		{
			if(min >= abs(h-a[i]))
			{
				min=abs(h-a[i]);
				pos=i;
			}
		}
		ad+=min;
		s.push_back(a[pos]);
		h=a[pos];
		for(int i=pos;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	cout<<"Absolute difference= "<<ad<<endl;
	cout<<"Sequence: ";
	for(int i=0;i<size;i++)
		cout<<s[i]<<" ";
}
int main()
{
	int n,h;
	cout<<"Size: ";
	cin>>n;
	cout<<"Head: ";
	cin>>h;
	cout<<"Sequence:\n";
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sstf(a,n,h);
	return 0;
}
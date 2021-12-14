#include<iostream>
using namespace std;
int main()
{
	int p,b;
	cout<<"Processes: ";
	cin>>p;
	int *process=new int[p];
	int *allocate=new int[p];
	cout<<"Enter process sizes:\n";
	for(int i=0;i<p;i++)
	{
		cin>>process[i];
		allocate[i]=-1;
	}
	cout<<"Buffer size: ";
	cin>>b;
	int *buffer=new int[b];
	cout<<"Enter buffer sizes:\n";
	for(int i=0;i<b;i++)
	{
		cin>>buffer[i];
	}
	int max,pos,i=0;
	while(i<p)
	{
		max=buffer[0];
		for(int j=0;j<b;j++)
		{
			if(max<buffer[j])
			{
				max=buffer[j];
				pos=j;
			}
		}
		if(buffer[pos]-process[i] > 0)
		{
			allocate[i]=pos;
			buffer[pos]-=process[i];
		}
		i++;
	}
	for(i=0;i<p;i++)
	{
		if(allocate[i]==-1)
			cout<<"Process "<<i<<" is not allocated any buffer\n";
		else
			cout<<"Process "<<i<<" is allocated "<<allocate[i]<<" buffer\n";
	}
	delete []process;
	delete []buffer;
	delete []allocate;
	return 0;
}
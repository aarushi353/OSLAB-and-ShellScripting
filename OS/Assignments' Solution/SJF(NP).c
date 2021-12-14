#include<stdio.h>

void findwt(int n,int at[],int bt[], int wt[])
{ int i;
	wt[0]=0;
	for(i=1;i<n;i++)
	{
	wt[i]=bt[i-1]+wt[i-1]-at[i]+at[i-1];	
	}
}

void findtat(int n,int bt[],int wt[], int tat[])
{
	int i;
	for(i=0;i<n;i++)
	{
	tat[i]=bt[i]+wt[i];	
	}
}

void cmplt(int n,int at[],int tat[],int ct[])
{
	int i;
	for(i=0;i<n;i++)
	{
	ct[i]=at[i]+tat[i];	
	}
}

void sjf(int pro[],int n,int at[],int bt[])
{
	int wt[n],tat[n],ct[n],tot_wt=0,tot_tat=0,i;
	float avgwt,avgtat;
	findwt(n,at,bt,wt);
	findtat(n,bt,wt,tat);
	cmplt(n,at,tat,ct);
	printf("Process No. Arrival Time Burst Time Waiting Time Turn Around Time Completion Time\n");
	for(i=0;i<n;i++)
	{
	printf("  %d          %d           %d             %d           %d                %d \n",pro[i],at[i],bt[i],wt[i],tat[i],ct[i]);
	tot_wt+=wt[i];
	tot_tat+=tat[i];	
	}
	avgwt=(float)tot_wt/(float)n;
	avgtat=(float)tot_tat/(float)n;
	printf("Average waiting time for processes in FCFS Scheduling is: %f\nWhile the average total turn around time is: %f",avgwt,avgtat);
	}

int main(){
    int bt[100], at[100], n,i,j,temp,p,t;
    printf("Enter no of processes:");
    scanf("%d", &n);
    int pro[n];
    for(i=0;i<n;i++)
    {
    	 printf("Enter burst time\n");
    	scanf("%d",&bt[i]);
    	printf("Enter arrival time\n");
    	scanf("%d",&at[i]);
    	pro[i]=i+1;
	}
    printf("INPUT:\n");
	printf("Process No. Arrival Time Burst Time\n");
	for(i=0;i<n;i++)
	{
	printf("  %d          %d             %d\n",pro[i],at[i],bt[i]);
	}
    	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(at[i]>at[j])
			{    
			t=at[i];
				at[i]=at[j];
				at[j]=t;
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				p=pro[i];
				pro[i]=pro[j];
				pro[j]=p;
			}
		}
	} 
    if(at[0]==0)
	i=1;
	else
	i=0;
	for(;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{    
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				p=pro[i];
				pro[i]=pro[j];
				pro[j]=p;
			}
			/*else if(bt[i]==bt[j])
			{
				if(pro[i]>pro[j])
				{
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				p=pro[i];
				pro[i]=pro[j];
				pro[j]=p;}	
				}*/
			}
				}
	printf("OUTPUT\n");
	sjf(pro,n,at,bt);
	return 0;
}

}
#include<stdio.h>
int main()
{
	int n, bt[20],wt[20],tat[20],avwt=0, avtat=0;
	printf("Enter total number of processes(max 20)\n");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		printf("Burst time for P[%d]: \n", i+1 );
		scanf("%d",&bt[i]);
		// printf("Arival time for P[%d]: \n", i+1 );
		// scanf("%d",&art[i]);
	}
	wt[0]=0;
	//calculating waiting times
	for (int i = 1; i < n; ++i)
	{
		wt[i] = bt[i-1] + wt[i-1];
	}
	printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
	//calculating turnaround time 
	for (int i = 0; i < n; ++i)
	{
		tat[i] = bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
		printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
	}
	avwt/=n;
	avtat/=n;
	printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
	return 0;
}
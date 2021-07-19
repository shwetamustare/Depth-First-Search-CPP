	//Aim:To implement DFS search.
      
			
	#include<iostream>
	#include<stdlib.h>

	using namespace std;
	int main()
	{
	int connectivity[20][20],v,k,n,a[20],front,rear,visit[10],visited[10],stk[20],j,top;
	string cities[20];
	int m;
	cout <<"enter no of cities: ";
	cin >> n;
	cout<<"Enter names of cities: "<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>cities[i];

		}
		cout<<"Enter the connectivity matrix: "<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>connectivity[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<connectivity[i][j]<<"\t";
			
				if(((j+1)%n)==0)
				{			
					cout<<"\n";
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<"\nCity no\t"<<i<<"\t"<<cities[i]<<"\n";
		}

		cout <<"enter initial city no\n";
		cin >>v;
		cout <<"Visited cities: ";
		cout <<cities[v]<<" ";
		visited[v]=1;
		k=1;
		while(k<n)
		{
			for(j=n;j>=1;j--)
			if(connectivity[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
			visit[j]=1;
			stk[top]=j;
			top++;
			}
		v=stk[--top];
		cout<<cities[v]<< " ";
		k++;
		visit[v]=0; visited[v]=1;
		}
	}

	/*
	OUTPUT:-

	[ccoew@localhost]$ g++ city_DFS.cpp
	[ccoew@localhost]$ ./a.out
	enter no of cities: 7
	Enter names of cities: 
	Chennai
	Mumbai
	Pune
	Kanpur
	Aurangabad
	Ratnagiri
	Banglore
	Enter the connectivity matrix: 
	0 1 1 0 0 0 0
	1 0 0 0 1 1 0 
	1 0 0 1 0 0 0 
	0 0 1 0 0 0 0 
	0 1 0 0 0 0 1
	0 1 0 0 0 0 0
	0 0 0 0 1 0 0
	0	1	1	0	0	0	0	
	1	0	0	0	1	1	0	
	1	0	0	1	0	0	0	
	0	0	1	0	0	0	0	
	0	1	0	0	0	0	1	
	0	1	0	0	0	0	0	
	0	0	0	0	1	0	0	

	City no	0	Chennai

	City no	1	Mumbai

	City no	2	Pune

	City no	3	Kanpur

	City no	4	Aurangabad

	City no	5	Ratnagiri

	City no	6	Banglore
	enter initial city no
	0
	Visited cities: Chennai Mumbai Aurangabad Banglore Ratnagiri Pune Kanpur [ccoew@localhost]$ 

	*/

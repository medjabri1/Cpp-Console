#include "functions.h"
int rechSeqTriee(int *T , const int &n , const int &e)
{
	int i=0;
	while((i<n)&&(T[i]<e))
	{
		i++;
	}
	return(i+1);
}
int rechSeqNTriee(int *T , const int &n , const int  &e)
{
	int i=0;
	{
		while((i<n)&&(T[i]!=e))
		{
			i++;
		}
	}
	return(i+1);
}
int rechDicho(int *T , const int &n , const int &e)
{
	bool find=false;
	int inf=0,sup=n-1,m;
	while((inf<=sup)&&(!find))
	{
		m=(inf+sup)/2;
		if(T[m]==e)
		{
			find=true;
		}
		else
		{
			if(T[m]<e)
			{
				inf=m+1;
			}
			else
			{
				sup=m-1;
			}
		}
	}
	return(m+1);
}

void insNTriee(int *T , int &n , const int &e)
{
	T[n]=e;
	n++;
}

void insTriee(int *T , int &n , const int &e)
{
	int i,pos;
	if(T[0]>e)
	{
		pos=0;
	}
	else
	{
		i=n-1;
		while(T[i]>e)
		{
			i--;
		}
		pos=i+1;
	}
	if(pos==n)
	{
		T[pos]=e;
		n++;
	}
	else
	{
		for(i=n;i>pos;i--)
		{
			T[i]=T[i-1];
		}
		T[pos]=e;
		n++;
	}
}

void supTriee(int *T , int &n , const int &e)
{
	for(int i=0;i<n;i++)
	{
		if(T[i]==e)
		{
			for(int j=i;j<n;j++)
			{
				T[j]=T[j+1];
			}
			n--;
		}
	}
}

void triSel(int *T , const int &n)
{
	int i,j,ind,tmp;
	for(i=0;i<n;i++)
	{
		ind=i;
		for(j=i+1;j<n;j++)
		{
			if(T[j]<T[ind])
			{
				ind=j;
			}
		}
		tmp=T[ind];
		T[ind]=T[i];
		T[i]=tmp;
	}
}

void triIns(int *T , const int &n)
{
	int i,j,pivot;
	for(i=1;i<n;i++)
	{
		j=i;
		pivot=T[j];
		while((j>=1)&&(T[j-1]>pivot))
		{
			T[j]=T[j-1];
			j--;
		}
		T[j]=pivot;
	}
}

int partition(int *T , int p , int r)
{
	int i=p+1,j=r;
	float pivot=T[p];
	while(i<=j)
	{
		while((j<=r)&&(T[i]<=pivot))
		{
			i++;
		}
		while((j>=p)&&(T[j]>pivot))
		{
			if(i<j)
			{
				int tmp=T[i];
				T[i]=T[j];
				T[j]=tmp;
				i++;
				j--;
			}
		}
		int tmp=T[j];
		T[j]=T[p];
		T[p]=tmp;
		return(j);
	}
}

void triRapide(int *T , int p , int r)
{
	int q;
	if(p<r)
	{
		q=partition(T,p,r);
		triRapide(T,p,q-1);
		triRapide(T,q+1,r);
	}
}







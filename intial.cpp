//KADANES ALGO

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int a[], int n)
{
	int sum = 0;
	int maxi = INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		maxi = max(sum,maxi);
		if(sum<0)
		{
			sum = 0;
		}
	}
	return maxi;
}


int main()
{
	int a[] = {-2,-3,4,-1,-2,1,5,-3,5,7,-3};
	int n = sizeof(a)/sizeof(a[0]);
	int max = maxSubArray(a,n);
	cout<<max<<endl;
	
}

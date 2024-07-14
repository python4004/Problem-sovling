#include<iostream>
using namespace std;

int main()
{ //10 5 20 20 4 5 2 25 1

	int n,a,b,mimimum_score,maximum_score;
	a=0;
	b=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mimimum_score=arr[0];
	maximum_score=arr[0];
	for(int j=1;j<n;j++)
	{
		if(maximum_score<arr[j])
		{
			maximum_score=arr[j];
			a++;
		}
		else if(maximum_score>arr[j])
		{
			if(mimimum_score>arr[j])
			{
				mimimum_score=arr[j];
				b++;
			}
		}
	}
	
	cout<<a<<" "<<b;
	return 0;
}

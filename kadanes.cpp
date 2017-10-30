#include<iostream>
using namespace std;
int main()
{
	int max_so_far=0;
	int max_ending_here=0;
	int n;
	cout<<"enter no of values to be entered in array";
	cin>>n;
	int a[20];
	cout<<" enter elements  ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" elements are  ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	for(int i=0;i<n;i++)
	{
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here<0)
		{
			max_ending_here=0;
		}
		if(max_so_far < max_ending_here)
		{
            max_so_far = max_ending_here;
        }
	}
	cout<<endl<<"max sum is"<<max_so_far;
	return(0);
}

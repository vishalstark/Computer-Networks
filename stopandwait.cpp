#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int nf,ttm=0;
	cout<<"Enter the number of frames to transmit : ";
	cin>>nf;
	
	
	string frames[nf];
	
	cout<<"Enter the frames data : ";
	for(int i=0;i<nf;i++)
	cin>>frames[i];
	
	for(int i=0;i<nf;i++)
	{
		label : int random =1+(rand()%(10-1+1));
		ttm++;
		if(random>=7)
		{
		cout<<"\n\nFrame "<<i+1<<" Time Out ";
		goto label;
		}
		
		else if(random>=4)
		{
		cout<<"\n\nFrame "<<i+1<<" Positive Acknowledgement : Frame Sent";
		}
		
		else
		{
		cout<<"\n\nFrame "<<i+1<<" Negative Acknowledgement : Resend the Frame";
		goto label;
		}
		
	}
	
	cout<<"\n\n--------------------------------------------\n";
	cout<<"\t\tTotal Transmission Time : "<<ttm;
	return 0;
}

#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int n,isNeg=0;
	long long int k;
	cin>>n>>k;
	//cout<<"n= "<<n<<endl<<"k= "<<k;
	long long int arr[n],max;
	cin>>arr[0];
	if(arr[0]<1) isNeg=1;
	max=arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	//cout<<endl<<max<<endl;
	long long int st1[n],st2[n];
	long long int max2;
	for(int i=0;i<n;i++){
		st1[i]=max-arr[i];
		if(i==0) max2=st1[i];
		if(max2<st1[i]) max2=st1[i];
	}
	if(max2==0)
		for(int i=0; i<n;i++)
			st2[i]=0;
	else
		for(int i=0;i<n;i++)
			st2[i]=max2-st1[i];
	if(k==0){
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	else if(k%2==0){
		for(int i=0;i<n;i++)
			cout<<st2[i]<<" ";
		cout<<endl;	
	}
	else if(k%2==1){
		for(int i=0;i<n;i++)
			cout<<st1[i]<<" ";
		cout<<endl;
	}
	return 0;
}
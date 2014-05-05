#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		long long int ans=0;
		cin>>n;
		
		long long int a[n];
		for(long long int i=0;i<n;i++){
			cin>>a[i];
		}
		ans=a[n-1]+1;
		for(long long int i=n-2;i>=1;i--){
			if(ans<a[i]){
				ans=a[i];
			}
			ans++;
			//cout<<ans<<endl;
		}
		//ans++;
		if(ans<a[0])
			ans=a[0];
		cout<<ans<<endl;
	}
	return 0;
}
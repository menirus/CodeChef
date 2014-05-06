#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	int l=0,count=0,found=0,ans=0;
	//cout<<endl<<s.length()<<endl;
	for(int i=0;i<s.length();i++){
		if(l>=0 && s[i]=='<'){
			l++;count++;
		}
		else if(l>0 && s[i]=='>'){
			l--;count++;
		}
		else if(l==0 && s[i]=='>')
			break;
		if(l==0){
			found=1;
			ans=count;
		}
	}
	if(l>0 && found==0) count=0;
	cout<<ans<<endl;
}
	return 0;
 
} 
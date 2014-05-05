#include "iostream"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a + n);
        
        int start = 0;
        int end = n-1;
        int numOfPairs = 0;

        while (start != end)
        {
            if (a[start]*a[end] > a[start]+a[end])
            {
                numOfPairs += end - start;
                end--;
            }
            else
            {
                start++;
            }
        }
        cout<<numOfPairs<<endl;
    }
    
    return 0;
}

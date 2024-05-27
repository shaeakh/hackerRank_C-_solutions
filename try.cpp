#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int>d;
    int x;
    for(int i=0;i<=n-k;i++){
        x = 0;
        for(int j=0;j<k;j++){
            x = max(arr[i+j],x);
        }

        d.push_back(x);
    }
    while (!d.empty())
    {
        int temp = d.front();
        cout<<temp<<" ";
        d.pop_front();
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

#include <iostream>
using namespace std;

int binarySearch(int a[],int x,int low,int high){
	while(low<=high){
		
		int mid=low+(high-low)/2;
		
		if(a[mid]==x){
			return mid;
		}
		if(x>a[mid]){
			low=mid+1;
		}
		else{
			 high=mid-1;
		}
		
		
	}
              	
	return -1;
}

int main() {
int array[]={7,8,9,10,12,13,14,15};
int n= sizeof(array)/sizeof(array[0]);
int x=14;
cout<<n<<endl;

int result=binarySearch(array,x,0,n-1);
cout<<result<<endl;

}


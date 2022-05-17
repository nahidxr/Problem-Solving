#include <iostream>
using namespace std;

int main() {

  int numbers[5];
  int temp[5];
  int sum=9;
  int i=0;
  int j=0;
  

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
    temp[i]=numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << temp[n] << "  ";
  }
  
  
  for(int i=0; i<5; i++){
  	for(int j=0;j<5;j++){
  		
  		if(numbers[i]+temp[j]==sum){
  			
  			cout<<"i:"<<i<<endl;
			cout<<"J"<<j<<endl;	
			return 0;
 			
		  }
		 
  
  }
//  	cout<<"resultaaa"<<i<<endl;
//	cout<<"resultbbb"<<j<<endl;	
//  		
}


 
}

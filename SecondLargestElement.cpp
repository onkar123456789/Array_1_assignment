// Q.2) Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter array element :";
  cin>>n;
  int arr[n];
  for(int i=0; i<=n-1; i++){
      cout<<"enter element :";
     cin>>arr[i];

  }

  int max=INT_MIN;
  int smax=INT_MIN;
  for(int i=0; i<=n-1; i++){
     if(max<arr[i]){
         smax=max;
         max=arr[i];
           
     }
     else if(smax<arr[i] && max!=arr[i]){
         
         smax=arr[i];
     }
  }
  
  if(smax==INT_MIN){
      
      cout<<"no second gretest element is present :"<<endl;
  }
 else{
     cout<<smax;
 }
   
}
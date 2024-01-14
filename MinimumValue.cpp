// Q.3) Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"Enter no of elements in array :";
   cin>>n;
   int arr[n];

   for(int i=0; i<=n-1; i++){
      cout<<"enter element :"<<endl;
      cin>>arr[i];

   }
   int min=INT_MAX;
   for(int i=0; i<=n-1; i++){
       if(min>arr[i]){

        min=arr[i];
       }
   }

   cout<<"Minimum number is :"<<min;

   return 0;
  
}
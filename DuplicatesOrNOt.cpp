// Q.4) Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter array element :";
  cin>>n;
   int arr[n];
  for(int i=0; i<=n-1; i++){
     cout<<"Enter element :"<<endl;
     cin>>arr[i];

  }      

   //int count=0;
   bool flag=false;
   for(int i=0; i<=n-1; i++){
       for(int j=i+1; j<=n-1; j++){
           if(arr[i]==arr[j]){
            flag=true;       
           
       }

   }

}

if(flag==true){
    cout<<"duplicate is present :";
}
else cout<<"not presnt :";
}
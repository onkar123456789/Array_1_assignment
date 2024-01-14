// Q.1) Calculate the product of all the elements in the given array.

#include<iostream>
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

   int product=1;
   for(int i=0; i<=n-1; i++){
      product=product*arr[i];
   }

   cout<<"product is :"<<product;

}
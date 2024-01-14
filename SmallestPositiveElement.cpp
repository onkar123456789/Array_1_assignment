//Q.5) WAP to find the smallest missing positive element in the sorted Array that contains only
//positive elements.

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
         cout<<"enter element :";
         cin>>arr[i];
    }          //-8,-6,0,1,3,4,5
    
  bool flag=false;
  int x=1;
  for(int i=0; i<=n-1; i++){
      if(arr[i]<=0) continue;
      
      if(x!=arr[i]){
          cout<<"Smallest mising positive element is present :"<<endl;
          cout<<x;
          flag=true;
          break;
      }
      else x++;
      
  }
  
  if(flag==false){
      cout<<"smallest mising positive element is not present ";
  }
    return 0;
}


//  bool flag=false;
//   for(int i=0; i<n-1; i++){
//       if(arr[i]!=i+1){
//           flag=true;
//           cout<<i+1<<endl;
//           break;
//       }
//   }
  
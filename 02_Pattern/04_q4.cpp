/* implement */
//    * 
//    * * 
//    * * *  
//    * * * * 

#include <iostream>

using namespace std;

int main() {
   int n;
   cin>>n;

   int i=1;
   int j;
   int count=1;
   while(i<=n){
       j=1;
       while(j<=i){
           cout<<"*"<<" ";
           j++;
       }
       cout<<endl;
       i++;
   }
}
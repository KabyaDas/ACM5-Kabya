#include <iostream>
using namespace std;

int main() 
{
    int t,n,first,last,count,sum,i;
    cin>>t;
    while(t--){
    cin>>n;
    count=n;
   do{
       first=n%10;
       n=n/10;
   }while(n!=0);

    for(i=0;i<1;i++){
        last=count%10;
    }
    sum=first+last;
    cout<<sum<<endl;
    }
    return 0;
}
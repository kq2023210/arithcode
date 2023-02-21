#include <iostream>
using namespace std;
//´©Ô½É³Ä® 
int cross_desert( )
{ int dis,k,oil;
  dis=500;k=1;oil=500;
  do{
   cout<<"storepoint "<<k<<" distance "<<1000-dis<<" oilquantity "<<oil<<endl;
   k=k+1;
   dis=dis+500/(2*k-1);
   oil= 500*k;
   cout<<"k:"<<k<<" dis:"<<dis<<endl;
   }while ( dis<1000);
   dis=dis-500/(2*k-1);
    cout<<"k:"<<k-1<<" dis:"<<dis<<endl;
   oil=500*(k-1)+(1000-dis)*( 2*k-1);
cout<<"storepoint "<<k<<" distance "<<0<<" oilquantity "<<oil;
cout<<endl;
 }


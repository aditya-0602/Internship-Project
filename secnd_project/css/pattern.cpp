#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter value of n: ";
    cin>>n;
    int i=1;
    //int a=n;
    int b=n;
    while (i<=n)
    {

        int j=i;
        int count=1;
        while(j<=n){
          cout<<count;
          count++;
          j++;
        }
        int c=n-b;
        while(c>0){
          cout<<"*";
          c--;
        }
        b--;

        int d=i-1;
        while(d>0){
          cout<<"*";
          d--;
        }

        //int space= 2*i-2;
        //while(space){
          //  cout<<" ";
            //space--;
        //}
        int a=n-i+1;
        while(a>=1){
          cout<<a;
          a--;
        }
        cout<<endl;
        i++;
     }

     return 0;
}

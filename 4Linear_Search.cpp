#include<iostream>

using namespace std;

int main(){

     int arr[5]={20,10,60,2,11};

     int x;

     cout<<"Search the number: ";
     cin>>x;

     int found=-1;

      for( int i=0;i<5;i++)
      {
        if(x==arr[i])
        {
            found=i;
            break;

        }

      }

       if(found != -1)
       {
        cout<<x <<"Value found:"<<found<<endl;
       }

     else{
        cout<<"Value Not found";

     }


    return 0;
}


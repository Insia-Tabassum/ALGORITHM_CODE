#include<iostream>
using namespace std;

int main(){

    int arr[6]={15, 10,5,70,50,90};

    int maximum= arr[0];
    for (int i=1;i<6; i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }


    }

    cout<<"Show the largest number : "<<maximum<<endl;


    return 0;
}

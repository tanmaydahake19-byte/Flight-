#include<iostream>
using namespace std;
void main()
{
    int A[]={345,453,867, 234,567,890},Flight_no,flag=0;
    cout<<"The flights are: ";
    for(int i=0; i<6; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\nEnter the flight number to be searched: ";
    cin>>Flight_no;

    for(int i=0;i<6;i++)
    {
        if(A[i]==Flight_no)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Flight "<<Flight_no<<" found."<<endl;
    else
        cout<<"Flight "<<Flight_no<<" not found."<<endl;

}
   
      
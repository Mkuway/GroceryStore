//author: Mathew G. Kuway
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string Itemname;
do
{
  
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
    if(input == 'a' || input == 'A')
    {
    cout<<"What is the item?"<<endl;
    cin>> Itemname;
    
    if(numItems<5)
    {
    list[numItems]=Itemname;
            numItems++;
    }
    else if(numItems == 5)
    {
            cout<<"You'll need a bigger list!"<<endl;

    }
    }
}while(input != 'q' && input != 'Q');
    cout<<"n==ITEMS TO BUY=="<<endl;
 for(int index = 0; index < 5; index++)
    {
            cout<<index + 1<<" "<<list[index]<<endl;
    }
  
return 0;
}

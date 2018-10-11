//author: Mathew G. Kuway
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        // string list[5]; //array of 5 strings
        vector<string> list;
        int numItems = 0;
        char input;
        string Itemname;
        do
        {

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
               if(list.size()>0)
               {
                    cout<<"\n (D)elete last item";
               }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;

                        if(input == 'a' || input == 'A')
                        {
                                cout<<"What is the item?"<<endl;
                                cin>> Itemname;

                                if(numItems >= 0)
                                {
                                        // list[numItems]=Itemname;
                                        list.push_back(Itemname);     
                                        numItems++;
                                }
                        }
                                 if(input == 'D' || input == 'd')
                                        {
                                         do
                                         {
                                           cout<<list[list.size()-1]<<" was deleted from the list.\n";
                                          list.pop_back();
                                        }while(list.size() != 0);
                                         }

                                /*  else if(numItems == 5)
                                    {
                                    cout<<"You'll need a bigger list!"<<endl;

                                    }*/

        }while(input != 'q' && input != 'Q');
        if(numItems == 0)
        {
                cout<<"No items to buy!"<<endl;
        }
        else
        {
                cout<<"==ITEMS TO BUY=="<<endl;
                for(int index = 0; index<list.size(); index++)
                {
                        cout<<index + 1<<" "<<list[index]<<endl;
                }
        }
        return 0;

}


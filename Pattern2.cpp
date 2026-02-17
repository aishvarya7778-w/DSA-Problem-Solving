#include <iostream>
using namespace std;
int main()
{
    int row, col;
    

    //1
    cout<<"pattern1"<<endl;
    for(row = 1; row<=5; row++){

        for(col=1; col<=5-row; col++){
            cout<<" ";
        }
        for(col=1;col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

//2
 cout<<"pattern2"<<endl;
  for(row=1; row<=5; row++)
  {
    for(col=1; col<=5-row; col++)
    {
        cout<<" ";
    }
    for(col=1; col<=row; col++)
    {
        cout<<row;
    }
    cout<<endl;
  }

    //3
     cout<<"pattern3"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col=1;col<=5-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<col;
        }
        cout<<endl;
    }

    //4
     cout<<"pattern4"<<endl;
    for(row=1; row<=5; row++){
        for(col=1; col<=5-row; col++)
        {
            cout<<" ";
        }
        for(char name = 'A'; name<='A'+row-1; name++)
        {
            cout<<name;
        }
        cout<<endl;
    }

    //5
     cout<<"pattern5"<<endl;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            cout<<" ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<col;
        }
        cout<<endl;
    }
}


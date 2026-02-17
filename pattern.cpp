#include <iostream>
using namespace std;
int main()
{
    int row, col;
//1
cout<<"pattern1"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col = 1; col<=5; col = col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
//2
cout<<"pattern2"<<endl;
    for(row = 1; row<=5; row= row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<<10<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//3
cout<<"pattern3"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//4
cout<<"pattern4"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//5
cout<<"pattern5"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=5; col>=1; col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//6
cout<<"pattern6"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//7
cout<<"pattern7"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//8
cout<<"pattern8"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            char name = 'a'+(row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//9
cout<<"pattern9"<<endl;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            char name = 'a'+(col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //or we can write in other way

    for(row = 1; row<=5; row=row+1)
    {
        for(char col='a'; col<='e'; col=col+1)
        {
            
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

//10
cout<<"pattern10"<<endl;
    int count=1;
    for(row = 1; row<=5; row=row+1)
    {
        for(col=1; col<=5; col=col+1)
        {
            cout<<count<<" ";
            count = count+1;
        }
        cout<<endl;
    }
    cout<<endl;
//11
cout<<"pattern11"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
//12
cout<<"pattern12"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//13
cout<<"pattern13"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//14
cout<<"pattern14"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//15
cout<<"pattern15"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 1; col<=row; col++)
        {
            char name = 'a'+row-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//16
cout<<"pattern16"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col =1; col<=5-(row-1); col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
//or another way for it
    for(row = 5; row>=1; row--)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
//17
cout<<"pattern17"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 1; col<=5-(row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
// or another way
    for(row = 5; row>=1; row--)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
//18
cout<<"pattern18"<<endl;
    for(row = 1; row<=5; row++)
    {
        for(col = 5; col>=5-(row-1); col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}



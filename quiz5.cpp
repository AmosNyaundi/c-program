QUESTION 5.

#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class Sales
{
public:
    char name[5];
    int mySales[5];
    int totalSale;
};

Sales mSale, mSale1, mSale2, mSale3, mSale4;
Sales saleStore [5] = {mSale, mSale1, mSale2, mSale3, mSale4};

int main()
{
    cout<<"Group 9 company Sales distribution"<<endl;
    cout<<"\nEnter the names of the 5 salesmen :"<<endl;
    for(int count=0; count<5; count++)
    {
        cout<<"Salesman "<<count+1<<"- ";
        cin>>saleStore[count].name;
    }

    int c = 0;
    cout<<"\n\nEnter the sales made by each salesman: "<<endl;
    for(int rel = 0; rel < 5; rel++)
    {
        cout<<saleStore[rel].name<<"\n!!!!!!!!\n"<<endl;

        for(int s=0; s<5; s++)
        {
            cout<<"Sale "<< s+1<<": ";
            cin>>saleStore[c].mySales[s];
            saleStore[c].totalSale += saleStore[c].mySales[s];
        }
        c++;
    }
    system("cls");

    cout<<"The sales are:"<<endl;
    cout<<"NAME\t";

    for(int i=0; i<5; i++)
    {
        cout<<" Item"<< i+1<<"\t" ;
    }

    cout<<" TotalSale"<<endl;

    for(int i=0; i<58; i++)
    {
        cout<<"-";
    }

    cout<<endl;

    int d=0, grandTotal=0;
    for(int g=0; g<5; g++)
    {
        cout<<saleStore[g].name<<"\t|";
        for(int l=0; l<5; l++)
        {
            cout<<" "<<saleStore[d].mySales[l]<<"\t";
        }
        cout<<" "<<saleStore[d].totalSale;

        d++;
        grandTotal += saleStore[g].totalSale;

        cout<<endl;
    }
    cout<<"\nGrand Total:"<<grandTotal<<endl;


    return 0;
}


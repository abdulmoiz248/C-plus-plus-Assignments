#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"******************************************"<<endl;
    cout<<"***"<<setw(30)<<"Programming Fundamentals"<<setw(9)<<"***"<<endl;         //********************
    cout<<"***"<<setw(26)<<"Assignment no.2"<<setw(13)<<"***"<<endl;                //*** Introduction ***
    cout<<"***"<<setw(24)<<"FA22-BCS-040"<<setw(15)<<"***"<<endl;                    //********************
    cout<<"***"<<setw(23)<<"ABDUL MOIZ"<<setw(16)<<"***"<<endl;
    cout<<"******************************************"<<endl;
    cout<<endl;
    int question_no;
    cout<<"Enter the Question Number you want to run"<<endl;                         //asking which question u want to run
    cout<<"Q.";
    cin>>question_no;
    cout<<endl;
    if(question_no==1)
    {
    cout<<"The Output is:"<<endl;                                //Question 1 Answer
    cout<<endl;
        for(int i=1;i<10;i+=2)                                   //outer loop for no. of rows
        {
            for(int j=8;j>=i;j-=2)                               //loop for spaces
                cout<<" ";
            for(int k=1;k<=i;k++)                               //loop for printing number
                cout<<i;
                cout<<endl;
        }
    }
    else if(question_no==2)                                     //Question 2
    {
    double call_rec,total_bill,bill;                          //declaring variables
    cout<<endl;
    cout<<setfill('-')<<setw(36)<<"-"<<endl;
    cout<<setfill(' ');
    cout<<"-"<<setw(30)<<"To exit Program Enter Zero"<<setw(5)<<"-"<<endl;
    cout<<setfill('-')<<setw(36)<<"-"<<endl;
    cout<<endl;
    cout<<fixed;
   cout<<setprecision(2);                                       //setting decimal upto 2 places
    total_bill=0;
    do{
    cout<<"Enter call record: ";
    cin>>call_rec;
    if(call_rec>0)                                            //if for checking that record entered is valid or not
    {
    if(call_rec<101)                                          //calculating bill according to conditions
    {
     bill=500;
     cout<<"Bill= Rs."<<right<<bill<<endl;
     total_bill+=bill;
    }
    else if(call_rec<151)
    {
    call_rec-=100;
    bill=500+call_rec*2.50;
    cout<<"Bill= Rs."<<right<<bill<<endl;
    total_bill+=bill;
    }
    else if(call_rec<201)
    {
    call_rec-=150;
    bill=500+50*2.50+call_rec*1.50;
    cout<<"Bill= Rs."<<right<<bill<<endl;
    total_bill+=bill;
    }
    else
    {
    call_rec-=200;
    bill=500+50*2.50+50*1.50+call_rec*1.00;
    cout<<"Bill= Rs."<<right<<bill<<endl;
    total_bill+=bill;
    }

    }//if of checking end
    else if(call_rec==0) cout<<endl;
    else cout<<"Invalid Call Record..!!"<<endl;

    }while(call_rec!=0);                                        //loop for continuously repeating loop until zero is entered
    cout<<setfill('-')<<setw(27)<<"-"<<endl;
    cout<<setfill(' ');
    cout<<"->"<<setw(17)<<"Total Bill= Rs."<<right<<total_bill<<endl;                //output the total bill
    cout<<setfill('-')<<setw(27)<<"-"<<endl;
    }
    else cout<<"Enter Valid Question Number"<<endl;
    return 0;
}

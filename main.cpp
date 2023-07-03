 #include <iostream>
#include<iomanip>
using namespace std;


struct record        //STRUCUTURE
{
    string name;
    int id;
    double bill;
};
record records[15];      //ARRAY OF TYRE RECORD
void intro();
void input(int no);
void id(int ID);
void name(string NAME);      //FUNCTION PROTOYPES
void output(int x);
int selection();
void id_check(int ID,int no);
int main()
{
    intro();
    string in;
    int x=0;
    while(in!="NO" && in!="no")      //REPEATING LOOP UNTILL USER ENTER NO
    {
        input(x);       //CALLING INPUT FUNCTION
        cin.ignore();
        cout<<"Enter yes to Enter Data for Another Customer else NO: ";
        cin>>in;            //ASKING IF HE WANTS TO ADD DATA FOR ANOTHER STUDENT
        cin.ignore();
            x++;
          if(x>9)          //IF ALTERATION EXCEEDS LIMIT BREAK THE LOOP AND WARN USER
        {
         cout<<endl;
         cout<<setw(50)<<"-------------------------------"<<endl;
         cout<<setw(50)<<"|   Error Limit Exceed...!!   |"<<endl;
         cout<<setw(50)<<"-------------------------------"<<endl;
         break;
        }
    }
int ext;
while(ext=selection())         // EXTENSION FUNCTION CALL
{
 if(ext==1)
 {
   int ID;
   cout<<"Enter Id you want to Search: ";     //TAKING ID WHAT USER WANTS TO SEARCH
   cin>>ID;
   id(ID); //ID FUNCTION CALL
 }
 else if(ext==2)
 {
   string NAME;
   cin.ignore();
   cout<<"Enter Name you want to Search: ";
   getline(cin,NAME);            //GETTING NAME USER WANT TO SEARCH
   name(NAME); //NAME FUNCTION CALL
 }
 else if (ext==3)
 {
  output(x);        //OUTPUT FUNCTION CALL
 }
 else
 {
     cout<<"Invalid Enter Again..!!"<<endl;
 }
}

 return 0;
}
void input(int no)   //INPUT FUNCTION
{

    cout<<endl;
    cout<<"Enter Reocrd for Customer Number "<<no+1<<" :"<<endl;
    cout<<" -> Enter Name: ";        //GETTING NAME
    getline(cin,records[no].name);
    cout<<" -> Enter ID: ";    //GETTING ID
    int ID;
    id_check(ID,no);     //ID CHECK FUNCTION
    cout<<" -> Enter Bill: ";   //TAKING BILL
    cin>>records[no].bill;
}
void intro()
{
    cout<<"******************************************"<<endl;
    cout<<"***"<<setw(30)<<"Programming Fundamentals"<<setw(9)<<"***"<<endl;         //********************
    cout<<"***"<<setw(26)<<"Assignment no.4"<<setw(13)<<"***"<<endl;                //*** Introduction ***
    cout<<"***"<<setw(24)<<"FA22-BCS-040"<<setw(15)<<"***"<<endl;                    //********************
    cout<<"***"<<setw(23)<<"ABDUL MOIZ"<<setw(16)<<"***"<<endl;
    cout<<"******************************************"<<endl;
    cout<<endl;
}
int selection()   //SELECTION FUNCTION
{
    cout<<endl;
    cout<<"Select What u want to do :"<<endl;
    cout<<"1 for searching by ID"<<endl;
    cout<<"2 for searching by Name"<<endl;
    cout<<"3 for displaying all current data"<<endl;
    int extension;
    cout<<"Your Extension#";
    cin>>extension;
    cout<<endl;
    return extension;
}
void id_check(int ID,int no)
{
     label:cin>>ID;        //TAKING ID
   int check=1;
    for(int j=0;j<10;j++)        //CHECKING IF THE ID ALREADY DOESNT EXIST
    {
        if(ID == records[j].id)
            check++;
    }
    if(check==1)
        records[no].id=ID;
    else
    {
        cout<<" -> ID already Exist Enter Again: ";
        goto label;
    }
}
void id(int ID)     //ID FINDER FUNCTION
{
    for(int i=0;i<10;i++)      //FINDING ID
    {
        if(records[i].id==ID)
        {
            cout<<"Customer Found...!!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"Name: ";
            cout<<records[i].name<<endl;
             cout<<"ID: ";           //OUTPUTING IF THE ID IS FOUND
            cout<<records[i].id<<endl;
             cout<<"Bill: ";
            cout<<records[i].bill<<endl;
            cout<<"--------------------"<<endl;
            return;
        }

    }
     cout<<"No Customer found with ID "<<ID<<" ...!!"<<endl;
}
void name(string NAME)    //NAME FINDER FUNCTION
{
    for(int i=0;i<10;i++)
    {
        if(records[i].name==NAME)   //CHECKING IF NAME EXIST OR NOT
        {
            cout<<"Customer Found...!!"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"Name: ";
            cout<<records[i].name<<endl;
             cout<<"ID: ";
            cout<<records[i].id<<endl;
             cout<<"Bill: ";
            cout<<records[i].bill<<endl;
            cout<<"--------------------"<<endl;
            return;
        }
    }
     cout<<"No Customer found with Name: "<<NAME<<" ...!!"<<endl;
}
void output(int x) //OUTPUT FUNCTION
{
  cout<<endl;
    for(int i=0;i<x;i++)     //OUTPUTING ALL THE ANSWERS
    {

            cout<<"ID: ";
            cout<<setw(2)<<left<<records[i].id;
            cout<<"   "<<"Name: ";
            cout<<left<<records[i].name;
            cout<<"   "<<"Bill: ";
            cout<<setw(4)<<left<<records[i].bill;
            cout<<endl;
    }

}

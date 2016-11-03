//****************HEADER FILES USED****************

#include<iostream>
#include<stdio.h>
#include<fstream>
#include<process.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//****************Global variable USED****************

using namespace std;
int citno=24,trano=5,busno=5,plano=6; //GLOBAL VARIABLES

//****************Classes USED****************

class city 							//CLASS FOR CITY INFORMATION
{
     public:
     char name[20];
     int log;
     int lati;
     char type;
     city(char n[],int lo,int lt,char ty)
     {
         strcpy(name,n);
         log=lo;
         lati=lt;
         type=ty;
     }
     city()
     {
         strcpy(name,"NULL");
         log=0;
         lati=0;
         type='\0';
     }
};

city x[50]={ city("New Delhi",28,77,'b'),city("Sri Nagar",34,74,'d'), city("Jaipur",27,75,'d'),            city("Ahemdabad",23,73,'d'),city("Mumbai",19,73,'d') , city("Banglore",13,78,'d'), city("Chennai",13,80,'d'),city("Surat",21,73,'d'),city("Agra",27,78,'d'),city("Patna",26,85,'d') , city("Kolkata",23,88,'d'),city("Guwahati",26,92,'d'),city("Rio De Janerio",-23,-43,'i'), city("Singapore",1,104,'i'), city("Beijing",40,116,'i') , city("Tokyo",35,140,'i'), city("Sydney",-33,151,'i'), city("Dubai",25,55,'i'), city("Berlin",52,13,'i'),city ("Hong Kong",22,114,'i') , city("Paris",48,2,'i'), city("London",51,0,'i'), city("New York",40,-74,'i')   };

class trains							//CLASS FOR TRAIN INFORMATION
{
     public:
     char name[20];
     long int no;
     float rate;
     int seats;
     trains(char n[],long int num,float r,int s)
     {
         strcpy(name,n);
         no=num;
         rate=r;
         seats=s;
     }

     trains()
     {
         strcpy(name,"NULL");
         no=0;
         rate=0;
         seats=0;
     }

     void showdet()
     {
        cout<<name<<":-"<<no<<"    ||  Available seats: "<<seats;
     }
};

trains train[15]={trains("INTERCITY EXP" ,12416,1,100),trains("SWATANTRTA EXP ",12562,1.05,100),                                                                                                                                                     	                trains("SWARAJ EXPRESS",12471,1.1,120),trains("AVANTIKA EXP",12961,1,125),                                		 trains("RAJDHANI EXP",12952,0.9,200)};

class buses							//CLASS FOR BUS INFORMATION
{
     public:
     char name[20];
     long int no;
     float rate;
     int seats;

     buses(char n[],long int num,float r,int s)
     {
         strcpy(name,n);
         no=num;
         rate=r;
         seats=s;
     }

     buses()
     {
         strcpy(name,"NULL");
         no=0;
         rate=0;
         seats=0;
     }

     void showdet()
     {
        cout<<name<<":-"<<no<<"    ||  Available seats: "<<seats;
     }
};

buses bus[15]={buses("SRS travel",67536,1.5,15), buses("National travel",64596,1.55,10),  buses("VRL travel",61254,1.75,25), buses("Seabird tourist",67254,1.5,8),                                                         buses("RR travels",67854,1.25,20)};

class planes                                                                                                //CLASS FOR PLANE INFORMATION
{
     public:
     char name[20];
     long int no;
     float rate;
     int seats;

     planes(char n[],long int num,float r,int s)
     {
         strcpy(name,n);
         no=num;
         rate=r;
         seats=s;
     }

     planes()
     {
         strcpy(name,"NULL");
         no=0;
         rate=0;
         seats=0;
     }
     void showdet()
     {
        cout<<name<<":-"<<no<<"    ||  Available seats: "<<seats;
     }
};

planes plane[15]={planes("Qatar Airways",75369,3,50),planes("Jet Airways ",74596,3.5,55), planes("Lufthanza Airways",71254,3.35,60), planes("Spice Airways",74254,3.25,40),
 planes("Indigo Airlines",75854,3.65,40), planes("Air Deccan",78354,2.95,50)};

void add_city()							//FUNCTION FOR ADDING NEW CITY
{
    system("cls");
    cout<<"\n\t\tADDING NEW CITY:\n";
    cout<<"\nEnter city name:";
    getchar();
    gets(x[citno].name);
    cout<<"\n\nEnter longitude of city:";
    cin>>x[citno].log;
    cout<<"\n\nEnter latitude of city:";
    cin>>x[citno].lati;
    cout<<"\n\nEnter city type(International-i,Domestic-d,Both-b):";
    cin>>x[citno].type;
    citno++;
}
void add_train()						//FUNCTION FOR ADDING NEW TRAIN
{
    system("cls");
    cout<<"\n\t\tADDING NEW TRAIN:\n";
    cout<<"\nEnter train name:";
    getchar();
    gets(train[trano].name);
    cout<<"\n\nEnter train number:";
    cin>>train[trano].no;
    cout<<"\n\nEnter train's rate:";
    cin>>train[trano].rate;
    cout<<"\n\nEnter no of seats in train:";
    cin>>train[trano].seats;
    trano++;
}

void add_bus()						//FUNCTION FOR ADDING NEW BUS
{
    system("cls");
    cout<<"\n\t\tADDING NEW BUS:\n";
    cout<<"\nEnter bus name:";
    getchar();
    gets(bus[busno].name);
    cout<<"\n\nEnter bus number:";
    cin>>bus[busno].no;
    cout<<"\n\nEnter bus's rate:" ;
    cin>>bus[busno].rate;
    cout<<"\n\nEnter no of seats in bus:" ;
    cin>>bus[busno].seats;
    busno++;
}



void add_plane()					//FUNCTION FOR ADDING NEW PLANE
{
    system("cls");
    cout<<"\n\t\tADDING NEW PLANE:\n";
    cout<<"\nEnter plane name:";
    getchar();
    gets(plane[plano].name);
    cout<<"\n\nEnter plane number:";
    cin>>plane[plano].no;
    cout<<"\n\nEnter plane's rate:" ;
    cin>>plane[plano].rate;
    cout<<"\n\nEnter no of seats in plane:" ;
    cin>>plane[plano].seats;
    plano++;
}


class ticket				     				//CLASS FOR TICKET
{
     private:
            char name[20];
            char mode_name[10];
            char from[10];
            char to[10];
            char dep_date[10];
            float distance;
            int adult;
            int child;
            char vehi_nm[20];
            long int vehi_no;
            long int phone_no;
            float total_amt;
            city depar;
            city destin;
     public:
          int app_no=100;
          long int ret_phon()
          {
                return phone_no;
          }

         float ret_amt()
         {
            return total_amt;
         }
          void make_ticket();
          void display();
          void get_city();
          void trainfo();
          void busfo();
          void planeinfo();
          void cancellation();
}t1;
//       *********************FUNCTIONS USED*********************

          void ticket::make_ticket()
          {
                system("cls");
                 cout<<"\n\t-----------------------------------------------------------------";
                cout<<"\n\t|                                                                                                                  |";
                cout<<"\n\t|         WELCOME TO PARADISE TOURS & TRAVELS PVT. LTD.         |" << endl;
                 cout<<"\n\t-----------------------------------------------------------------";

                cout<<"\nPLEASE PROVIDE US FOLLOWING DETAILS: ";

                cout<<"\n\nName :-";
                getchar();
                gets(name);
                cout<<"\n\nPhone number:-";
                cin>>phone_no;
                cout<<"\n\nDate of Departure(dd/mm/yyyy):- ";
                getchar();
                gets(dep_date);
                app_no++;
                get_city();
          }
          void ticket::display()
          {
                system("cls");
                cout<<"\nTHIS IS YOUR TICKET\n\n";
                cout<<"\n******************************************************************";
                cout<<"\n*  Applicant Number: "<<app_no;
                cout<<"\n*  Name: "<<name;
                cout<<"\n*  Phone Number: "<<phone_no;
                cout<<"\n*  Journey: "<<depar.name<<" - "<<destin.name;
                cout<<"\n*  Date OF Departure: "<<dep_date;
                cout<<"\n*  Mode of transport: "<<mode_name;
                cout<<"\n*  You Will Travel By: "<<vehi_nm<<"||Vehical Number.- "<<vehi_no;
                cout<<"\n*  Total Seats=> Adults "<<adult;
                cout<<"\n*                Child  "<<child;
                cout<<"\n*  Total Amount To Be Paid: "<<total_amt;
                cout<<"\n*******************************************************************\n";
                system("pause");

          }

          void ticket::get_city()
          {
                int no1,no2;
                lb1:
                system("cls");
                cout<<"\n\t-----------------------------------------------------------------";
                cout<<"\n\t|                                                                                                                  |";
                cout<<"\n\t|         WELCOME TO PARADISE TOURS & TRAVELS PVT. LTD.         |" << endl;
                cout<<"\n\t-----------------------------------------------------------------";

                cout<<"\n\nThis is the list of cities where we provide our services";
                cout<<"\n\nDomestic :-";
                for(int i=0;i<=citno;i++)
                {
                    if(x[i].type=='d'||x[i].type=='b')
                        cout<<"\n\n"<<i+1<<") "<<x[i].name;
                }

                cout<<"\n\n\nInternational :-";
                for(int i=0;i<=citno;i++)
                {
                    if(x[i].type=='i'||x[i].type=='b')
                        cout<<"\n\n"<<i+1<<") "<<x[i].name;
                }
                cout<<endl;

                system("pause");
                cout<<"\n\nEnter Departure city Number:";
                cin>>no1;

                cout<<"\n\nEnter Destination city  Number:";
                cin>>no2;

                depar=x[no1-1];
                destin=x[no2-1];

                distance=sqrt(pow((depar.lati-destin.lati),2)+pow((depar.log-destin.log),2))*110;

                if((x[no1-1].type!=x[no2-1].type)&&(x[no1-1].type!='b')&&(x[no2-1].type!='b'))
                {
                    cout<<"\n\nINVALID INPUT!!!\nPLEASE ENTER AGAIN";
                    system("pause");
                    goto lb1;

                }

if ((( x[no1-1].type=='d') || (x[no1-1].type=='b')) && ((x[no2-1].type=='d') || (x[no2-                1].type=='b' )))
                {
                     lb2:
                     int no3;
                     system("cls");
                     cout<<"\n\t--------------------------------------------------------------------------------------";
                     cout<<"\n\t|                                                                                                                  |";
                     cout<<"\n\t|         WELCOME TO PARADISE TOURS & TRAVELS PVT. LTD.         |" << endl;
                     cout<<"\n\t--------------------------------------------------------------------------------------";
                     cout<<"\nYou have chosen domestic travel";
                     cout<<"\n\nTravel modes available are :-";
                     cout<<"\n\n1.Railways";
                     cout<<"\n\n2.Bus service";
                     cout<<"\n\n3.Airways";
                     cout<<"\n\nYour Choice:";
                     cin>>no3;
                     if(no3==1)
                     {
                          strcpy(mode_name,"Railways");
                          trainfo();
                     }
                     if(no3==2)
                     {
                          strcpy(mode_name,"Bus service");
                          busfo();
                     }
                     if(no3==3)
                     {
                          strcpy(mode_name,"Airways");
                          planeinfo();
                     }
                     if((no3!=1)&&(no3!=2)&&(no3!=3))
                     {
                          cout<<"\n\nINVALID INPUT!!!\nPLEASE ENTER AGAIN";
                          system("pause");
                          goto lb2;
                     }
                }

                else if(((x[no1-1].type=='i')&&(x[no2-1].type=='i'))||((x[no2-1].type=='b')&&(x[no1-1].type=='i'))
                                                                    ||((x[no1-1].type=='b')&&(x[no2-1].type=='i')))
                {
                     system("cls");
                     cout<<"\n\nYou have chosen International travel";
                     cout<<"\n\nThe only travel mode available is Airways";
                     strcpy(mode_name,"Airways");
                     planeinfo();
                }

          }



          void ticket::trainfo()
          {
                int ch,ch1;
                system("cls");
                cout<<"\nEnter number of adults: ";
                cin>>adult;
                cout<<"\nEnter number of children: ";
                cin>>child;
                p:
                cout<<"\nIN WHICH TRAIN WOULD YOU LIKE TO TRAVEL: ";
                for(int i=0;i<trano;i++)
                {
                        cout<<endl<<i+1<<")"<<train[i].name<<"    ||  Available seats: "<<train[i].seats;
                }
                cout<<"\n\nYour choice:";
                cin>>ch;
                strcpy(vehi_nm,train[ch-1].name);

                if(child+adult>=train[ch-1].seats)
                {
 cout<<"\n REQUIRED NUMBER OF SEATS NOT AVAILABLE PLEASE CHOOSE ANOTHER     TRAIN.";
                     system("pause");
                     goto p;
                }

                q:
                cout<<"\nChoose your type of convenience: ";
                cout<<"\n\n1)One tier A.C.";
                cout<<"\n2)two tier A.C.";
                cout<<"\n3)three tier A.C.";
                cout<<"\n4)Sleeper";
                cout<<"\n5)Chair Car";
                cout<<"\n6)General";
                cout<<"\n\nYour choice:";
                cin>>ch1;

                vehi_no=train[ch-1].no;
                train[ch-1].seats-=(adult+child);

                if(ch1==1)
                     total_amt=(train[ch-1].rate*2*distance)*(adult+(0.75*child))+1500;

                else if(ch1==2)
                     total_amt=(train[ch-1].rate*1.75*distance)*(adult+(0.75*child))+1500;

                else if(ch1==3)
                     total_amt=(train[ch-1].rate*1.5*distance)*(adult+(0.75*child))+1500;

                else if(ch1==4)
                     total_amt=(train[ch-1].rate*1.25*distance)*(adult+(0.75*child))+1500;

                else if(ch1==5)
                     total_amt=(train[ch-1].rate*1*distance)*(adult+(0.75*child))+1500;

                else if(ch1==6)
                     total_amt=(train[ch-1].rate*1*distance)*(adult+(0.75*child))+1500;
                else
                {
                     cout<<"\nPlease enter valid choice.\n";
                     system("pause");
                     goto q;
                }
          }

          void ticket::busfo()
          {
                int ch,ch1;
                system("cls");
                cout<<"\nEnter number of adults: ";
                cin>>adult;
                cout<<"\nEnter number of children: ";
                cin>>child;
                p:
                cout<<"\nIN WHICH BUS WOULD YOU LIKE TO TRAVEL:";
                for(int i=0;i<busno;i++)
                {
                        cout<<endl<<i+1<<")"<<bus[i].name<<"    ||  Available seats: "<<bus[i].seats;
                }
                cout<<"\nYour choice:";
                cin>>ch;
                strcpy(vehi_nm,bus[ch-1].name);
                if(child+adult>=bus[ch-1].seats)
                {
                     cout<<"\n REQUIRED NUMBER OF SEATS NOT AVAILABLE PLEASE CHOOSE ANOTHER BUS.";
                     system("pause");
                     goto p;
                }

                q:
                cout<<"\nChoose your type of convenience: ";
                cout<<"\n\n1)SLEEPER A.C.";
                cout<<"\n2)SLEEPER non A.C.";
                cout<<"\n3)LUXURY";
                cout<<"\n4)MULTI AXLE A.C.";
                cout<<"\n5)GENERAL";
                cout<<"\nYour choice:";
                cin>>ch1;

                vehi_no=bus[ch-1].no;
                bus[ch-1].seats-=(adult+child);

                if(ch1==1)
                     total_amt=(bus[ch-1].rate*1.75*distance)*(adult+(0.75*child))+1500;

                else if(ch1==2)
                     total_amt=(bus[ch-1].rate*1.25*distance)*(adult+(0.75*child))+1500;

                else if(ch1==3)
                     total_amt=(bus[ch-1].rate*1.5*distance)*(adult+(0.75*child))+1500;

                else if(ch1==4)
                     total_amt=(bus[ch-1].rate*2*distance)*(adult+(0.75*child))+1500;

                else if(ch1==5)
                     total_amt=(bus[ch-1].rate*1*distance)*(adult+(0.75*child))+1500;

                else
                {
                     cout<<"\nPLEASE ENTER VALID CHOICE.\n";
                     system("pause");
                     goto q;
                }
          }
          void ticket::planeinfo()
          {
                int ch,ch1;
                system("cls");
                cout<<"\nEnter number of adults: ";
                cin>>adult;
                cout<<"\nEnter number of children: ";
                cin>>child;
                p:
                cout<<"\nIN WHICH PLANE WOULD YOU LIKE TO TRAVEL:";
                for(int i=0;i<plano;i++)
                {
                        cout<<endl<<i+1<<")"<<plane[i].name<<"    ||  Available seats: "<<plane[i].seats;
                }
                cout<<"\nYour choice:";
                cin>>ch;
                strcpy(vehi_nm,plane[ch-1].name);
                if(child+adult>=plane[ch-1].seats)
                {
                     cout<<"\n Required number of seats not available please choose another plane.";
                     system("pause");
                     goto p;
                }

                q:
                cout<<"\nChoose your type of convenience: ";
                cout<<"\n\n1)Business";
                cout<<"\n2)First class";
                cout<<"\n3)Economy";
                cout<<"\nYour choice:";
                cin>>ch1;

                vehi_no=plane[ch-1].no;
                plane[ch-1].seats-=(adult+child);

                if(ch1==1)
                     total_amt=(bus[ch-1].rate*1.75*distance)*(adult+(0.75*child))+1500;

                else if(ch1==2)
                     total_amt=(bus[ch-1].rate*1.25*distance)*(adult+(0.75*child))+1500;

                else if(ch1==3)
                     total_amt=(bus[ch-1].rate*1.5*distance)*(adult+(0.75*child))+1500;

                else
                {
                     cout<<"\nPLEASE ENTER VALID CHOICE.\n";
                     system("pause");
                     goto q;
                }
          }
          void ticket::cancellation()//FUNCTION FOR ADDING SEATS BACK
          {
                if(strcmp(mode_name,"Bus services")==0)
                {
                    for(int i=0;i<busno;i++)
                    {
                         if(strcmp(vehi_nm,bus[i].name)==0)
                                bus[i].seats+=(adult+child);
                    }

                }
                if(strcmp(mode_name,"Railways")==0)
                {
                    for(int i=0;i<trano;i++)
                    {
                         if(strcmp(vehi_nm,train[i].name)==0)
                                train[i].seats+=(adult+child);
                    }
                }
                if(strcmp(mode_name,"Airways")==0)
                {
                    for(int i=0;i<plano;i++)
                    {
                         if(strcmp(vehi_nm,plane[i].name)==0)
                                plane[i].seats+=(adult+child);
                    }
                }
          }



int check_pass(char pass[])
{

    char userpass[15];
    int i,j=1,k,flag=1;
    cout<<"\n\n Please enter the password:-";
    do
    {

            lb:
            userpass[j]=getch();
            if(int(userpass[j])==8)    //for backspace
            {
                system("cls");
                j--;
                cout<<"\n\n PLEASE ENTER ADMIN PASSWORD:-";
                for(k=0;k<(j-1);k++)
                {
                    cout<<"*";
                }
                goto lb;
            }
          if(int(userpass[j])==13)
            {
                break;
            }
            else
            {
                system("cls");
                cout<<"\n\nPLEASE ENTER ADMIN PASSWORD:-";
                for(k=0;k<j;k++)
                {
                    cout<<"*";
                }
            }
            j++;

        }while(int(userpass[j-1])!=13);
        for(i=0;pass[i]!='\0';i++)
        {

            if(userpass[i+1]!=pass[i])
            {
                flag=0;
                break;
            }
        }
        return flag;

}
void del_tic()                                                                                                 //FOR DELETING THE SAID TICKET
{
    ofstream fout;
    ifstream fin;
    int an,flag=0;
    float a;
    a=t1.ret_amt();

    fin.open("ticket_info.dat",ios::in|ios::binary);
    fout.open("temp.dat",ios::app|ios::binary);

    cout<<"\nEnter the application number of the ticket to be deleted.:";
    cin>>an;

    fin.seekg(0);
    while((!fin.eof())&&(fin.read((char*)&t1,sizeof(t1))))
    {
      char ch='y';
      if(an==t1.app_no)
      {
          flag=1;
          t1.display();
          cout<<"\nAre you sure you want to cancel this ticket: ";
          cin>>ch;
          if(ch!='y'||ch!='Y')
          {
                fout.write((char*)&t1,sizeof(t1));
          }

          else
          {
             t1.cancellation();
             cout<<"\n\nTicket successfully cancelled.\nWE HAVE REFUNDED Rs."<<a/2<<" (50%)";

          }
      }
    }
    if(flag==0)
        cout<<"\n\nTICKET NOT FOUND";

    remove("ticket_info.dat");
    rename("temp.dat","ticket_info.dat");
    fin.close();
    fout.close();
}
void veh_det()
{
    lb0:
    int no3,i;
    system("cls");
    cout<"\n\nWHICH MODE DETAILS DO YOU WANT TO SEE:-";
    cout<<"\n\n1.Railways";
    cout<<"\n\n2.Bus service";
    cout<<"\n\n3.Airways";
    cout<<"\n\nYour Choice:";
    cin>>no3;
    if(no3==1)
    {
        for(i=0;i<trano;i++)
        {
            cout<<endl;
            train[i].showdet();
        }

    }
    if(no3==2)
    {
        for(i=0;i<busno;i++)
        {
            cout<<endl;
             bus[i].showdet();
        }
    }
    if(no3==3)
    {
        for(i=0;i<plano;i++)
         {
             cout<<endl;
             plane[i].showdet();
         }
    }
    if((no3!=1)&&(no3!=2)&&(no3!=3))
    {
        cout<<"\n\nINVALID INPUT!!!\nPLEASE ENTER AGAIN";
        system("pause");
        goto lb0;
    }
}

int main()
{
     char ch,c;

     ofstream fout;
     ifstream fin;
     do
     {
          int cho1,cho2,usercho,flag,app_no;
          char pass[15]="iamadmin";
            system("cls");
                 cout<<"\n\t-----------------------------------------------------------------";
                cout<<"\n\t|                                                                                                                  |";
                cout<<"\n\t|         WELCOME TO PARADISE TOURS & TRAVELS PVT. LTD.         |" << endl;
                cout<<"\n\t-----------------------------------------------------------------";
                cout<<"\nPLEASE ENTER YOUR AUTHORITY:- ";

          cout<<"\n 1 . Administrator ";
          cout<<"\n 2 . Customer";
          lb:
          cout<<"\nAUTHORITY:- ";
          cin>>usercho;

          if((usercho!=1)&&(usercho!=2))
          {
                    cout<<"\n\nPLEASE ENTER VALID OPTION";
                    goto lb;
          }
          else if(usercho==1)//ADMIN'S OPTION
          {
                flag=check_pass(pass);
                if(flag==1)
                    cout<<"\nCORRECT PASSWORD!!!\n\nENTRY AUTHORIZED";
                else
                {
                    cout<<"\nINCORRECT PASSWORD!!!\n\nLOG IN FAIL";
                    break;
                }
              do{
                  cout<<endl;
                  system("pause");
                  system("cls");
                  cout<<"\nWHAT DO YOU WANT TO DO?\n";
                  cout<<"\n 1 . Reservation";
                  cout<<"\n 2 . Cancellation";
                  cout<<"\n 3 . View ticket";
                  cout<<"\n 4 . View all booked tickets";
                  cout<<"\n 5 . View details of vehicles";
                  cout<<"\n 6 . Add new city";
                  cout<<"\n 7 . Add new train";
                  cout<<"\n 8 . Add new bus";
                  cout<<"\n 9 . Add new plane";
                  cout<<"\n 10 . Exit";
                  cout<<"\nYOUR CHOICE::";
                  cin>>cho1;
                  switch(cho1)
                  {
                      case 1:
                             {
                                          fin.open("ticket_info.dat",ios::in|ios::binary);
                                          fin.seekg((-1)*sizeof(t1),ios::end);
                                          fin.read((char*)&t1,sizeof(t1));
                                          fin.close();
                                          fout.open("ticket_info.dat",ios::app|ios::binary);
                                          t1.make_ticket();
                                          fout.write((char*)&t1,sizeof(t1));
                                          t1.display();
                                          fout.close();

                                         break;
                             }
                      case 2:
                             {
                                        del_tic();
                                         break;
                             }
                      case 3:
                             {

                                          int an,flag=0;
                                          cout<<"\n Enter The Applicant Number Of The Ticket you want to view: ";
                                          cin>>an;

                                          fin.open("ticket_info.dat",ios::in|ios::binary);
                                          fin.seekg(0);
                                          while((!fin.eof())&&(fin.read((char*)&t1,sizeof(t1))))
                                          {
                                                 if(an==t1.app_no)
                                                 {
                                                      t1.display();
                                                      flag=1;
                                                      break;
                                                 }
                                          }
                                          fin.close();
                                          if(flag==0)
                                              cout<<"\nTICKET NOT FOUND!!!\nCHECK THE APPLICANT NUMBER";
                                          break;
                             }

                      case 4:
                                    fin.open("ticket_info.dat",ios::in|ios::binary);
                                    fin.seekg(0);
                                    while((!fin.eof())&&(fin.read((char*)&t1,sizeof(t1))))
                                    {
                                        t1.display();
                                    }
                                    fin.close();
                                    break;

                      case 5:
                                 veh_det();
                                 break;
                      case 6:
                                add_city();
                                break;

                      case 7:
                                add_train();
                                break;

                      case 8:
                                add_bus();
                                break;

                      case 9:
                                add_plane();
                                break;

                      case 10:
                                exit(0);
                                break;
                      default:
                                cout<<"\n\nPLEASE ENTER VALID OPTION!";
                                break;
                  }
                    cout<<"\nDO YOU WANT TO CONTINUE?(y/n):";
                    cin>>c;
            }while((c=='Y')||(c=='y'));
          }

          else//USER'S OPTIONS
          {
                cout<<"\nWhat do you want to do ?\n";
                cout<<"\n1.Book a ticket";
                cout<<"\n2.View your ticket ";
                cout<<"\n3.Cancel your ticket";
                cout<<"\n4.View details of all vehicles";
                cout<<"\n5.Queries";
                cout<<"\n6.Exit     ";
                cout<<"\nYOUR CHOICE::";
                cin>>cho2;
                switch(cho2)
                {
                    case 1:
                    {
                         fin.open("ticket_info.dat",ios::in|ios::binary);
                         fin.seekg((-1)*sizeof(t1),ios::end);
                         fin.read((char*)&t1,sizeof(t1));
                         fin.close();
                         t1.make_ticket();
                         t1.display();
                         fout.open("ticket_info.dat",ios::app|ios::binary);
                         fout.write((char*)&t1,sizeof(t1));
                         fout.close();
                         break;
                    }
                    case 2:
                          {
                                long int mob,m;
                                int an,flag=0;
                                cout<<"\n Enter the applicant number of the ticket you want to view: ";
                                cin>>an;
                                cout<<"\n Enter the registered mobile number:";
                                cin>>mob;

                                fin.open("ticket_info.dat",ios::in|ios::binary);
                                fin.seekg(0);

                                while((!fin.eof())&&(fin.read((char*)&t1,sizeof(t1))))
                                {
                                    m=t1.ret_phon();
                                    if(an==t1.app_no)
                                    {
                                        if(mob!=m)
                                        {
                                                cout<<"\n\nInvalid Applicant no./Mobile no.";
                                                break;
                                        }
                                        else
                                        {
                                            t1.display();
                                            flag=1;
                                            break;
                                        }
                                    }
                               }

                            fin.close();
                            if(flag==0)
                                cout<<"\n\nInvalid Applicant no./Mobile no.";
                            break;

                        }
                 case 3:
                        {
                            long int mob,m;
                            int flag=0,an;
                            float a;

                            a=t1.ret_amt();

                            cout<<"\n Enter your Mobile number:";
                            cin>>mob;
                            cout<<"\n Enter The Applicant Number Of The Ticket To Be Cancelled: ";
                            cin>>an;

                            fin.open("ticket_info.dat",ios::in|ios::binary);
                            fout.open("temp.dat",ios::app|ios::binary);

                            fin.seekg(0);

                            while((!fin.eof())&&(fin.read((char*)&t1,sizeof(t1))))
                            {
                                m=t1.ret_phon();
                                if(an==t1.app_no)
                                {
                                  if(mob!=m)
                                  {
                                        flag=0;
                                    }
                                  else{
                                        flag=1;
                                        t1.display();
                                        cout<<"\nAre you sure you want to delete this ticket: ";
                                        cin>>ch;
                                        if(ch=='n'||ch=='N')
                                        {
                                            fout.write((char*)&t1,sizeof(t1));
                                        }
                                        if(ch=='y'||ch=='Y')
                                            t1.cancellation();

                                    }
                                 }

                              else
                                  fout.write((char*)&t1,sizeof(t1));
                           }

                            if(flag==0)
                                cout<<"\n\nInvalid Applicant no./Mobile no.";

                            if(flag==1)
 cout<<"\n\nTicket successfully cancelled.\nWE HAVE REFUNDED Rs."<<a/2<<" (50%)";

                            remove("ticket_info.dat");
                            rename("temp.dat","ticket_info.dat");

                            fin.close();
                            fout.close();
                            break;
                         }

                  case 4:
                  {
                        veh_det();
                        break;
                  }

                  case 5:
                      {
                            system("cls");
                            cout<<"\nTHESE ARE SOME FREQUENTLY ASKED QUESTIONS BY OUR USERS.";
                            cout<<"\n-------------------------------------------------------";
                            cout<<"\n\nQUESTION) How do I reserve a new ticket?";
                            cout<<"\nANSWER)   STEP 1)Select the option ";
                            cout<<"\n          STEP 2)Enter the respective information asked.";
                            cout<<"\n          STEP 3)Enter the destination and departure city";
cout<<"\n          STEP 4)Enter the convenient mode of transport and the further respective information asked.";
                            cout<<"\n          STEP 5)Your ticket is reserved.\n\n";
                            cout<<"\n\n****************************************************";
                            cout<<"\n\n****************************************************";
                            cout<<"\n\nQUESTION) How do I delete my ticket?";
                            cout<<"\nANSWER)   STEP 1)Goto delete ticket option.";
                            cout<<"\n          STEP 2)Enter the destination and departure city";
cout<<"\n          STEP 3)Enter the convenient mode of transport and the further respective information asked.";
                            cout<<"\n          STEP 4)Your ticket is reserved.\n\n";
                            cout<<"\n\n****************************************************";
                            cout<<"\n\n****************************************************";
                            cout<<"\n\nQUESTION) HOW SHOULD I VIEW MY BOOKED TICKET?";
                            cout<<"\nANSWER)   STEP 1)Goto view ticket option.";
                            cout<<"\n          STEP 2)Enter the application number and registered mobile number.";
                            cout<<"\n          STEP 3)Your ticket is printed on screen.\n\n";
                            cout<<"\n\n****************************************************";
                            cout<<"\n\n****************************************************";

                            break;
                      }

                  case 6:
                        {
                             exit(0);
                                     break;
                        }

                  default:
                        cout<<"\n\nPLEASE ENTER VALID OPTION";
                }
          }
         cout<<"\nDO YOU WANT TO CONTINUE WITH MAIN MENU?(y/n):";
         cin>>ch;
     }while(ch=='y'||ch=='Y');

     cout<<endl;
     system("pause");
     system("cls");

     cout<<"\n\n\t**********THANK YOU FOR VISITING US AND USING OUR SERVICES.**********";
     cout<<"\n\n\t**********         WE GIVE YOU OUR BEST WISHES             *********";

     return 0;
}

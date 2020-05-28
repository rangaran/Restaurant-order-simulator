#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
#include<iomanip.h>
#include<process.h>
class reg
{
int phoneno, userid;
char address[20],emailid[20],password[20],recheck[20];
char username[20],regtype[10];
public:
void check();
void getdata();
int retpn();
int retuserid();
int retusername(char usernam[]);
int retaddress(char add[]);
int retpass(char pass[]);
int retregister(char type[]);
void update();

}s1;
void reg::update()
{
    char enadd[100];
    cout<<"please reenter the new address you wish to keep"<<endl;
gets(enadd);
strcpy(address,enadd);
}


int reg::retpn()
{
return phoneno;
}

int reg::retuserid()
{
return userid;
}
int reg::retusername(char usernam[])
{
return(strcmp(username,usernam));
}
int reg::retregister(char type[])
{
return(strcmp(regtype,type));
}
int reg::retaddress(char add[])
{
return(strcmp(address,add));
}
 int reg::retpass(char pass[])
 {
 return(strcmp(password,pass));
 }


void reg::getdata()
{ clrscr();
cout<<"               user registration           "<<endl;
cout<<"enter the phone number"<<endl;
cin>>phoneno;
cout<<"enter the userid number you wish to keep"<<endl;
cin>>userid;
cout<<"enter the address"<<endl;
gets(address);
cout<<"enter your email id"<<endl;
gets(emailid);
cout<<"enter the password of your choice"<<endl;
gets(password);
cout<<"reenter the password"<<endl;
gets(recheck);
check();
cout<<"enter the username"<<endl;
gets(username);
cout<<"enter the type of registration (monthly/annual)"<<endl;
gets(regtype);
}
void write()
{
ofstream o1;
o1.open("projec.dat",ios::binary);
s1.getdata();
o1.write((char*)&s1,sizeof(s1));
o1.close();
}

void reg::check()
{   char re[20];
strcpy(re,recheck);
if(strcmp(password,re)!=0)
{
while(strcmp(password,re)!=0)
{   cout<<"the password does not match please reenter it"<<endl;
gets(re);

}
}
}

int registers()
 {   clrscr();
     int flag=0;char usernam[10],pass[10],temp=0,type[10];
     int useid;
     cout<<"       login        "<<endl;
cout<<"please enter your user id"<<endl;
cin>>useid;
cout<<"please enter your username"<<endl;
gets(usernam);
 cout<<"enter your password"<<endl;
 gets(pass);
 cout<<"enter your registration type"<<endl;
 gets(type);

ifstream i1;
i1.open("projec.dat",ios::binary);
i1.read((char*)&s1,sizeof(s1));
if(s1.retuserid()==useid && s1.retusername(usernam)==0 && s1.retpass(pass)==0 && s1.retregister(type)==0)
{flag=1;
return flag;
}
else
return temp;
i1.close();

}


int registers(int c)
{
int flagy=1, temp=0;

if(c==1)
exit(1);
else if(c==2)
{
cout<<"please reenter your details"<<endl;
registers();
return flagy;

 }
 else return temp;

}


void main()
{
int choice,flag1,flagy=0,c,pos;
float final;
 char key;
char choice2,reply[10],typed[20];

char ans,add[10],inp,newadd[10];

do{  clrscr();
 cout<<"welcome to FOODAVISTA"<<endl<<endl;
cout<<"we are considered to be the hub of taste"<<endl<<endl<<endl<<endl<<endl;
cout<<"1.continue as a member"<<endl<<endl<<endl;
cout<<"Or sign up to become a member "<<endl<<endl;
cout<<"2.monthly account"<<endl<<"3.annual account"<<endl<<"choose 1 or 2 or 3"<<endl;
cin>>choice;
switch(choice)
{
case 1:

flag1=registers();
ans='n';
choice2='n';
 break;
case 2:
clrscr();
cout<<"Monthly registration entails certain benefits:"<<endl;
cout<<"a)40% discount on final billing price"<<endl;
cout<<"b)you are entered as a earning point member:"<<endl;
cout<<"it involves earning 2 points for each buy"<<endl<<endl<<endl;
cout<<"Do you want to go back to the menu(y) or continue with monthly registration(n)"<<endl;
cin>>ans;
if(ans=='n'||ans=='N')
write();
cout<<"go back to menu(y) to explore your options / do you wish to entirely exit the program(n)"<<endl;
cin>>choice2;
if(choice2=='n')
exit(1);
break;
case 3:
clrscr();
cout<<"Annual registration entails certain benefits:"<<endl;
cout<<"a)55% discount on final billing price"<<endl;
cout<<"you are entered as a earning point member"<<endl;
cout<<"It involves"<<" earning 7 points for each buy "<<endl<<endl<<endl;
cout<<"go back to menu(y) to explore your options / do you wish to entirely exit the program(n)"<<endl;
cin>>ans;
if(ans=='n'||ans=='N')
write();
cout<<"to go back to menu(y) to explore your options / do you wish to entirely exit the program "<<endl;
cin>>choice2;
if(choice2=='n')
exit(1);
}
}
while(ans=='y'||ans=='Y'||choice2=='y');


if(flag1==0)
{    clrscr();
cout<<"No match found"<<endl<<endl;
cout<<"Do u want to continue or exit" <<endl;
cout<<"click 1 to exit out of the program"<<endl;
cout<<"click 2 to continue into sign in"<<endl;
cin>>c;
flagy=registers(c);
}
 if(flag1==1||flagy==1)
 {     clrscr();
char divider[]="******";


    int pizza, side, drink, exit, ch, pizzaNum=0, sideNum=0,drinkNum=0;
     int peperoni, cheese, supreme, meatlovers, pizzaChoice,drinkChoice, sideChoice;
      int tp,ts,td;
      char input;
    float total1,total2,total3,total4;

    do{

cout << divider;

   cout << "\n\nTakeout Menu" << "\n\n1) Order pizza ($11.99ea)"<< "\n2) Order side ($4.99ea)"

    << "\n3) Order drink ($1.99ea)"

    << "\n4) Exit menu";

   cout << "\n\nYour choice (1-4)? ";

 cin >> ch;

cout << "\n";

 cout << divider;



     switch (ch)
{

    case 1:



cout << "\n\n1) Peporoni"

    << "\n2) Cheese"

    << "\n3) Supreme"

    << "\n4) Meatlovers";

     cout << "\n\nWhich type of pizza? ";

     cin >> pizzaChoice;

    switch (pizzaChoice)
    {

    case 1:

     cout << "\nHow many peperoni pizzas? ";

     cin >> tp;

     cout << "\n" << divider;

    break;

    case 2:

     cout << "\nHow many cheese pizzas? ";

     cin >> tp;

     cout << "\n" << divider;

    break;

    case 3:

     cout << "\nHow many supreme pizzas? ";

     cin >> tp;

     cout << "\n" << divider;

    break;

    case 4:

     cout << "\nHow many meatlovers pizzas? ";

     cin >> tp;

     cout << "\n" << divider<<endl;

    break;

    default:tp=0;

     cout << pizzaChoice << " is not a valid character!";
     }
      pizzaNum=pizzaNum+tp;
    break;
    case 2:

    int coleslaw, fries, salad, breadsticks;

     cout << "\n\n1) Coleslaw (1 cup)"

    << "\n2) Fries (medium)"

    << "\n3) Salad (medium bowl)"

    << "\n4) Breadsticks (4)";

     cout << "\n\nWhich type of side? ";

     cin >> sideChoice;

    switch (sideChoice)
    {

    case 1:

     cout << "\nHow many cups of coleslaw? ";

     cin >> ts;

     cout << "\n" << divider;

    break;

    case 2:

     cout << "\nHow many fries? ";

     cin >> ts;

     cout << "\n" << divider;

    break;

    case 3:

     cout << "\nHow many bowls of salad? ";

     cin >> ts;

     cout << "\n" << divider;

    break;

    case 4:

     cout << "\nHow many breadsticks? ";

     cin >> ts;

     cout << "\n" << divider<<endl;

    break;

    default:
    ts=0;
     cout << sideChoice << " is not a valid character!";
     }
    sideNum=sideNum+ts;
    break;

    case 3:

    int coke, sprite, drpepper, lemonade, drinkChoice;

     cout << "\n\n1) Coke"

    << "\n2) Sprite"

    << "\n3) Dr. Pepper"

    << "\n4) Lemonade";

     cout << "\n\nWhich type of drink? ";

     cin >> drinkChoice;

    switch (drinkChoice)
    {

    case 1:

     cout << "\nHow many Coke's? ";

     cin >> td;

     cout << "\n" << divider;

    break;

    case 2:

     cout << "\nHow many Sprite's? ";

     cin >> td;

     cout << "\n" << divider;

    break;

    case 3:

     cout << "\nHow many Dr. Pepper's? ";

     cin >> td;

     cout << "\n" << divider;

    break;

    case 4:

     cout << "\nHow many Lemonade's? ";

     cin >> td;

     cout << "\n" << divider;

    break;

    default:td=0;
cout << drinkChoice << " is not a valid character!";
   }
      drinkNum=drinkNum+td;
      break;

    case 4:

    cout<<endl<<"Thank you for your time"<<endl;

    break;

    default:

     cout << "\n\n" << ch <<endl<< " is not a valid choice. Please enter 1-4.\n\n";

     cout << divider<<endl;

    }

     cout<<endl<<"Are you interested in placing an order or continuing further ordering(yes/no)"<<endl;
     gets(reply);
     }
     while(strcmp(reply,"yes")==0);

  clrscr();
     cout << "\n\nORDER SUMMARY\n";

    if (pizzaNum != 1)
    {

     cout << "\n" << pizzaNum << " pizzas";

    }

    else
    {

     cout << "\n" << pizzaNum << " pizza";

    }

    if (sideNum != 1)
    {

     cout << "\n" << sideNum << " sides";

    }

    else
    {

     cout << "\n" << sideNum << " side";

    }

    if (drinkNum != 1)
    {

     cout << "\n" << drinkNum << " drinks\n\n";

    }

    else
    {

     cout << "\n" << drinkNum << " drink\n\n";

    }



     cout << "PRICE SUMMARY";

    total1 = 11.99 * pizzaNum;

    total2 = 4.99 * sideNum;

     total3= 1.99 * drinkNum;

    total4 = (total1 + total2 + total3);




     cout << "\n\nPrice of items: $"  <<total4;

    final = total4*1.06;

     cout << "\nTax of items: $"  << 0.06*total4;

     cout << "\n------" ;
   int x;
     cout<<endl<<"type of registration"<<endl;
     cout<<"1.monthly"<<endl<<"2.annual"<<endl;
cin>>x;
     switch(x)
     {
     case 1:final=final*0.6;
     break;
     case 2:final=final*0.45;
     }

   cout << "\n|Total price: $"  <<final << "|\n"

    << "------\n\n";


     cout << divider << "\n\n";

   cout<<endl<<endl<<endl;
   cout<<"THANK YOU FOR YOUR TIME:)"<<endl;

}
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"redirect: enter any key"<<endl;
cin>>key;
clrscr();
cout<<"ADDRESS VERIFICATION"<<endl;

cout<<"enter the address you wish to receive the order at"<<endl;
gets(add);
if(s1.retaddress(add)!=0)
{
cout<<"This address does'nt match with the address on your account. would you like to save it as a new address ?(y/n)"<<endl;
cin>>inp;
if(inp=='y')
{
fstream finout("projec.dat",ios::binary|ios::in|ios::out);

while(finout.read((char*)&s1,sizeof(s1)))
   {



pos=finout.tellg();
finout.seekg(pos-sizeof(s1));

  s1.update();
finout.write((char*)&s1,sizeof(s1));


cout<<"The change has been made"<<endl;

finout.close();


 }
  }

     }
    cout<<"HOPE YOU ENJOY YOUR MEAL";
getche();
}

#include<iostream>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<iomanip>
using namespace std;

const int Salary=10000;
int Comission=0;
string EmployeeID;

///-------------------------------------------Class Bookshop--------------------------------------------------------------------
class BookShop
{

    string BookName,AuthorName,BookId,Copy,Price;
public:
    void Add(),Edit(),Delete(),ShowAllBook(),SecondMenu(),SellBook(),EditStock(string,int),ShowBusiness(),ShowBalance();
    void Business(string,string,string,int,int);
    int CheckSpace(string),CheckInteger(string),CheckId(string),CheckBookAuthorName(string,string);
    void AddcomiSSion(int);

};
///--------------------------------------------Class Employee--------------------------------------------------------------------

class Employee: public BookShop
{
    string EmployeeName,EmployeePassword,GetEmployeeId;
    static string EmployeeId;
public:
    Employee();
    void SignIn(),SignUp(),ForgotIDPassword();
    friend void AddcmoSSion();
    int EmployeeCheckId(string);

};
///-----------------------------------------------  Static Declare-----------------------------------------------------------

string Employee ::EmployeeId;

///----------------------------------------------Add Book---------------------------------------------------------------------


void BookShop :: Add()
{
    system("CLS");

    string Choice;

    cout<<"Do You Want To add book ? \n\n";

    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
    cout<<"\n\t\t\t| (1) Yes                   |";
    cout<<"\n\t\t\t| (2) No                    |";
    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

    cout<<"\n\nEnter Your choice : ";
    getline(cin,Choice);

    try
    {
        if(Choice.length()>1)
            throw 6.0;
        else if(Choice.at(0)=='1')
        {
            try
            {
                system("CLS");
                cout<<"Note : Please Dont Use Space \n";
                cout<<"       You Can Use _(Under Score) instead of space \n";

                cout<<"\nEnter Book Id : ";
                getline(cin,BookId);
                int z=CheckId(BookId);
                if(z==1)
                {
                    cout<<"This Id is Already Exist \n\n";
                    system("pause");
                    Add();
                }
                int a=CheckSpace(BookId);
                if(a==1)
                    throw 99;

                cout<<"\nEnter Book Name : ";
                getline(cin,BookName);
                int b=CheckSpace(BookName);
                if(b==1)
                    throw 99;

                cout<<"\nEnter Author Name : ";
                getline(cin,AuthorName);
                int c=CheckSpace(AuthorName);
                if(c==1)
                    throw 99;

                int m=CheckBookAuthorName(BookName,AuthorName);

                if(m==1)
                {
                    cout<<"\nThis Book and author already exist\n\n";
                    system("pause");
                    Add();
                }


                cout<<"\nEnter How Much Copy Of This Book You Want To Add : ";
                getline(cin,Copy);
                int e=CheckInteger(Copy);
                if(e==0)
                    throw 'x';

                cout<<"\nEnter Price Of Every Piece : ";
                getline(cin,Price);
                int f=CheckInteger(Price);
                if(f==0)
                    throw 'y';


                ofstream Write("BookShop.txt",ios::app);
                Write<<BookId<<"\t\t"<<BookName<<"\t\t"<<AuthorName<<"\t\t"<<Copy<<"\t\t"<<Price<<endl;
                Write.close();


                cout<<"\nYour Book Is Succesfully Added \n\n";
                system("pause");

                SecondMenu();

            }

            catch(int n)
            {
                cout<<"\n\nPlease Dont Use Space \n";
                cout<<"You Can Use _(Under Score) instead of space \n\n\n";
                system("pause");
                Add();
            }

            catch(char f)
            {
                cout<<"\nPlease Input Integer Number \n\n";
                system("pause");
                Add();
            }

        }

        else if(Choice.at(0)=='2')
            SecondMenu();
        else
            throw "gh";
    }

    catch(...)
    {
        cout<<"\nInvalid Input \n\n";
        system("pause");
        Add();
    }

}
///---------------------------------------------------Edit Book-----------------------------------------------------------------

void BookShop :: Edit()
{
    system("CLS");

    string EditBookName,EditAuthorName,EditBookId,EditCopy,EditPrice;

    string Choice;

    cout<<"Do You Want To Edit book ? \n\n";

    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
    cout<<"\n\t\t\t| (1) Yes                   |";
    cout<<"\n\t\t\t| (2) No                    |";
    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

    cout<<"\n\nEnter Your choice : ";
    getline(cin,Choice);

    try
    {
        if(Choice.length()>1)
            throw 6.0;
        else if(Choice.at(0)=='1')
        {
            try
            {
                system("CLS");

                string EditId;
                cout<<"\nEnter Book ID : ";
                getline(cin,EditId);
                int y=CheckSpace(EditId);
                if(y==1)
                    throw 99;
                int Check=CheckId(EditId);
                if(Check==0)
                {
                    cout<<"\nSorry No Such Id Exist \n";
                    system("pause");
                    Edit();
                }
                int a=CheckSpace(EditId);
                if(a==1)
                    throw 99;

                system("cls");

                cout<<"Note : Please Dont Use Space \n";
                cout<<"       You Can Use _(Under Score) instead of space \n";

                cout<<"\nEnter New Book Id : ";
                getline(cin,EditBookId);
                int z=CheckId(EditBookId);
                if(z==1)
                {
                    cout<<"This Id is Already Exist \n\n";
                    system("pause");
                    Edit();
                }
                int w=CheckSpace(EditBookId);
                if(w==1)
                    throw 99;


                cout<<"\nEnter New Book Name : ";
                getline(cin,EditBookName);
                int b=CheckSpace(EditBookName);
                if(b==1)
                    throw 99;

                cout<<"\nEnter New Author Name : ";
                getline(cin,EditAuthorName);
                int c=CheckSpace(EditAuthorName);
                if(c==1)
                    throw 99;



                cout<<"\nEnter How Much Copy Of This Book You Want To Add : ";
                getline(cin,EditCopy);
                int e=CheckInteger(EditCopy);
                if(e==0)
                    throw 'x';

                cout<<"\nEnter Price Of Every Piece : ";
                getline(cin,EditPrice);
                int f=CheckInteger(EditPrice);
                if(f==0)
                    throw 'y';



                ofstream Write("BookShop2.txt");
                ifstream Read("BookShop.txt");

                if(Read)
                {
                    while(Read>>BookId>>BookName>>AuthorName>>Copy>>Price)
                    {
                        if(EditId==BookId)
                        {
                            Write<<EditBookId<<"\t\t"<<EditBookName<<"\t\t"<<EditAuthorName<<"\t\t"<<EditCopy<<"\t\t"<<EditPrice<<endl;
                            continue;
                        }

                        Write<<BookId<<"\t\t"<<BookName<<"\t\t"<<AuthorName<<"\t\t"<<Copy<<"\t\t"<<Price<<endl;

                    }

                    Read.close();
                    Write.close();

                    remove("BookShop.txt");
                    rename("BookShop2.txt","BookShop.txt");
                }
                Read.close();
                Write.close();

                cout<<"\nYour Book Is Succesfully Edited \n\n";
                system("pause");

                SecondMenu();

            }

            catch(int n)
            {
                cout<<"\n\nPlease Dont Use Space \n";
                cout<<"You Can Use _(Under Score) instead of space \n\n\n";
                system("pause");
                Edit();
            }

            catch(char f)
            {
                cout<<"\nPlease Input Integer Number \n\n";
                system("pause");
                Edit();
            }

        }

        else if(Choice.at(0)=='2')
            SecondMenu();
        else
            throw "gh";
    }

    catch(...)
    {
        cout<<"\nInvalid Input \n\n";
        system("pause");
        Edit();
    }
}
///------------------------------------------------Delete Book------------------------------------------------------------------

void BookShop :: Delete()
{
    system("CLS");

    string Choice;

    cout<<"Do You Want To Delete book ? \n\n";

    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
    cout<<"\n\t\t\t| (1) Yes                   |";
    cout<<"\n\t\t\t| (2) No                    |";
    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

    cout<<"\n\nEnter Your choice : ";
    getline(cin,Choice);

    try
    {
        if(Choice.length()>1)
            throw 6.0;
        else if(Choice.at(0)=='1')
        {
            try
            {
                system("CLS");

                string EditId;
                cout<<"\nEnter Book ID : ";
                getline(cin,EditId);
                int y=CheckSpace(EditId);
                if(y==1)
                    throw 99;
                int Check=CheckId(EditId);
                if(Check==0)
                {
                    cout<<"\nSorry No Such Id Exist \n";
                    system("pause");
                    Delete();
                }
                int a=CheckSpace(EditId);
                if(a==1)
                    throw 99;

                system("cls");

                ofstream Write("BookShop2.txt");
                ifstream Read("BookShop.txt");

                if(Read)
                {
                    while(Read>>BookId>>BookName>>AuthorName>>Copy>>Price)
                    {
                        if(EditId==BookId)
                        {
                            continue;
                        }

                        Write<<BookId<<"\t\t"<<BookName<<"\t\t"<<AuthorName<<"\t\t"<<Copy<<"\t\t"<<Price<<endl;

                    }
                }
                else
                    cout<<"File Not Found";

                Read.close();
                Write.close();

                remove("BookShop.txt");
                rename("BookShop2.txt","BookShop.txt");

                cout<<"\nYour Book Is Succesfully Deleted \n\n";
                system("pause");

                SecondMenu();

            }

            catch(int n)
            {
                cout<<"\n\nPlease Dont Use Space \n";
                cout<<"You Can Use _(Under Score) instead of space \n\n\n";
                system("pause");
                Delete();
            }

            catch(char f)
            {
                cout<<"\nPlease Input Integer Number \n\n";
                system("pause");
                Delete();
            }

        }

        else if(Choice.at(0)=='2')
            SecondMenu();
        else
            throw "gh";
    }

    catch(...)
    {
        cout<<"\nInvalid Input \n\n";
        system("pause");
        Delete();
    }
}

///---------------------------------------------Show All Book------------------------------------------------------------------
void BookShop :: ShowAllBook()
{

    system("cls");
    cout<<"|~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~|~~~~~~~~|\n";
    cout<<"|Id         | Book Name             | Author Name          | Copy      | Price  |\n";
    cout<<"|~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~|~~~~~~~~|\n";

    ifstream Read("BookShop.txt");

    if(Read)
    {
        while(Read>>BookId>>BookName>>AuthorName>>Copy>>Price)
        {
            cout<<setiosflags(ios::left)<<setw(13)<<BookId<<setw(25)<<BookName<<setw(22)<<AuthorName<<setw(14)<<Copy<<setw(14)<<Price<<endl;
        }
        Read.close();
    }
    Read.close();

    system("pause");
    SecondMenu();
}
///-----------------------------------------------Bookshop Menu---------------------------------------------------------------------
void BookShop :: SecondMenu()
{
    string Choice;

    while(1)
    {
        system("CLS");

        cout<<"\n\n\t\t\t|~~~~~~~~~Menu~~~~~~~~~~~~~~|";
        cout<<"\n\t\t\t| (1) Sell Book             |";
        cout<<"\n\t\t\t| (2) Add Book              |";
        cout<<"\n\t\t\t| (3) Delete Book           |";
        cout<<"\n\t\t\t| (4) Edit Book             |";
        cout<<"\n\t\t\t| (5) Show All Book List    |";
        cout<<"\n\t\t\t| (6) Show Balance          |";
        cout<<"\n\t\t\t| (7) Show My Sold List     |";
        cout<<"\n\t\t\t| (8) Logout                |";
        cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

        cout<<"\n\nEnter Your choice : ";
        getline(cin,Choice);

        try
        {
            if(Choice.length()>1)
                throw 99;
            else if(Choice.at(0)=='1')
            {
                SellBook();
                system("pause");
            }

            else if(Choice.at(0)=='2')
            {
                Add();
                system("pause");
            }


            else if(Choice.at(0)=='3')
            {
                Delete();
                system("pause");
            }


            else if(Choice.at(0)=='4')
            {
                Edit();
                system("pause");
            }


            else if(Choice.at(0)=='5')
            {
                ShowAllBook();
                system("pause");
            }


            else if(Choice.at(0)=='6')
            {
                ShowBalance();
                system("pause");
            }


            else if(Choice.at(0)=='7')
            {
                ShowBusiness();
                system("pause");
            }


            else if(Choice.at(0)=='8')
            {
                cout<<"You Logged Out Successfully \n\n";
                system("pause");
                Employee();
            }

            else
            {
                throw 65;
            }
        }

        catch(...)
        {
            cout<<"Invalid Input \n\n";
            system("pause");
            system("CLS");

        }
    }
}
///-------------------------------------------Function For Check space------------------------------------------------------------

int BookShop :: CheckSpace(string Check)
{
    int c=0;
    for(int i=0; i<Check.length(); i++)
    {
        if(Check.at(i)==' ')
            return 1;

    }

}

///----------------------------------------Function For Check Integer-----------------------------------------------------------
int BookShop :: CheckInteger(string Check)
{
    int f=0;
    for(int i=0; i<Check.length(); i++)
    {
        if(Check.at(i)>='1' && Check.at(i)<='9')
            f++;
    }

    if(f>=1)
        return 1;
    else
        return 0;
}

///----------------------------------------Function For Check Id------------------------------------------------------------

int BookShop :: CheckId(string ID)
{
    string CheckBookId;
    int c=0;
    ifstream Read("BookShop.txt");
    if(Read)
    {
        while(Read>>CheckBookId>>BookName>>AuthorName>>Copy>>Price)
        {
            if(CheckBookId==ID)
            {
                c++;
            }

        }

        if(c>=1)
        {
            Read.close();
            return 1;
        }
        else
        {
            Read.close();
            return 0;
        }
    }
    else
    {
        Read.close();
        cout<<"File not found";
    }

    return 0;

}

///------------------------------------------------Employee Menu----------------------------------------------------------------

Employee ::Employee()
{
    {
        string Choice;

        while(1)
        {
            system("CLS");
            system("COLOR 70");

            cout<<"\n\n\t\t\t|~~~~~~~~~Menu~~~~~~~~~~~~~~~~|";
            cout<<"\n\t\t\t| (1) Sign In                 |";
            cout<<"\n\t\t\t| (2) Sign Up                 |";
            cout<<"\n\t\t\t| (3) Forgot Id/Password      |";
            cout<<"\n\t\t\t| (4) Exit                    |";
            cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

            cout<<"\n\nEnter Your choice : ";
            getline(cin,Choice);

            try
            {
                if(Choice.length()>1)
                    throw 99;
                else if(Choice.at(0)=='1')
                {
                    SignIn();
                    system("pause");
                }

                else if(Choice.at(0)=='2')
                {
                    SignUp();
                    system("pause");
                }


                else if(Choice.at(0)=='3')
                {
                    ForgotIDPassword();
                    system("pause");
                }


                else if(Choice.at(0)=='4')
                {
                    cout<<"Thanks For Using This Software \n\n";
                    exit(0);
                    system("pause");
                }

                else
                {
                    throw 65;
                }
            }

            catch(...)
            {
                cout<<"Invalid Input \n\n";
                system("pause");
                system("CLS");

            }
        }
    }
}
///---------------------------------------------------Sign Up-------------------------------------------------------------------

void Employee :: SignUp()
{
    system("cls");
    try
    {
        cout<<"Enter Id : ";
        getline(cin,EmployeeId);
        int z=EmployeeCheckId(EmployeeId);
        if(z==1)
        {
            cout<<"This Id is Already Exist \n";
            cout<<"\nPlz Try Again \n\n";
            system("pause");
            Employee();
        }
        int a=CheckSpace(EmployeeId);
        if(a==1)
            throw 99;
        cout<<"Enter Name : ";
        getline(cin,EmployeeName);
        int b=CheckSpace(EmployeeName);
        if(b==1)
            throw 99;
        cout<<"Enter Password : ";
        getline(cin,EmployeePassword);
        int c=CheckSpace(EmployeePassword);
        if(c==1)
            throw 99;
    }
    catch(int a)
    {
        cout<<"\n\nPlease Dont Use Space \n";
        cout<<"You Can Use _(Under Score) instead of space \n";
        cout<<"\nPlz Try Again \n\n";
        system("pause");
        Employee();
    }


    ofstream Write("login.txt",ios::app);
    Write<<EmployeeId<<"\t\t"<<EmployeeName<<"\t\t"<<EmployeePassword<<"\t\t"<<Salary<<"\t\t"<<Comission<<endl;
    cout<<"\nSign Up Success \n";
    Write.close();
    system("pause");
    SecondMenu();
}

///---------------------------------------------Sign In------------------------------------------------------------------------

void Employee :: SignIn()
{

    string SignInId,SignInPassword,Balance,ComiSSion;
    int c=0;

    system("cls");
    try
    {
        cout<<"Enter Your Id  : ";
        getline(cin,EmployeeId);
        int a=CheckSpace(EmployeeId);
        if(a==1)
            throw 99;

        EmployeeID=EmployeeId;
        cout<<"Enter Password : ";
        getline(cin,EmployeePassword);
        int b=CheckSpace(EmployeePassword);
        if(b==1)
            throw 99;
    }
    catch(int a)
    {
        cout<<"\n\nPlease Dont Use Space \n";
        cout<<"You Can Use _(Under Score) instead of space \n";
        cout<<"Please Try Again \n\n";
        system("pause");
        Employee();
    }

    ifstream Read("login.txt");

    if(Read)
    {
        while(Read>>SignInId>>EmployeeName>>SignInPassword>>Balance>>ComiSSion)
        {
            if(EmployeeId==SignInId && EmployeePassword==SignInPassword)
            {
                cout<<"\nWelcome, Mr "<<EmployeeName<<". . ."<<endl;
                cout<<"You successfully signed in in your account \n\n";
                Read.close();
                system("pause");
                SecondMenu();
                c++;
            }
        }
        if(c==0)
        {
            cout<<"\nYour Name or Password is wrong \n\n";
            system("pause");
            Employee();
        }
        Read.close();
    }
    else
    {
        Read.close();
        cout<<"\nUser Not Found \n\n";
        system("pause");
        Employee();
    }
}
///-----------------------------------------Forgot ID/Password-----------------------------------------------------------------
void Employee ::ForgotIDPassword()
{
    string Choice;
    int c=0;

    system("CLs");

    cout<<"Which One You Forgot ? \n\n";
    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
    cout<<"\n\t\t\t| (1) ID                    |";
    cout<<"\n\t\t\t| (2) Password              |";
    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

    cout<<"\n\nEnter Your choice : ";
    getline(cin,Choice);

    try
    {
        if(Choice.length()>1)
            throw 6.0;
        else if(Choice.at(0)=='1')
        {
            string password;
            system("CLS");
            cout<<"Enter Your Password : ";
            getline(cin,password);
            int a =CheckSpace(password);
            if(a==1)
            {
                cout<<"\n\nPlease Dont Use Space For Recover \n";
                cout<<"\nPlz Try again \n\n";
                system("pause");
                Employee();

            }
            ifstream Read("login.txt");

            if(Read)
            {
                while(Read>>EmployeeId>>EmployeeName>>EmployeePassword)
                {
                    if(EmployeePassword==password)
                    {
                        cout<<"Your ID is : "<<EmployeeId<<endl;
                        system("pause");
                        Read.close();
                        Employee();
                        c++;
                    }
                }

                if(c==0)
                {
                    system("CLS");
                    cout<<"Your Password is wrong "<<endl;
                    system("pause");
                    Read.close();
                    Employee();
                }
            }
            else
            {
                Read.close();
                system("CLS");
                cout<<"ID not found "<<endl;
                system("pause");
                Employee();
            }

        }

        else if(Choice.at(0)=='2')
        {
            string ID;
            system("CLS");
            cout<<"Enter Your ID : ";
            getline(cin,ID);
            int a =CheckSpace(ID);
            if(a==1)
            {
                cout<<"\n\nPlease Dont Use Space For Recover \n";
                cout<<"\nPlz Try again \n\n";
                system("pause");
                Employee();

            }

            ifstream Read("login.txt");

            if(Read)
            {
                while(Read>>EmployeeId>>EmployeeName>>EmployeePassword)
                {
                    if(EmployeeId==ID)
                    {
                        cout<<"Your Password is : "<<EmployeePassword<<endl;
                        system("pause");
                        Read.close();
                        Employee();
                        c++;
                    }
                }

                if(c==0)
                {
                    system("CLS");
                    cout<<"Your ID is wrong "<<endl;
                    Read.close();
                    system("pause");
                    Employee();
                }
            }
            else
            {
                Read.close();
                system("CLS");
                cout<<"ID not found "<<endl;
                system("pause");
                Employee();
            }


        }

        else
            throw "gh";
    }

    catch(...)
    {
        cout<<"\nInvalid Input \n\n";
        system("pause");
        Employee();
    }
}
///--------------------------------------------------Employee Id Check-----------------------------------------------------------

int Employee ::EmployeeCheckId(string ID)
{
    ifstream Read("login.txt");
    if(Read)
    {
        string Balance,ComiSSion;
        string EmpLoyeeId;

        while(Read>>EmpLoyeeId>>EmployeeName>>EmployeePassword>>Balance>>ComiSSion)
        {
            if(ID==EmpLoyeeId)
            {
                Read.close();
                return 1;
            }
        }
        Read.close();
        return 0;
    }
    else
    {
        Read.close();
        return 0;
    }

}

///----------------------------------------------------Sell Book-------------------------------------------------------------------
void BookShop ::SellBook()
{
    string Bookname,Authorname;
    int Piece,price,c=0,stock;
    try
    {
        system("CLS");
        cout<<"Note : Please Dont Use Space \n";
        cout<<"       You Can Use _(Under Score) instead of space \n";


        cout<<"\nEnter Book Name : ";
        getline(cin,BookName);
        int b=CheckSpace(BookName);
        if(b==1)
            throw 99;

        cout<<"\nEnter Author Name : ";
        getline(cin,AuthorName);
        int c=CheckSpace(AuthorName);
        if(c==1)
            throw 99;

    }


    catch(int n)
    {
        cout<<"\n\nPlease Dont Use Space \n";
        cout<<"You Can Use _(Under Score) instead of space \nPlease Try again \n\n";
        system("pause");
        SecondMenu();
    }

    ifstream Read("BookShop.txt");
    if(Read)
    {
        while(Read>>BookId>>Bookname>>Authorname>>stock>>price)
        {
            if(BookName==Bookname && AuthorName==Authorname)
            {
                c++;
                cout<<"\nYes, We have "<<stock<<" copy of it "<<endl<<"Price of each piece is : "<<price<<"TK"<<endl;
                cout<<endl<<"How much piece you need ? : ";
                cin>>Piece;
                cin.ignore();
                if(Piece<=stock)
                {
                    int ComIssIon=(Piece*price*5)/100;
                    int Pay=Piece*price;

                    cout<<"\nYou Need to paid : "<<Pay<<"TK\n\n"<<endl;

                    Read.close();

                    system("pause");
                    system("CLS");

                    cout<<"Do You Want to Buy ???";

                    string Choice;

                    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
                    cout<<"\n\t\t\t| (1) Yes                   |";
                    cout<<"\n\t\t\t| (2) No                    |";
                    cout<<"\n\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|";

                    cout<<"\n\nEnter Your choice : ";
                    getline(cin,Choice);

                    try
                    {
                        if(Choice.length()>1)
                            throw 6.0;
                        else if(Choice.at(0)=='1')
                        {

                            cout<<"\nThanks for Buy This Book From our shop \n\n";

                            Business(BookId,Bookname,Authorname,Piece,Pay);
                            EditStock(BookId,Piece);
                            AddcomiSSion(ComIssIon);

                            system("pause");
                            SecondMenu();

                        }

                        else if(Choice.at(0)=='2')
                        {
                            system("pause");
                            SecondMenu();
                        }

                        else
                            throw "gh";
                    }

                    catch(...)
                    {
                        cout<<"\nInvalid Input \n\n";
                        system("pause");
                        Delete();
                    }

                    c++;

                    system("pause");
                    SecondMenu();

                }
                else
                {
                    cout<<"Sorry, Required copy not in stock \n";
                    Read.close();
                    system("pause");
                    SecondMenu();
                }
            }

        }
        if(c==0)
        {
            cout<<"Sorry, We haven't this book\n";
        }
    }
    else
    {
        Read.close();
        cout<<"Sorry, File not found\n";
    }


}
///----------------------------------------------------Edit Stock--------------------------------------------------------------
void BookShop ::EditStock(string ID,int PIECE)
{

    ofstream Write("BookShop2.txt");
    ifstream Read("BookShop.txt");

    int stock,Count;
    if(Read)
    {
        while(Read>>BookId>>BookName>>AuthorName>>stock>>Price)
        {
            if(ID==BookId)
            {
                Count=stock-PIECE;
                stock=Count;
            }
            Write<<BookId<<"\t\t"<<BookName<<"\t\t"<<AuthorName<<"\t\t"<<stock<<"\t\t"<<Price<<endl;
        }

        Read.close();
        Write.close();

        remove("BookShop.txt");
        rename("BookShop2.txt","BookShop.txt");
    }
    else
    {
        Read.close();
        Write.close();
    }


}

///----------------------------------------------Function For Add Comission---------------------------------------------------

void BookShop ::  AddcomiSSion(int Money)
{

    string Balance,ID,EmployeeName,EmployeePassword;
    int ComiSSion;



    ofstream write("login2.txt");
    ifstream read("login.txt");

    if(read)
    {
        while(read>>ID>>EmployeeName>>EmployeePassword>>Balance>>ComiSSion)
        {
            if(ID==EmployeeID)
            {
                ComiSSion=Money;
            }


            write<<ID<<"\t\t"<<EmployeeName<<"\t\t"<<EmployeePassword<<"\t\t"<<Salary<<"\t\t"<<ComiSSion<<endl;

        }

        write.close();
        read.close();

        char* OldName="login.txt";
        char* NewName="login2.txt";
        remove(OldName);
        rename(NewName,OldName);
    }
    else
    {
        read.close();
        write.close();
    }

}
///---------------------------------------------Todays Business-----------------------------------------------------------------

void BookShop ::Business(string Bookid,string Bookname,string Authorname,int COPY,int Money)
{
    char ID[10]= {0};
    int c=0;
    for(int i=0; i<EmployeeID.length(); i++)
    {
        ID[i]=EmployeeID[i];
    }

    strcat(ID,".txt");

    ofstream Write(ID,ios::app);
    Write<<BookId<<"\t\t"<<Bookname<<"\t\t"<<Authorname<<"\t\t"<<COPY<<"\t\t"<<Money<<endl;
    Write.close();
}

///--------------------------------------------Show Today's Business-----------------------------------------------------------

void BookShop :: ShowBusiness()
{
    system("cls");
    cout<<"|~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~|~~~~~~~~|\n";
    cout<<"|Id         | Book Name             | Author Name          | Copy      | Price  |\n";
    cout<<"|~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~|~~~~~~~~|\n";


    int a=EmployeeID.length();
    int c=0;
    char ID2[20]= {0};
    for(int i=0; i<a; i++)
    {
        ID2[i]=EmployeeID[i];
    }
    strcat(ID2,".txt");

    ifstream Read(ID2);
    if(Read)
    {
        if(Read.is_open())
        {
            while(Read>>BookId>>BookName>>AuthorName>>Copy>>Price)
            {
                cout<<setiosflags(ios::left)<<setw(13)<<BookId<<setw(25)<<BookName<<setw(22)<<AuthorName<<setw(14)<<Copy<<setw(14)<<Price<<endl;
            }
            Read.close();
        }
        else
        {
            Read.close();
            cout<<"Error Opening\n";

        }
    }
    else
    {
        Read.close();
        cout<<"File Not found\n";

    }

    system("pause");
    SecondMenu();
}

///-----------------------------------------------------Show Balance----------------------------------------------------------

void BookShop:: ShowBalance()
{
    string ID,EmployeeName,EmployeePassword;
    int Balance,ComiSSion;

    ifstream Read("login.txt");
    if(Read)
    {
        while(Read>>ID>>EmployeeName>>EmployeePassword>>Balance>>ComiSSion)
        {
            if(ID==EmployeeID)
            {
                system("cls");
                cout<<"Your Salary is             :   "<<Balance<<endl;
                cout<<"Your Comission is          :   "<<ComiSSion<<endl;
                cout<<"-------------------------------------------"<<endl;
                cout<<"Total                      :   "<<Balance+ComiSSion<<endl;
            }
        }

        Read.close();

    }
    else
    {
        Read.close();
    }

    system("pause");
    SecondMenu();
}
///------------------------------------------------Check Book and Author Name--------------------------------------------------

int BookShop::CheckBookAuthorName(string Bookname,string Authorname)
{
    ifstream Read("BookShop.txt");
    if(Read)
    {
        string CheckBookName,CheckAuthorName,stock,Price,CheckBookId;
        while(Read>>CheckBookId>>CheckBookName>>CheckAuthorName>>stock>>Price)
        {
            if(CheckBookName==Bookname && CheckAuthorName==Authorname)
            {
                Read.close();
                return 1;
            }
        }
        Read.close();
        return 0;
    }
    else
    {
        Read.close();
        return 0;
    }


}

///-----------------------------------------------------Main Function----------------------------------------------------------

int main()
{
    Employee EmployeeObject;
    return 0;
}
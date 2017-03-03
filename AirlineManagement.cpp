#include<iostream>
#include<string.h>
#include<fstream>
#include <zconf.h>
#include <limits>
#include"FlightDetails.cpp"

using namespace std;

int tot_no_rec = 0;
int tot_no_rec1 = 0;
int tot_p_rec = 0;
int count = 0;
int update = 0;

class airline
{
protected:
    char flightname[20];
    char dept_loc[20];
    char arr_loc[20];
public:
    int c;

    friend void print(int);

    friend void print(int, int);

    void search(char d[], char s[]);

    char *ret()
    {
        return flightname;
    }

    char *rets()
    {
        return dept_loc;
    }

    char *retd()
    {
        return arr_loc;
    }

    void get(char a[], char b[], char c[])
    {
        strcpy(flightname, a);
        strcpy(dept_loc, b);
        strcpy(arr_loc, c);
    }

    class booking
    {
    protected:
        int day;
        int month;
        int year;
        int no_seats;
    public:

        friend void print(int, int);

        int decrement(int n);

        void increment();

        void get(int i)
        {
            day = i + 1;
            year = 2011;
            no_seats = 2;
        }

        void operator+=(booking &b);

        void getdate(int d, int m, int y);

        ~booking()
        {}
    } book[30], temp, temp1;

    ~airline()
    {}
} air[20];

void airline::booking::getdate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void airline::booking::increment()
{
    no_seats++;
}

int airline::booking::decrement(int n)
{
    if (n <= no_seats && no_seats > 0)
    {
        no_seats -= n;
        return 1;
    }
    else if (n > no_seats && no_seats != 0)
    {
        int n1;
        int ch;
        n1 = n - no_seats;
        st2:
        cout << "\n\t Flight has only" << no_seats << "\n\t"
             << " Book anyway?Press[1 for yes]|[0for no]\n\t Your choice:";
        cin >> ch;
        if (ch == 1)
        {
            cout << "\n\t Only" << no_seats << "  seats have been booked" << "Pl\n";
            no_seats = no_seats - (n - n1);
            return 2;
        }
        else if (ch == 0)
        {
            cout << "\n\t Book ticket in a different flight";
            return 3;
        }
        else
        {
            cout << "\n\t Invlalid option.Try again";
            goto st2;
        }
    }
    else
        return 0;
}

void airline::booking::operator+=(booking &b)
{
    while (month != b.month)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            day = 31 - day;
            if (b.month > month)
            {
                while (day != b.day)
                {
                    day++;
                    if (day > 31)
                    {
                        month++;
                        day = 1;
                        if (month > 12)
                        {
                            day = 1;
                            year++;
                        }
                    }
                }
            }
            else if (month == b.month)
            {
                while (day != b.day)
                {
                    day++;
                }
            }
            else if (b.month < month || b.day < day)
                cout << "\n\t Invalid Date";
        }
        else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
        {
            day = 30 - day;
            if (b.month > month)
            {
                while (day != b.day)
                {
                    day++;
                    if (day > 30)
                    {
                        month++;
                        day = 1;
                        if (month > 12)
                        {
                            day = 1;
                            year++;
                        }
                    }
                }
            }
            else if (month == b.month)
            {
                while (day != b.day)
                {
                    day++;
                }
            }
            else if (b.month < month || b.day < day)
                cout << "\n\t Invalid Date";
        }
    }
}

class flightdetails : public airline
{
protected:
    char flight_no[10];
    char fname[20];
    char flightduration[30];
    char status[15];
    char dept_time[30];
    char arr_time[30];
    float fare;
    float service_tax;
    float totalfare;
public:
//    int ret;
//    int c1;

    flightdetails();

    void get1(char fn[], char fno[], char fod[], char st[], char d_t[], char a_t[], float f, float srtx)
    {

        strcpy(fname, fn);
        //dateofjourney=date;
        strcpy(flight_no, fno);
        //	strcpy(dateofjourney,doj);
        strcpy(flightduration, fod);
        strcpy(status, st);
        strcpy(dept_time, d_t);
        strcpy(arr_time, a_t);
        fare = f;
        service_tax = srtx;
        totalfare = f + srtx;
    }

    friend void fdetails(int i);

    ~flightdetails()
    {}
} fd[20];

flightdetails::flightdetails()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        flight_no[i] = 0;
        flightduration[i] = 0;
        status[i] = 0;
        dept_time[i] = 0;
        arr_time[i] = 0;
    }
    fare = 0.0;
    service_tax = 0.0;
    totalfare = 0.0;
}

class passengerdetails : public airline
{
private:
    char pname[20];
    long int age;
    char sex[20];
    long int phone;
    char email[20];
    int dateofjourney;
public:
    int ret;

    void passengerdetails1();

    void passengerdetails1(char name[], long int a, int date, char s[], long int ph, char mail[])
    {
        strcpy(pname, name);
        age = a;
        dateofjourney = date;
        strcpy(sex, s);
        phone = ph;
        strcpy(email, mail);
    }

    int retdate()
    {
        return dateofjourney;
    }

    char *retname()
    {
        return pname;
    }

    char *ret1()
    {
        return email;
    }

    friend void pdetails(int i);

    char *emailid()
    {
        return email;
    }

    ~passengerdetails()
    {}
} p[20];

void passengerdetails::passengerdetails1()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        pname[i] = 0;
        sex[i] = 0;
        email[i] = 0;
    }
    age = 0;
    phone = 0;
}

class access
{
private:
    char username[20];
    char password[20];
public:
    void access2();

    void access2(char uname[], char pword[])
    {
        strcpy(username, uname);
        strcpy(password, pword);
    }

    char *userret()
    {
        return username;
    }

    char *passret()
    {
        return password;
    }

    ~access()
    {}
} acc[10];

void access::access2()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        username[i] = 0;
        password[i] = 0;
    }
}

void fdetails(int i)
{
    cout << " Flight Name:" << fd[i].fname << "\t\t FlightNo:" << fd[i].flight_no << "\n\n\t Flight Duration:"
         << fd[i].flightduration << "\t Flight Status:" << fd[i].status << "\n\n\t Departure Time:" << fd[i].dept_time
         << "\t Arrival Time:" << fd[i].arr_time << "\n\n\t Ticket Fare:Rs" << fd[i].fare << "\t\t Service Tax:"
         << fd[i].service_tax << "\n\n\t Total Fare:" << fd[i].totalfare << "\n";
}

void pdetails(int i)
{
    cout << "\t Passenger Name:" << p[i].pname << "\t Age:" << p[i].age << "\n\n\t Sex:" << p[i].sex << "\t Phone:"
         << p[i].phone << "\n\n\t Email:" << p[i].email << "\t Date Of Journey:" << p[i].dateofjourney << "\n";
}

void print(int n)
{
    cout << "\t  " << air[n].flightname << "\t\t" << air[n].dept_loc << "\t\t" << air[n].arr_loc << "\n";
}

void print(int i, int j)
{
    cout << "\t   " << air[i].book[j].no_seats << "\t\t     " << air[i].flightname << "\t\t" << air[i].dept_loc
         << "\t\t" << air[i].arr_loc << "\t\n";
}

void airline::search(char s[], char d[])
{
    int i;
    if (strcmp(s, air[i].dept_loc) == 0)
    {
        if (strcmp(d, air[i].arr_loc) == 0)
        {
            air[i].c = 1;
            print(i);
            count = 1;
        }
    }
}

void help()
{

    cout << "\n\t\t\t HELP MENU";
    cout << "\n\t\t\t **********";
    cout << "\n       Ticket Booking:";
    cout << "\n    -> The first letter of Source,Destination and Flight Name must be in Caps";
    cout << "\n    -> Enter the date in d/m/yyyy format ";
}

void help1()
{

    cout << "\n\t\t\t HELP MENU";
    cout << "\n\t\t\t **********";
    cout << "\n       Ticket Cancellation :";
    cout << "\n    -> Enter the details of the ticket you want to cancel properly";
    cout << "\n    -> The first letter of Source,Destination and Flight Name must be in Caps";
    cout << "\n    -> Enter the only day part of the date";
    cout << "\n    -> Your ticket will be cancelled and the fare will be refunded";

}

void help2()
{

    cout << "\n\t\t\t HELP MENU";
    cout << "\n\t\t\t **********";
    cout << "\n       Ticket Confirmation:";
    cout << "\n    -> Enter the details of the ticket you want to confirm";
    cout << "\n    -> The first letter of Source,Destination and Flight Name must be in Caps";
    cout << "\n    -> Enter the only day part of the date";
    cout << "\n    -> The details of your ticket will be displayed";
}

void confirmation()
{
    //-------SEARCHING A PASSENGER'S RECORD------//
    char name[20], mail1[20], fname[20], fname1[20], source[20], dest[20];
    int found = 0, i, j, r, update1;
    int in;
    con:
    cout << "\n\t\t TICKET CONFIRMATION";
    cout << "\n\t 1)Confirm Ticket\n\t 2)Help";
    cout << "\n\t Enter your choice:";
    cin >> in;
    switch (in)
    {
        case 1:
            break;
        case 2:
            help2();
            break;
        default:
            cout << "\n\t Invalid Option";
            goto con;
    }
    cout << "\n\t Enter the following details";
    cout << "\n\t Enter your Name:";
    cin >> name;
    cout << "\n\t Enter your Flightname:";
    cin >> fname;
    cout << "\n\t Enter your Source:";
    cin >> source;
    cout << "\n\t Enter your Destination:";
    cin >> dest;
    cout << "\n\t Enter Email-ID:";
    cin >> mail1;
    fstream f4, f5;
    f4.open("PASSENGER.DAT", ios::in | ios::out | ios::binary);
    f4.seekg(0, ios::beg);
    for (update = 0; update < tot_no_rec; update++)
    {
        if (strcmp(fname, air[update].ret()) == 0 && strcmp(air[update].rets(), source) == 0 &&
            strcmp(air[update].retd(), dest) == 0)
        {
            i = update;
        }
    }
    update = 0;
    while (f4.read((char *) &p[update], sizeof(p[update])))
    {
        if (strcmp(fname, air[update].ret()) == 0 && strcmp(air[update].rets(), source) == 0 &&
            strcmp(air[update].retd(), dest) == 0 && strcmp(name, p[update].retname()) == 0 &&
            strcmp(mail1, p[update].ret1()) == 0)
        {
            found = 1;
            cout << "\n\t Passenger record found";
            if (found)
                pdetails(update);
            cout << "\n\t";
            fdetails(i);
            break;
        }
    }
    if (found == 1 && p[update].ret == 1 && strcmp(name, p[update].retname()) == 0 &&
        strcmp(mail1, p[update].ret1()) == 0)
    {
        r = update;
        cout << "\n\t Passenger has return ticket";
        char t[20];
        strcpy(t, source);
        strcpy(source, dest);
        strcpy(dest, t);
        cout << "\n\t Enter your Return Flight Name:";
        cin >> fname1;
    }
    if (found == 1)
    {
        for (update1 = 0; update1 < tot_no_rec; update1++)
        {
            if (strcmp(name, p[r].retname()) == 0 && strcmp(mail1, p[r].ret1()) == 0 &&
                strcmp(fname1, air[update1].ret()) == 0 && strcmp(air[update1].rets(), source) == 0 &&
                strcmp(air[update1].retd(), dest) == 0)
            {
                j = update1;
                break;
            }
        }
    }
    if (found == 1)
    {
        cout << "\n\t RETURN TICKET" << "\n";
        pdetails(update);
        cout << "\n\t";
        fdetails(j);
    }
    f4.close();
    if (found == 0)
        cout << "\n\t Passenger record not found";
}

void cancellation()
{

    //----------DELETING A PASSENGER'S RECORD----------//
    int in;
    can:
    cout << "\n\t\t CANCELLATION";
    cout << "\n\t 1)Cancel\n\t 2)Help";
    cout << "\n\t Enter your choice:";
    cin >> in;
    switch (in)
    {
        case 1:
            break;
        case 2:
            help1();
            break;
        default:
            cout << "\n\t Invalid Option";
            goto can;
    }
    int i, j, r, update1 = 0;
    int date, date1;
    char name[20], fname[20], fname1[20], source[20], dest[20], email[20];
    fstream file33;
    fstream file44;
    passengerdetails temp[20];
    int found = 0;
    update = 0;
    cout << "\n\t Enter the following detail for cancellation";
    cout << "\n\t Enter your Name:";
    cin >> name;
    cout << "\n\t Enter your Flightname:";
    cin >> fname;
    cout << "\n\t Enter your Source:";
    cin >> source;
    cout << "\n\t Enter your Destination:";
    cin >> dest;
    cout << "\n\t Enter your Email-Id:";
    cin >> email;
    file33.open("PASSENGER.DAT", ios::in | ios::binary | ios::out);
    file44.open("NEW.DAT", ios::in | ios::binary | ios::out);
    while (file33.read((char *) &temp[update], sizeof(temp[update])))
    {
        if (strcmp(name, temp[update].retname()) == 0 && strcmp(email, temp[update].ret1()) == 0)
        {
            found = 1;
            cout << "\n\t Passenger Record found";
            if (temp[update].ret == 1)
            {
                r = temp[update].ret;
                cout << "\n\t Passenger has a return ticket";
            }
            else;
            break;
        }
    }
    update = 0;
    if (found == 1)
    {
        while (file33.read((char *) &temp[update], sizeof(temp[update])))
        {
            if (/*strcmp(name,temp[update1].retname())!=0 ||*/ strcmp(email, temp[update1].ret1()) != 0)
            {
                cout << "writing...";
                file44.write((char *) &temp[update], sizeof(temp[update]));
            }
            else;
        }
        file33.close();
        file44.close();
        fstream file34;
        fstream file45;
        update1 = 0;
        file45.open("NEW.DAT", ios::in | ios::out | ios::binary);
        file34.open("PASSENGER.DAT", ios::in | ios::out | ios::binary | ios::trunc);
        file45.seekg(0);
        while (file45.read((char *) &temp[update1], sizeof(temp[update1])))
        {
            cout << "\n writing into passenger.dat....";
            file34.write((char *) &temp[update1], sizeof(temp[update1]));

        }
        file34.close();
        file45.close();
        i = 0;
        file34.open("PASSENGER.DAT", ios::in | ios::out | ios::binary);
        while (file34.read((char *) &temp[i], sizeof(temp[i])))
        {
            pdetails(i);
            //	i++;
        }
        file34.close();
        fstream file1;
        fstream file2;
        for (i = 0; i < tot_no_rec; i++)
        {
            if (strcmp(air[i].ret(), fname) == 0 && strcmp(air[i].rets(), source) == 0 &&
                strcmp(air[i].retd(), dest) == 0)
            {
                cout << "\n\t Enter the date of your journey:";
                cin >> date;
                air[i].book[date - 1].increment();
                cout << "\n\t Your Ticket has been Cancelled";
                cout << "\n\t You will get your refund shortly";
            }
        }
        if (r == 1)
        {
            //		fstream file36;
            //	update1=0;
            //		file36.seekg(0);
            //	file36.open("PASSENGER.DAT",ios::in|ios::binary|ios::out);
            //		while(file36.read((char *) &temp[update1],sizeof(temp[update1])))
            //		{
            //	if(temp[update1].ret==1)
            //	{
            char t[20];
            strcpy(t, source);
            strcpy(source, dest);
            strcpy(dest, t);
            cout << "\n\t Enter your Return Flight Name:";
            cin >> fname1;
            for (i = 0; i < tot_no_rec; i++)
            {
                if (strcmp(air[i].ret(), fname1) == 0 && strcmp(air[i].rets(), source) == 0 &&
                    strcmp(air[i].retd(), dest) == 0)
                {
                    cout << "\n\t Enter the date of your Return journey:";
                    cin >> date1;
                    air[i].book[date1 - 1].increment();
                    cout << "\n\t Your Return Ticket has also been Cancelled\n\t";
                    cout << "\n\t You will get your refund shortly";
                }
            }
            //	}
            //	file36.close();
        }
        file2.open("BOOKING.DAT", ios::in | ios::out | ios::binary);
        file1.open("AIRLINE.DAT", ios::in | ios::out | ios::binary);
        for (i = 0; i < tot_no_rec; i++)
        {
            file1.write((char *) &air[i], sizeof(air[i]));
            for (j = 0; j < 30; j++)
            {
                file2.write((char *) &air[i].book[j], sizeof(air[i].book[j]));
            }

        }
        file1.close();
        file2.close();
    }
    else if (found == 0)
    {
        cout << "\n\t Passenger Record not found";
        file33.close();
        file44.close();
    }
}


int main()
{
    int b, j, n1, e, r, r1, r2, r3, d, m, y, d1, m1, y1, d2, m2, y2;
    int count1, update1, update2, ch5, k, v = 0, w, q, o;
    char username[10], password[10], usname[10], pass[10], pass1[10];
    char c2;
    cout << string(100, '\n');
    cout << "\n\n\n\t\t\t www.vinsanbookings.com\n";
    fstream file70, file71, file72;
    st4:
    cout << "\n\t 1)Sign in";
    cout << "\n\t 2)Dont have an account an account?Sign up\n\t Enter your choice:";
    cin >> ch5;
    if (ch5 == 1)
    {
        st8:
        cout << "\n\t\t\t Enter User Name:";
        cin >> username;
        cout << "\n\t\t\t Enter password:";
        k = 0;
        while ((c2 = cin.get()) != '\n')
        {
            if (c2 != '\b')
            {
                password[k] = c2;
                cout << "*";
                k++;
            }
            else
            {
                if (k != 0)
                {
                    k--;
                    cout << "\b \b";
                }
            }
        }
        password[k] = '\0';
        file70.open("ACCESS.DAT", ios::in | ios::binary);
        w = 0;
        file70.seekg(0);
        while (file70.read((char *) &acc[w], sizeof(acc[w])))
        {
            if (strcmp(username, acc[w].userret()) == 0 && strcmp(password, acc[w].passret()) == 0)
            {
                cout << "\n\n\t\t\t Correct Username and Password";
                goto st7;
            }
            else
            {
                cout << string(100, '\n');
                cout << "\n\n\t\t\t Invalid Username or Password";
                username[0] = '\0';
                password[0] = '\0';
                goto st8;
            }
        }
    }
    else if (ch5 == 2)
    {
        st6:
        cout << "\n\t SIGN UP";
        cout << "\n\t --------";
        cout << "\n\t Enter the following details";
        //	cout<<"\n\t Enter your name:";
        //	cin>>nm;
        cout << "\n\t Enter your Username:";
        cin >> usname;
        cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
        cout << "\n\t Enter your Password:";
        k = 0;
        while ((c2 = cin.get()) != '\n')
        {
            if (c2 != '\b')
            {
                pass[k] = c2;
                cout << "*";
                k++;
            }
            else
            {
                if (k != 0)
                {
                    k--;
                    cout << "\b \b";
                }
            }
        }
        pass[k] = '\0';
        cout << "\n\t Confirm Password:";
        k = 0;
        while ((c2 = cin.get()) != '\n')
        {
            if (c2 != '\b')
            {
                pass1[k] = c2;
                cout << "*";
                k++;
            }
            else
            {
                if (k != 0)
                {
                    k--;
                    cout << "\b \b";
                }
            }
        }
        pass1[k] = '\0';
        file71.open("ACCESS.DAT", ios::in | ios::binary);
        q = 0;
        file71.seekg(0);
        while (file71.read((char *) &acc[q], sizeof(acc[q])))
        {
            if (strcmp(usname, acc[q].userret()) == 0)
            {
                cout << "\n\t Username already exists";
                goto st6;
            }
            else;
        }
        file71.close();
        file72.open("ACCESS.DAT", ios::in | ios::out | ios::app | ios::ate | ios::binary);
        while (file72.read((char *) &acc[v], sizeof(acc[v])))
        {
            v++;
        }
        if (strcmp(pass, pass1) == 0)
        {
            for (o = v; o < 10; o++)
            {
                cout << "\n\t Your Account has been created";
                acc[o].access::access2();
                acc[o].access::access2(usname, pass);
                file72.write((char *) &acc[o], sizeof(acc[o]));
                goto st4;
            }
        }
        else
        {
            cout << "\n\t Passwords do not match!!!";
            goto st6;
        }
    }
    file70.close();
    file72.close();
    st7:
    cout << "\n\n\n\t\t\t Loading....Please Wait";
    sleep(3);
    cout << string(100, '\n');
    cout << "\n\n\t Welcome";
    sleep(1);
    cout << " to";
    sleep(1);
    cout << " vinsanbookings.com\n\n\t";
    cout << " Your Online Partner for Booking Flight Tickets\n";
    sleep(1);
    char s[20], s1[20], s2[20], s3[10], s4[20], s5[20], s6[20], s7[20];
    float s8, s9;
    int i, choice, choice2, choice3, n, ch, mainch;                 //10 is the number of ppl
    long int a[10], ph[10];
    char name[10][30], sx[10][10], mail[10][30];
    flightdetails t1, t2;
    passengerdetails pd1, pd2;
    main1();
    stmain:
    while (1)
    {
        //	textcolor(BLUE);
        //	textbackground(WHITE);
        //gotoxy(9, 5);
        //highvideo();
        printf("\n\n\n\t ##############################################");
        //gotoxy(9, 8);
        //highvideo();
        printf("\n\n\t 1)Ticket Booking\t 2)Ticket Cancellation");
        //gotoxy(9, 10);
        // highvideo();
        printf("\n\t 3)Ticket Confirmation\t 4)Help for booking");
        //gotoxy(9, 11);
        //highvideo();
        printf("\n\t 5)Exit");
        //gotoxy(9, 12);
        //highvideo();
        printf("\n\n\t ##############################################");
        //gotoxy(9, 14);
        //highvideo();
        printf("\n\n\t Enter your choice:");
        cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
        cin >> mainch;
        switch (mainch)
        {
            case 1:
                break;
            case 2:
                cancellation();
                break;
            case 3:
                confirmation();
                break;
            case 4:
                help();
                break;
            case 5:
                exit(0);
            default:
                cout << "\n\t Invalid Option...";
        }
        if (mainch == 1)
            break;
    }
    fstream f, f1, f2, f33, f4, f5, f6, f7, f8, f9, f30, f31;
    st:
    cout << "\n\n\t 1)International Booking\n\n\t 2)Domestic Booking\n\n\t Enter your choice:";
    cin >> ch;
    switch (ch)
    {
        case 1:
            f.open("dep1.txt", ios::in);
            f1.open("arr1.txt", ios::in);
            f2.open("fli1.txt", ios::in);
            f33.open("flightno1.txt", ios::in);
            f4.open("fdur1.txt", ios::in);
            f5.open("status1.txt", ios::in);
            f6.open("dep_time1.txt", ios::in);
            f7.open("arr_time1.txt", ios::in);
        st5:
            cout << "\n\t Select your class\n\t 1.Business class\n\n\t 2.Economy class\n\n\t Enter your choice:";
            cin >> choice3;
            if (choice3 == 1)
            {
                f30.open("fare_business.txt", ios::in);
                f31.open("ser_taxbusiness.txt", ios::in);
            }
            else if (choice3 == 2)
            {
                f8.open("fare_economy.txt", ios::in);
                f9.open("ser_taxeco.txt", ios::in);
            }
            else
            {
                cout << "\n\t Invalid choice";
                goto st5;
            }
            break;
        case 2:
            f.open("dep.txt", ios::in);
            f1.open("arr.txt", ios::in);
            f2.open("fli.txt", ios::in);
            f33.open("flightno.txt", ios::in);
            f4.open("fdur.txt", ios::in);
            f5.open("status.txt", ios::in);
            f6.open("dep_time.txt", ios::in);
            f7.open("arr_time.txt", ios::in);
        st3:
            cout << "\n\t Select your class\n\t 1.Business class\n\n\t 2.Economy class\n\n\t Enter your choice:";
            cin >> choice3;
            if (choice3 == 1)
            {
                f30.open("fare_business.txt", ios::in);
                f31.open("ser_taxbusiness.txt", ios::in);
            }
            else if (choice3 == 2)
            {
                f8.open("fare_economy.txt", ios::in);
                f9.open("ser_taxeco.txt", ios::in);
            }
            else
            {
                cout << "\n\t Invalid choice";
                goto st3;
            }
            break;
        default:
            cout << "\n\t Invalid Number.Enter again";
            goto st;
    }
    while (f2.getline(s, 20))
    {
        f.getline(s1, 20);
        f1.getline(s2, 20);
        f33.getline(s3, 10);
        f4.getline(s4, 20);
        f5.getline(s5, 20);
        f6.getline(s6, 20);
        f7.getline(s7, 20);
        if (choice3 == 1)
        {
            f30 >> s8;
            f31 >> s9;
            fd[tot_no_rec1++].get1(s, s3, s4, s5, s6, s7, s8, s9);
            air[tot_no_rec++].get(s, s1, s2);
        }
        else if (choice3 == 2)
        {
            f8 >> s8;
            f9 >> s9;
            fd[tot_no_rec1++].get1(s, s3, s4, s5, s6, s7, s8, s9);
            air[tot_no_rec++].get(s, s1, s2);
        }
    }
    update = 0;
    f.close();
    f1.close();
    f2.close();
    fstream f3;
    f3.open("PASSENGER.DAT", ios::in | ios::binary);
    f3.seekg(0, ios::beg);
    {
        while (f3.read((char *) &p[update], sizeof(p[update])))
        {
            pdetails(update);
            update++;
        }
    }
    f3.close();
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 30; j++)
        {
            air[i].book[j].get(j);
        }
    }
    fstream file;
    fstream file2;
    file2.open("BOOKING.DAT", ios::in | ios::binary | ios::out);
    file.open("AIRLINE.DAT", ios::in | ios::binary | ios::out);
    i = 0;
    file.seekg(0);
    file2.seekg(0);
    while (file.read((char *) &air[i], sizeof(air[i])))
    {
        for (j = 0; j < 30; j++)
        {
            file2.read((char *) &air[i].book[j], sizeof(air[i].book[j]));
        }
        i++;
    }
    file.close();
    file2.close();
    cout << "\n\t SEATS\t\t     " << "FLIGHT NAME" << "\t" << "DEPARTURE" << "\t" << "ARRIVAL" << "\t" << "\n";
    for (i = 0; i < tot_no_rec; i++)
    {
        j = 0;
        print(i, j);
        j++;
    }
    f.close();
    f1.close();
    f2.close();
    d = 1;
    m = 1;
    y = 2017;
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 30; j++)
        {
            air[i].book[j].getdate(d, m, y);
        }
    }
    char source[20], destination[20], fname[50];
    int day_dept, decision, choice1;
    start:
    cout << "\n\t Press\n\t 1.One-way flight\n\t 2.Return.\n\t Enter your choice:";
    cin >> choice1;
    if (choice1 == 1 || choice1 == 2)
    {
        cout << "\n\t Enter no of people:";
        cin >> n;
        tot_p_rec = n;
        if (n == 0 || n < 0)
        {
            cout << "\n\t No tickets will be booked";
            while (1)
            {
                cout << "\n\t Do you want to exit?\n\t Press [1 for yes]|[0 for no]";
                cin >> decision;
                switch (decision)
                {
                    case 0:
                        goto start;
                    case 1:
                        exit(1);
                    default:
                        cout << "\n\t Invalid option.Try Again";
                }
            }
        }
        else if (n > 0)
        {
            cout << "\n\t Enter the passenger details:";
            for (i = 0; i < n; i++)
            {
                cout << "\n\n\t Passenger" << i + 1 << ":";
                cout << "\n\n\t Name:";
                cin.get();
                cin.getline(name[i], 30);
                cout << "\n\t Age:";
                cin >> a[i];
                cin.get();
                cout << "\n\t Sex:";
                cin >> sx[i];
                cout << "\n\t Phone:";
                cin.get();
                cin >> ph[i];
                cout << "\n\t Email ID:";
                cin.get();
                cin >> mail[i];
                /*	fstream f34;
					f34.open("PASSENGER.DAT",ios::in|ios::binary);
					while(f34.read((char *) &p[update],sizeof(p[update])))
					{
						if(strcmp(mail[i],p[update].emailid())==0)
						{
							cout<<"\n\t Email ID already exists.\n\t Please type another E-mail ID:";
							cin>>mail[i];
							update=0;
						}
						else if(strcmp(mail[i],p[update].emailid())!=0)
						{
							update++;
						}
					}
					f34.close(); */
            }
        }
        cout << "\n\t Enter your Source:";
        cin.get();
        cin >> source;
        cout << "\n\t Enter your Destination:";
        cin.get();
        cin >> destination;
        cout << "\n\t Searching for Available Flights.\n\n\t This may just take a moment......" << "\n";
        sleep(3);
        for (i = 0; i < tot_no_rec; i++)
        {
            air[i].search(source, destination);
        }

        if (count == 1)
        {
            start4:
            cout << "\n\t Book Tickets?Press [1 for yes]|[0 for no].\n\n\t Enter your choice:";
            cin.get();
            cin >> b;
            switch (b)
            {
                start2:
                case 1:
                    cout << "\n\t Enter a flight name from the above:";
                    cin.get();
                    cin.getline(fname, 50);
                    for (i = 0; i < tot_no_rec; i++)
                    {
                        if (air[i].c == 1)
                            if (strcmp(fname, air[i].ret()) == 0)
                            {
                                st1:
                                cout << "\n\t Enter your Departure date:";
                                cin >> d1 >> m1 >> y1;
                                if ((d1 < d && m1 == m) || m1 < m || y1 < y || y1 > y)
                                {
                                    cout << "\n\t Invalid Date.Cannot book.Choose another date";
                                    goto st1;
                                }
                                air[i].temp.getdate(d1, m1, y1);
                                air[i].book[i] += air[i].temp;
                                r = air[i].book[d1 - 1].decrement(n);
                                if (r == 1)
                                {
                                    cout << "\n\t Please wait while your ticket is being booked......";
                                    sleep(3);
                                    cout << "\n\n\t Ticket booked";
                                    cout << "\n\n";
                                    print(i, d1 - 1);
                                }
                                else if (r == 2)
                                {
                                    print(i, d1 - 1);
                                }
                                else if (r == 3)
                                {
                                    goto start2;
                                }
                                else if (r == 0)
                                {
                                    cout << "\n\t No seats available.Choose another flight";
                                    goto start2;
                                }
                            }
                    }
                    /*	if(strcmp(fname,air[i].ret())!=0)
						{
								cout<<"\n\t Invalid flightname";
								goto start2;
						}    */
                    break;
                case 0:
                    cout << "\n\t Booking cancelled";
                    break;
                default:
                    cout << "\n\t Invalid Option";
                    goto start4;
            }
            fstream file40;
            count = 0;
            file40.open("FLIGHT.DAT", ios::in | ios::out | ios::app | ios::ate);
            for (i = 0; i < tot_no_rec; i++)
            {
                if (strcmp(fname, air[i].ret()) == 0 && strcmp(air[i].rets(), source) == 0 &&
                    strcmp(air[i].retd(), destination) == 0)
                {
                    file40.write((char *) &fd[i], sizeof(fd[i]));
                    update1 = i;
                }
            }
            file40.close();
            /*	start1:
			cout<<"\n\t Book Some more tickets?\n\t Press [1 for yes]|[0 for no]\n\t Enter your choice:";
			cin.get();
			cin>>choice;
			switch(choice)
			{
				case 0:break;
				case 1:goto start;
				default:cout<<"\n\t Invalid Option";
					goto start1;
			 } */
            fstream file1;
            fstream file2;
            file2.open("BOOKING.DAT", ios::in | ios::out | ios::binary);
            file1.open("AIRLINE.DAT", ios::in | ios::out | ios::binary);
            for (i = 0; i < tot_no_rec; i++)
            {
                file1.write((char *) &air[i], sizeof(air[i]));
                for (j = 0; j < 30; j++)
                {
                    file2.write((char *) &air[i].book[j], sizeof(air[i].book[j]));
                }
            }
            file1.close();
            file2.close();
            if (b == 1)
            {
                fstream file;
                fstream file20;
                file.open("PASSENGER.DAT", ios::in | ios::out | ios::app | ios::ate);
                file20.open("FLIGHT.DAT", ios::in);
                char ch;
                j = 0;
                for (i = update; i < (tot_p_rec + update); i++)
                {
                    if (choice1 == 2)
                        p[i].ret = 1;
                    else
                        p[i].ret = 0;
                    p[i].passengerdetails::passengerdetails1();
                    p[i].passengerdetails::passengerdetails1(name[j], a[j], d1, sx[j], ph[j], mail[j]);
                    cin.get(ch);
                    file.write((char *) &p[i], sizeof(p[i]));
                    j++;
                }
                file.seekg(0);
                count1 = 0;
                start5:
                cout << "\n\t View ticket?\n\t Press [1 for yes]|[0 for no].\n\t Enter your choice:";
                cin >> n1;
                switch (n1)
                {
                    case 0:
                        break;
                    case 1:
                        if (n == 1)
                        {
                            while (file.read((char *) &pd1, sizeof(pd1)))
                            {
                                count1++;
                            }
                            cout << "\n";
                            pdetails(count1 - 1);
                            cout << "\n\t";
                            fdetails(update1);
                        }
                        else if (n > 1)
                        {
                            while (file.read((char *) &pd1, sizeof(pd1)))
                            {
                                count1++;
                            }
                            if (count1 > 1)
                            {
                                r2 = count1;
                                count1 = count1 - n;
                                while (count1 != r2)
                                {
                                    cout << "\n";
                                    pdetails(count1);
                                    cout << "\n\t";
                                    fdetails(update1);
                                    count1++;
                                }
                            }
                        }
                        else if (count1 == 1)
                        {
                            r2 = count1;
                            while (r2 != n + 1)
                            {
                                cout << "\n";
                                pdetails(r2);
                                cout << "\n\t";
                                fdetails(update1);
                                r2++;
                            }
                        }
                        else if (count1 == 0)
                        {
                            r2 = count1;
                            while (r2 != n)
                            {
                                cout << "\n";
                                pdetails(r2);
                                cout << "\n\t";
                                fdetails(update1);
                                r2++;
                            }
                        }
                        file.close();
                        file20.close();
                        break;
                    default:
                        cout << "\n\t Invalid Option.Try Again";
                        goto start5;
                }
            }
        }
        else
            cout << "\n\t No flights avialable";
    }
    else
    {
        cout << "\n\t Invalid option";
        goto start;
    }
    if (choice1 == 2 && b == 1)
    {
        start12:
        cout << "\n\t Book Return Ticket?[1 for yes|0 for no]\n\t Enter your choice:";
        cin >> choice2;
        if (choice2 == 1)
        {
            cout << "\n\t Return Booking";
            cout << "\n\t --------------\n\t";
            char temp[20];
            strcpy(temp, source);
            strcpy(source, destination);
            strcpy(destination, temp);
            count = 0;
            for (i = 0; i < tot_no_rec; i++)
            {
                air[i].c = 0;
            }
            cout << "\n\t Searching for Available Flights.\n\n\t This may just take a moment......" << "\n";
            sleep(3000);
            for (i = 0; i < tot_no_rec; i++)
            {
                air[i].search(source, destination);
            }

            int b2, day_dept1;
            char fname2[50];
            if (count == 1)
            {
                start13:
                cout << "\n\t Book Tickets?Press [1 for yes]|[0 for no].\n\n\t Enter your choice:";
                cin.get();
                cin >> b2;
                if (b2 == 1)
                {
                    start14:
                    cout << "\n\t Enter a flight name from the above:";
                    cin.get();
                    cin >> fname2;
                    for (i = 0; i < tot_no_rec; i++)
                    {
                        if (air[i].c == 1)
                            if (strcmp(fname2, air[i].ret()) == 0)
                            {
                                st2:
                                cout << "\n\t Enter your Departure date for Return Flight:";
                                cin >> d2 >> m2 >> y2;
                                if ((d2 < d && m2 == m) || m2 < m || y2 < y || y2 > y)
                                {
                                    cout << "\n\t Invalid Date.Cannot book.Choose another date";
                                    goto st2;
                                }
                                air[i].temp1.getdate(d2, m2, y2);
                                air[i].book[i] += air[i].temp1;
                                r1 = air[i].book[d2 - 1].decrement(n);
                                if (r1 == 1)
                                {
                                    cout << "\n\t Please wait while your ticket is being booked......";
                                    sleep(3);
                                    cout << "\n\n\t Ticket booked";
                                    cout << "\n\n";
                                    print(i, d2 - 1);
                                }
                                else if (r1 == 0)
                                {
                                    cout << "\n\t No seats available.Choose another flight";
                                    goto start14;
                                }
                            }
                    }
                    /*        else  if(strcmp(fname,air[i].ret())!=0)
						  {
							cout<<"\n\t Invalid flightname";
							goto start2;
						  } */
                }
                else if (b2 == 0)
                {
                    cout << "\n\t Booking cancelled";
                }
                else
                {
                    cout << "\n\t Invalid Option";
                    goto start13;
                }
                if (b2 == 1)
                {
                    fstream file41;
                    file41.open("FD.DAT", ios::in | ios::out | ios::app | ios::ate | ios::binary);
                    for (i = 0; i < tot_no_rec; i++)
                    {
                        if (strcmp(fname2, air[i].ret()) == 0 && strcmp(source, air[i].rets()) == 0 &&
                            strcmp(destination, air[i].retd()) == 0)
                        {
                            file41.write((char *) &fd[i], sizeof(fd[i]));
                            update = i;
                        }
                    }
                    file41.close();
                    fstream file1;
                    fstream file50;
                    file1.open("PASSENGER.DAT", ios::in | ios::out | ios::app | ios::ate);
                    file50.open("FD.DAT", ios::in);
                    char ch;
                    int l = 0;
                    for (i = update; i < (tot_p_rec + update); i++)
                    {
                        p[i].passengerdetails::passengerdetails1();
                        p[i].passengerdetails::passengerdetails1(name[l], a[l], d2, sx[l], ph[l], mail[l]);
                        cin.get(ch);
                        file1.write((char *) &p[i], sizeof(p[i]));
                        l++;
                    }
                    file1.seekg(0);
                    file50.seekg(0);
                    count = 0;
                    int n2;
                    start15:
                    cout << "\n\t View ticket?\n\t Press [1 for yes]|[0 for no].\n\t Enter your choice:";
                    cin >> n2;
                    switch (n2)
                    {
                        case 0:
                            break;
                        case 1:
                            if (n == 1)
                            {
                                cout << "\n";
                                pdetails(count1 - 1);
                                cout << "\n\t";
                                fdetails(update);
                            }
                            else if (n > 1)
                            {
                                count1 = 0;
                                while (file1.read((char *) &pd1, sizeof(pd1)))
                                {
                                    count1++;
                                }
                                if (count1 > 1)
                                {
                                    r3 = count1;
                                    count1 = count1 - n;
                                    while (count1 != r3)
                                    {
                                        cout << "\n";
                                        pdetails(count1);
                                        cout << "\n\t";
                                        fdetails(update);
                                        count1++;
                                    }
                                }
                                else if (count1 == 1)
                                {
                                    r3 = count1;
                                    while (r3 != n + 1)
                                    {
                                        cout << "\n";
                                        pdetails(r3);
                                        cout << "\n\t";
                                        fdetails(update);
                                        r3++;
                                    }
                                }
                                else if (count1 == 0)
                                {
                                    r3 = count1;
                                    while (r3 != n)
                                    {
                                        cout << "\n";
                                        pdetails(r3);
                                        cout << "\n\t";
                                        fdetails(update);
                                        r3++;
                                    }
                                }
                            }
                            file1.close();
                            file50.close();
                            break;
                        default:
                            cout << "\n\t Invalid Option.Try Again";
                            goto start15;
                    }
                }
            }
            else
                cout << "\n\t No flights available";
        }
        else if (choice2 == 0)
            cout << "\n\t Return booking cancelled";
        else
        {
            cout << "\n\t Invalid Option";
            goto start12;
        }
    }
    cout << "\n\t THANK YOU FOR USING OUR SERVICES.\n\t WE WISH YOU A HAPPY AND SAFE JOURNEY";
    goto stmain;
}
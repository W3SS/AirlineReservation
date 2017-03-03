#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

void main1()
{
    fstream f("dep.txt", ios::out);
    f << "Chennai" << "\n";
    f << "Chennai" << "\n";
    f << "Chennai" << "\n";
    f << "Chennai" << "\n";
    f << "Chennai" << "\n";
    f << "Chennai" << "\n";
    f << "Mumbai" << "\n";
    f << "Mumbai" << "\n";
    f << "Mumbai" << "\n";
    f << "Mumbai" << "\n";
    f << "Kolkata" << "\n";
    f << "Kolkata" << "\n";
    f << "Kolkata" << "\n";
    f << "Delhi" << "\n";
    f << "Hydrabad" << "\n";
    f << "Hydrabad" << "\n";
    f << "Pune" << "\n";
    f << "Pune" << "\n";
    f << "Pune" << "\n";
    f.close();

    fstream f1("arr.txt", ios::out);
    f1 << "Mumbai" << "\n";
    f1 << "Mumbai" << "\n";
    f1 << "Mumbai" << "\n";
    f1 << "Kolkata" << "\n";
    f1 << "Kolkata" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Chennai" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Kolkata" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Mumbai" << "\n";
    f1 << "Chennai" << "\n";
    f1 << "Delhi" << "\n";
    f1 << "Goa" << "\n";
    f1 << "Hydrabad" << "\n";
    f1 << "Goa" << "\n";
    f1 << "Banglore" << "\n";


    f1.close();

    fstream f2("fli.txt", ios::out);
    f2 << "JetAirways" << "\n";
    f2 << "AirIndia" << "\n";
    f2 << "IndigoAir" << "\n";
    f2 << "JetKonnect" << "\n";
    f2 << "Spicejet" << "\n";
    f2 << "Kingfisher" << "\n";
    f2 << "JetAirways" << "\n";
    f2 << "AirIndia" << "\n";
    f2 << "IndigoAir" << "\n";
    f2 << "JetKonnect" << "\n";
    f2 << "Spicejet" << "\n";
    f2 << "JetKonnect" << "\n";
    f2 << "Spicejet" << "\n";
    f2 << "Kingfisher" << "\n";
    f2 << "JetLite" << "\n";
    f2 << "KingfisherRed" << "\n";
    f2 << "KingfisherRed" << "\n";
    f2 << "KingfisherClass" << "\n";
    f2 << "GoAir" << "\n";
    f2.close();


    fstream f4("flightno.txt", ios::out);
    f4 << "JA-321" << "\n";
    f4 << "AI-800" << "\n";
    f4 << "IA-644" << "\n";
    f4 << "JK-779" << "\n";
    f4 << "SJ-349" << "\n";
    f4 << "KF-661" << "\n";
    f4 << "JA-900" << "\n";
    f4 << "AI-281" << "\n";
    f4 << "IA-949" << "\n";
    f4 << "JK-200" << "\n";
    f4 << "SJ-251" << "\n";
    f4 << "JK-584" << "\n";
    f4 << "SJ-333" << "\n";
    f4 << "KF-212" << "\n";
    f4 << "JL-512" << "\n";
    f4 << "IT-3412" << "\n";
    f4 << "IT-3410" << "\n";
    f4 << "IT-203" << "\n";
    f4 << "G8-368" << "\n";
    f4.close();


    fstream f5("fdur.txt", ios::out);
    f5 << "3 hours" << "\n";
    f5 << "2 hours 30 mins" << "\n";
    f5 << "3 hours" << "\n";
    f5 << "2 hours 15 mins" << "\n";
    f5 << "3 hours 30 mins" << "\n";
    f5 << "2 hours 45 mins" << "\n";
    f5 << "1 hours 45 mins" << "\n";
    f5 << "3 hours 35 mins" << "\n";
    f5 << "3 hours" << "\n";
    f5 << "2 hours 55 mins" << "\n";
    f5 << "2 hours 10 mins" << "\n";
    f5 << "3 hours 16 mins" << "\n";
    f5 << "1 hours 35 mins" << "\n";
    f5 << "3 hours 55 mins" << "\n";
    f5 << "2 hours 30 mins" << "\n";
    f5 << "3 hours 55 mins" << "\n";
    f5 << "1 hours 45 mins" << "\n";
    f5 << "4 hours 15 mins" << "\n";
    f5 << "3 hours 55 mins" << "\n";

    f5.close();

    fstream f6("status.txt", ios::out);
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";
    f6 << "scheduled" << "\n";


    f6.close();

    fstream f7("dep_time.txt", ios::out);
    f7 << "18:00 PM" << "\n";
    f7 << "4:00 AM" << "\n";
    f7 << "20:00 PM" << "\n";
    f7 << "8:00 AM" << "\n";
    f7 << "12:00 PM" << "\n";
    f7 << "17:00 PM" << "\n";
    f7 << "21:00 PM" << "\n";
    f7 << "9:00 AM" << "\n";
    f7 << "6:00 AM" << "\n";
    f7 << "7:00 AM" << "\n";
    f7 << "19:00 PM" << "\n";
    f7 << "11:00 AM" << "\n";
    f7 << "21:00 PM" << "\n";
    f7 << "20:00 PM" << "\n";
    f7 << "18:00 PM" << "\n";
    f7 << "12:30 PM" << "\n";
    f7 << "3:00 AM" << "\n";
    f7 << "21:00 PM" << "\n";
    f7 << "12:30 AM" << "\n";


    f7.close();

    fstream f8("arr_time.txt", ios::out);
    f8 << "21:00 PM" << "\n";
    f8 << "18:30 PM" << "\n";
    f8 << "23:00 PM" << "\n";
    f8 << "10:15 AM" << "\n";
    f8 << "15:30 PM" << "\n";
    f8 << "19:45 PM" << "\n";
    f8 << "22:45 PM" << "\n";
    f8 << "12:35 PM" << "\n";
    f8 << "9:00 AM" << "\n";
    f8 << "9:55 AM" << "\n";
    f8 << "21:10 PM" << "\n";
    f8 << "14:16 PM" << "\n";
    f8 << "22:35 PM" << "\n";
    f8 << "23:55 PM" << "\n";
    f8 << "20:30 PM" << "\n";
    f8 << "04:35 AM" << "\n";
    f8 << "04:45 PM" << "\n";
    f8 << "01:15 PM" << "\n";
    f8 << "22:05 PM" << "\n";


    f8.close();


    fstream f9("fare.txt", ios::out);
    f9 << "3500.00" << "\n";
    f9 << "3920.00" << "\n";
    f9 << "4020.00" << "\n";
    f9 << "3500.00" << "\n";
    f9 << "3890.00" << "\n";
    f9 << "4250.00" << "\n";
    f9 << "3625.00" << "\n";
    f9 << "5500.00" << "\n";
    f9 << "5720.00" << "\n";
    f9 << "6200.00" << "\n";
    f9 << "6325.00" << "\n";
    f9 << "6525.00" << "\n";
    f9 << "6000.00" << "\n";
    f9 << "6725.00" << "\n";
    f9 << "3725.00" << "\n";
    f9 << "4525.00" << "\n";
    f9 << "6775.00" << "\n";
    f9 << "2325.00" << "\n";
    f9 << "4625.00" << "\n";


    f9.close();

    fstream f10("ser_tax.txt", ios::out);
    f10 << "155.00" << "\n";
    f10 << "200.00" << "\n";
    f10 << "188.00" << "\n";
    f10 << "190.00" << "\n";
    f10 << "177.00" << "\n";
    f10 << "123.00" << "\n";
    f10 << "200.00" << "\n";
    f10 << "288.00" << "\n";
    f10 << "260.00" << "\n";
    f10 << "300.00" << "\n";
    f10 << "255.00" << "\n";
    f10 << "234.00" << "\n";
    f10 << "223.00" << "\n";
    f10 << "264.00" << "\n";
    f10 << "161.00" << "\n";
    f10 << "262.00" << "\n";
    f10 << "363.00" << "\n";
    f10 << "464.00" << "\n";
    f10 << "260.00" << "\n";


    f10.close();


    fstream f3("dep1.txt", ios::out);

    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Mumbai" << "\n";
    f3 << "Chennai" << "\n";
    f3 << "Kolkata" << "\n";
    f3 << "Kolkata" << "\n";
    f3 << "Delhi" << "\n";
    f3 << "Hydrabad" << "\n";
    f3 << "Hydrabad" << "\n";
    f3 << "Banglore" << "\n";
    f3 << "Banglore" << "\n";
    f3 << "Hydrabad" << "\n";
    f3 << "Goa" << "\n";
    f3 << "Goa" << "\n";

    f3.close();


    fstream f11("arr1.txt", ios::out);
    f11 << "Singapore" << "\n";
    f11 << "Singapore" << "\n";
    f11 << "Singapore" << "\n";
    f11 << "Singapore" << "\n";
    f11 << "Singapore" << "\n";
    f11 << "Singapore" << "\n";
    f11 << "China" << "\n";
    f11 << "Seoul" << "\n";
    f11 << "KL" << "\n";
    f11 << "Bangkok" << "\n";
    f11 << "Colombo" << "\n";
    f11 << "Dhaka" << "\n";
    f11 << "Dubai" << "\n";
    f11 << "HongKong" << "\n";
    f11 << "Kathmandu" << "\n";
    f11 << "London" << "\n";
    f11 << "NewYork" << "\n";
    f11 << "Penang" << "\n";
    f11 << "London" << "\n";


    f11.close();


    fstream f22("fli1.txt", ios::out);
    f22 << "SingaporeAirlines" << "\n";
    f22 << "IndianAirlines " << "\n";
    f22 << "SilkAir" << "\n";
    f22 << "TigerAirways" << "\n";
    f22 << "JetAirways" << "\n";
    f22 << "AirAsia" << "\n";
    f22 << "AirChina" << "\n";
    f22 << "KoreanAir" << "\n";
    f22 << "MalaysianAirlines" << "\n";
    f22 << "ThaiAir" << "\n";
    f22 << "SriLankanAir" << "\n";
    f22 << "DhakaAir" << "\n";
    f22 << "EmiratesAir" << "\n";
    f22 << "AirChina" << "\n";
    f22 << "KathmanduAirlines" << "\n";
    f22 << "BritishAirways" << "\n";
    f22 << "SingaporeAir" << "\n";
    f22 << "SikAir" << "\n";
    f22 << "BritishAirways" << "\n";

    f22.close();


    fstream f44("flightno1.txt", ios::out);
    f44 << "SQ-5335" << "\n";
    f44 << "AI-800" << "\n";
    f44 << "SK-644" << "\n";
    f44 << "TG-779" << "\n";
    f44 << "JA-349" << "\n";
    f44 << "AA-661" << "\n";
    f44 << "AC-900" << "\n";
    f44 << "KA-281" << "\n";
    f44 << "MA-949" << "\n";
    f44 << "TH-200" << "\n";
    f44 << "SL-251" << "\n";
    f44 << "DA-584" << "\n";
    f44 << "EA-333" << "\n";
    f44 << "AC-212" << "\n";
    f44 << "KA-512" << "\n";
    f44 << "BA-3412" << "\n";
    f44 << "SA-3410" << "\n";
    f44 << "SI-203" << "\n";
    f44 << "BA-368" << "\n";
    f44.close();


    fstream f55("fdur1.txt", ios::out);
    f55 << "4 hours" << "\n";
    f55 << "5 hours 30 mins" << "\n";
    f55 << "5 hours" << "\n";
    f55 << "3 hours 15 mins" << "\n";
    f55 << "6 hours 30 mins" << "\n";
    f55 << "5 hours 45 mins" << "\n";
    f55 << "4 hours 45 mins" << "\n";
    f55 << "9 hours 35 mins" << "\n";
    f55 << "4 hours" << "\n";
    f55 << "2 hours 55 mins" << "\n";
    f55 << "2 hours 10 mins" << "\n";
    f55 << "3 hours 16 mins" << "\n";
    f55 << "6 hours 35 mins" << "\n";
    f55 << "7 hours 55 mins" << "\n";
    f55 << "7 hours 30 mins" << "\n";
    f55 << "3 hours 55 mins" << "\n";
    f55 << "1 hours 45 mins" << "\n";
    f55 << "4 hours 15 mins" << "\n";
    f55 << "10 hours 55 mins" << "\n";
    f55.close();

    fstream f66("status1.txt", ios::out);
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66 << "scheduled" << "\n";
    f66.close();

    fstream f77("dep_time1.txt", ios::out);
    f77 << "18:00 PM" << "\n";
    f77 << "4:00 AM" << "\n";
    f77 << "20:00 PM" << "\n";
    f77 << "8:00 AM" << "\n";
    f77 << "12:00 PM" << "\n";
    f77 << "17:00 PM" << "\n";
    f77 << "21:00 PM" << "\n";
    f77 << "9:00 AM" << "\n";
    f77 << "6:00 AM" << "\n";
    f77 << "7:00 AM" << "\n";
    f77 << "19:00 PM" << "\n";
    f77 << "11:00 AM" << "\n";
    f77 << "21:00 PM" << "\n";
    f77 << "20:00 PM" << "\n";
    f77 << "18:00 PM" << "\n";
    f77 << "12:30 PM" << "\n";
    f77 << "3:00 AM" << "\n";
    f77 << "21:00 PM" << "\n";
    f77 << "12:30 AM" << "\n";
    f77.close();

    fstream f88("arr_time1.txt", ios::out);
    f88 << "21:00 PM" << "\n";
    f88 << "18:30 PM" << "\n";
    f88 << "23:00 PM" << "\n";
    f88 << "10:15 AM" << "\n";
    f88 << "15:30 PM" << "\n";
    f88 << "19:45 PM" << "\n";
    f88 << "22:45 PM" << "\n";
    f88 << "12:35 PM" << "\n";
    f88 << "9:00 AM" << "\n";
    f88 << "9:55 AM" << "\n";
    f88 << "21:10 PM" << "\n";
    f88 << "14:16 PM" << "\n";
    f88 << "22:35 PM" << "\n";
    f88 << "23:55 PM" << "\n";
    f88 << "20:30 PM" << "\n";
    f88 << "04:35 AM" << "\n";
    f88 << "04:45 PM" << "\n";
    f88 << "01:15 PM" << "\n";
    f88 << "22:05 PM" << "\n";
    f88.close();


    fstream f99("fare1.txt", ios::out);
    f99 << "35009.00" << "\n";
    f99 << "39209.00" << "\n";
    f99 << "40207.00" << "\n";
    f99 << "35005.00" << "\n";
    f99 << "38904.00" << "\n";
    f99 << "42503.00" << "\n";
    f99 << "36253.00" << "\n";
    f99 << "55000.00" << "\n";
    f99 << "57200.00" << "\n";
    f99 << "62000.00" << "\n";
    f99 << "63250.00" << "\n";
    f99 << "65250.00" << "\n";
    f99 << "60007.00" << "\n";
    f99 << "67255.00" << "\n";
    f99 << "37254.00" << "\n";
    f99 << "45253.00" << "\n";
    f99 << "67752.00" << "\n";
    f99 << "23254.00" << "\n";
    f99 << "46255.00" << "\n";
    f99.close();

    fstream f100("ser_tax1.txt", ios::out);
    f100 << "155.00" << "\n";
    f100 << "200.00" << "\n";
    f100 << "188.00" << "\n";
    f100 << "190.00" << "\n";
    f100 << "177.00" << "\n";
    f100 << "123.00" << "\n";
    f100 << "200.00" << "\n";
    f100 << "288.00" << "\n";
    f100 << "260.00" << "\n";
    f100 << "300.00" << "\n";
    f100 << "255.00" << "\n";
    f100 << "234.00" << "\n";
    f100 << "223.00" << "\n";
    f100 << "264.00" << "\n";
    f100 << "161.00" << "\n";
    f100 << "262.00" << "\n";
    f100 << "363.00" << "\n";
    f100 << "464.00" << "\n";
    f100 << "260.00" << "\n";
    f100.close();


}
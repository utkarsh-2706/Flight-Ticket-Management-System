// AeroBook : Simplifying your travels with stress-free airline bookings
// (Airline Ticket Reservation System)

#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;



//Declaring Variables

int dom_pnr=100;
int int_pnr=200;

// Class for Domestic Flight Booking
class dom_booking{


    //Declaring Variables

    protected:
        int d_pnr,dom_passengers,dom_meal_choice;
         char flight_dom[50],dom_meal[20], meal1[20];;
        char date_dom[10];
        char dom_dep[20],dom_arr[20];
        int choice_dom,source,destination;



    public:
        //Function for Generating Domestic Ticket pnr Numbers

    void generate_dom_pnr(){

        dom_pnr++;
        d_pnr=dom_pnr;
    };

    // Function for Getting Domestic Travel Information from the User

    int travel_details_dom()


    {

        cout << "\nPlease Enter Date of Departure (DD/MM/YY): " <<  endl;
        cin >> date_dom;
        system("CLS");

        cout << "-----------------"<<endl;
        cout<<  "      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.New Delhi(1)" << endl ;
        cout <<"2.Mumbai(2)" << endl;
        cout <<"3.Bengaluru(3)" << endl;
        cout <<"4.Chennai(4) " << endl;
        cout <<"5.Kolkata(5) " << endl;
        cout <<"6.Hyderabad(6) " << endl;
        cout <<"7.Pune(7) " << endl;
        cout <<"8.Ahmedabad(8) " << endl;
        cout <<"9.Jaipur(9) " << endl;
        cout <<"10.Lucknow(10) " << endl;
        cout <<"11.Chandigarh(11) " << endl;
        cout <<"12.Goa(12) " << endl;
        cout <<"13.Bhubaneswar(13) " << endl;
        cout <<"14.Visakhapatnam(14) " << endl;
        cout <<"15.Guwahati(15) " << endl;
        cout <<"16.Srinagar(16) " << endl;
        cout <<"17.Bhopal(17) " << endl;
        cout <<"18.Port Blair(18) " << endl;
        cout <<"19.Amritsar(19)) " << endl;


        cout << "------------------\n"<<endl;
        cout << "Enter Your Source:" << endl;
        cin >> source;



        cout << "-----------------"<<endl;
        cout<<  "  DESTINATION     "<<endl;
        cout << "-----------------"<<endl;
        cout << "1.New Delhi(1)" << endl ;
        cout <<"2.Mumbai(2)" << endl;
        cout <<"3.Bengaluru(3)" << endl;
        cout <<"4.Chennai(4) " << endl;
        cout <<"5.Kolkata(5) " << endl;
        cout <<"6.Hyderabad(6) " << endl;
        cout <<"7.Pune(7) " << endl;
        cout <<"8.Ahmedabad(8) " << endl;
        cout <<"9.Jaipur(9) " << endl;
        cout <<"10.Lucknow(10) " << endl;
        cout <<"11.Chandigarh(11) " << endl;
        cout <<"12.Goa(12) " << endl;
        cout <<"13.Bhubaneswar(13) " << endl;
        cout <<"14.Visakhapatnam(14) " << endl;
        cout <<"15.Guwahati(15) " << endl;
        cout <<"16.Srinagar(16) " << endl;
        cout <<"17.Bhopal(17) " << endl;
        cout <<"18.Port Blair(18) " << endl;
        cout <<"19.Amritsar(19)) " << endl;
        cout << "------------------\n"<<endl;
        cout << "Enter Your Destination :" << endl;
        cin >> destination;



        if((source==1 && destination==2) || (source==2 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t19:00\t\t22:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==1 && destination==3) || (source==3 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t19:00\t\t22:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==1 && destination==4) || (source==4 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==5) || (source==5 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==6) || (source==6 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==7) || (source==7 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==8) || (source==8 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==9) || (source==9 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==10) || (source==10 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==11) || (source==11 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==12) || (source==12 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==13) || (source==13 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==14) || (source==14 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==15) || (source==15 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==16) || (source==16 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==17) || (source==17 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==18) || (source==18 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==1 && destination==19) || (source==19 && destination==1))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==2 && destination==3) || (source==3 && destination==2))
        {
            cout << "\t \t \tAvailable Flights" << endl << endl;
           cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==2 && destination==4) || (source==4 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }


         else if((source==2 && destination==5) || (source==5 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==6) || (source==6 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==7) || (source==7 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==8) || (source==8 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==9) || (source==9 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==10) || (source==10 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==11) || (source==11 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==12) || (source==12 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==13) || (source==13 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==14) || (source==14 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==15) || (source==15 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==16) || (source==16 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==17) || (source==17 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==18) || (source==18 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==2 && destination==19) || (source==19 && destination==2))
        {
           cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "SpiceJet(3\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==4) || (source==4 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==5) || (source==5 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==6) || (source==6 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==7) || (source==7 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==8) || (source==8 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==9) || (source==9 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==10) || (source==10 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==11) || (source==11 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==12) || (source==12 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==13) || (source==13 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==14) || (source==14 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==15) || (source==15 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==16) || (source==16 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==17) || (source==17 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==18) || (source==18 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==3 && destination==19) || (source==19 && destination==3))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==5) || (source==5 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==6) || (source==6 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==7) || (source==7 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==8) || (source==8 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==9) || (source==9 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==10) || (source==10 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==11) || (source==11 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==12) || (source==12 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==13) || (source==13 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==14) || (source==14 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==15) || (source==15 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==16) || (source==16 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==17) || (source==17 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==18) || (source==18 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==4 && destination==19) || (source==19 && destination==4))
         {
            cout << "\t \t \tAvailable Flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==6) || (source==6 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==7) || (source==7 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==8) || (source==8 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==9) || (source==9 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==10) || (source==10 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==11) || (source==11 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==12) || (source==12 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==13) || (source==13 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==14) || (source==14 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==15) || (source==15 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==16) || (source==16 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==17) || (source==17 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==18) || (source==18 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==5 && destination==19) || (source==19 && destination==5))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==7) || (source==7 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==8) || (source==8 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==9) || (source==9 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==10) || (source==10 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==11) || (source==11 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==12) || (source==12 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==13) || (source==13 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==14) || (source==14 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==15) || (source==15 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==16) || (source==16 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==17) || (source==17 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==18) || (source==18 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==6 && destination==19) || (source==19 && destination==6))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==8) || (source==8 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==9) || (source==9 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==10) || (source==10 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==11) || (source==11 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==12) || (source==12 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==13) || (source==13 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==14) || (source==14 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==15) || (source==15 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==16) || (source==16 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==17) || (source==17 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==18) || (source==18 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==7 && destination==19) || (source==19 && destination==7))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==8 && destination==9) || (source==9 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==10) || (source==10 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==11) || (source==11 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==12) || (source==12 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==13) || (source==13 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==14) || (source==14 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==15) || (source==15 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==16) || (source==16 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==17) || (source==17 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==18) || (source==18 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==8 && destination==19) || (source==19 && destination==8))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==9 && destination==10) || (source==10 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==11) || (source==11 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==12) || (source==12 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==13) || (source==13 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==14) || (source==14 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==15) || (source==15 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==16) || (source==16 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==17) || (source==17 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==18) || (source==18 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==9 && destination==19) || (source==19 && destination==9))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==10 && destination==11) || (source==11 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==12) || (source==12 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==13) || (source==13 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==14) || (source==14 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==15) || (source==15 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==16) || (source==16 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==17) || (source==17 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==18) || (source==18 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==10 && destination==19) || (source==19 && destination==10))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==11 && destination==12) || (source==12 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==13) || (source==13 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==13) || (source==13 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==14) || (source==14 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==15) || (source==15 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==16) || (source==16 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==17) || (source==17 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==18) || (source==18 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==11 && destination==19) || (source==19 && destination==11))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==13) || (source==13 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==14) || (source==14 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==15) || (source==15 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==16) || (source==16 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==17) || (source==17 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==18) || (source==18 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==12 && destination==19) || (source==19 && destination==12))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==14) || (source==14 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==15) || (source==15 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==16) || (source==16 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==17) || (source==17 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==18) || (source==18 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==13 && destination==19) || (source==19 && destination==13))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==14 && destination==15) || (source==15 && destination==14))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==14 && destination==16) || (source==16 && destination==14))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==14 && destination==17) || (source==17 && destination==14))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==14 && destination==18) || (source==18 && destination==14))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==14 && destination==19) || (source==19 && destination==14))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

        else if((source==15 && destination==16) || (source==16 && destination==15))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==15 && destination==17) || (source==17 && destination==15))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==15 && destination==18) || (source==18 && destination==15))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==15 && destination==19) || (source==19 && destination==15))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

         else if((source==16 && destination==17) || (source==17 && destination==16))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

          else if((source==16 && destination==18) || (source==17 && destination==18))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

          else if((source==16 && destination==19) || (source==17 && destination==19))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

          else if((source==17 && destination==18) || (source==18 && destination==17))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

          else if((source==17 && destination==19) || (source==19 && destination==17))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }

          else if((source==18 && destination==19) || (source==19 && destination==18))
         {
            cout << "\t \t \tAvailable flights" << endl << endl;
            cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Air India(1)\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "IndiGo(2)\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "SpiceJet(3)\t18:00\t\t21:05\t\tRs.6000\n";
            cout << "GoAir(4)\t18:00\t\t20:25\t\tRs.4500\n";
            cout << "Vistara(5)\t12:00\t\t13:55\t\tRs.8000\n";
            cout << "AirAisa India(6)\t10:00\t\t13:05\t\tRs.6500\n";
        }
        else if(source==destination)
        {
            cout << "\nSource and Destination are the same. Please Try Again!!\n\n\n" << endl;
            return travel_details_dom();
        }
        else
        {
            cout <<"\nYou have entered the wrong input!! Please Try Again\n\n\n" << endl;
            return travel_details_dom();
        }

    }
     //Function for selecting domestic flight
    int select_flight_dom()
    {
        cout << "\nEnter Your Choice : " << endl;
        cin >> choice_dom;



         // switch case
        switch(choice_dom)
        {
          case 1:
                cout << "\nYour Travel Information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : Air India"<<endl;
                strcpy(flight_dom,"Air India");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(dom_dep,"08:00");
                strcpy(dom_arr,"11:05");
                break;
          case 2:
                cout << "\nYour Travel Information:"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : Indigo"<<endl;
                strcpy(flight_dom,"Indigo");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(dom_dep,"14:00");
                strcpy(dom_arr,"17:05");
                break;
          case 3:
                cout << "\nYour Travel Information" << endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : SpiceJet" << endl;
                strcpy(flight_dom,"SpiceJet");
                cout << "Departure Time : 18:00" << endl;
                cout<<"Arrival Time: 21:05" << endl;
                strcpy(dom_dep,"18:00");
                strcpy(dom_arr,"21:05");
                break;
            case 4:
                cout << "\nYour Travel Information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : GoAir"<<endl;
                strcpy(flight_dom,"GoAir");
                cout << "Departure Time : 18:00"<<endl;
                cout<<"Arrival Time: 20:25"<<endl;
                strcpy(dom_dep,"18:00");
                strcpy(dom_arr,"20:25");
                break;
            case 5:
                cout << "\nYour Travel Information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : Vistara"<<endl;
                strcpy(flight_dom,"Vistara");
                cout << "Departure Time : 12:00"<<endl;
                cout<<"Arrival Time: 13:55"<<endl;
                strcpy(dom_dep,"12:00");
                strcpy(dom_arr,"13:55");
                break;
            case 6:
                cout << "\nYour Travel Information"<<endl;
                cout<<"---------------------------------------"<<endl;
                cout << "Flight Name : AirAsia India"<<endl;
                strcpy(flight_dom,"AirAsia India");
                cout << "Departure Time : 10:00"<<endl;
                cout<<"Arrival Time: 13:05"<<endl;
                strcpy(dom_dep,"10:00");
                strcpy(dom_arr,"13:05");
          default:
                cout << "\nYou have entered the wrong input!! Try Again\n\n\n" << endl;
                return select_flight_dom();
        }
    }



    //Function for selecting domestic flight meal
    int dom_meals(){


        cout<<"---------------------------------------"<<endl;

		cout <<"Please Enter Your Meal Preference: "<<endl;

		cout<<"---------------------------------------"<<endl;
		cout << "1.Vegetarian Meal(1): Rs.500 \n";
		cout << "2.Non-Vegetarian Meal(2) : Rs.650\n";
		cout << "3.No Meal(3)\n\n";

		cout <<"Enter Your Choice :  ";
		cin >> dom_meal_choice;

		while(dom_meal_choice>3 || dom_meal_choice<1){
		cout<<"You have entered the wrong input!! Please a Number Between 1 and 3\n";
		cin>>dom_meal_choice;
		}
		{

		if (dom_meal_choice == 1){
		strcpy(meal1,"Vegetarian Meal");
		}

		else if (dom_meal_choice == 2){
		strcpy(meal1,"Non-Vegetarian Meal");
		}

		else{
		strcpy(meal1,"No Meal");
		}


		 cout<<"You Have Chosen: "<<meal1<<endl;

        }
    }
};




//Class for international booking
class int_booking
{


    //Declaring variables
    protected:
        int i_pnr,int_passengers,int_meal_choice,int_meal_price;
        char flight_int[20],int_dep[20],int_arr[20],meal2[30],int_meal_choices[20];
        char date_int[20];
        int source_int,destination_int,choice_int;


    public:
        void generate_int_pnr()
        {
            int_pnr++;
           i_pnr=int_pnr;
        }



    // Function for getting international travel information from the user
    int travel_details_int()

    {
        cout << "\nEnter Date Of Departure (DD/MM/YY): " <<  endl;
        cin>>date_int;
        system("CLS");

        system("CLS");
        cout<<  "\n      SOURCE     "<<endl;
        cout << "-----------------"<<endl;
        cout <<"1.Dubai(1)" << endl ;
        cout <<"2.Beijing(2)" << endl ;
        cout <<"3.London(3)" << endl ;
        cout <<"4.New Delhi(4)" << endl ;
        cout <<"5.New York(5)" << endl ;
        cout << "------------------\n"<<endl;
        cout << "Enter Your Source: " << endl;
        cin >> source_int;



        cout<<  "\n  DESTINATION     "<<endl;
         cout << "-----------------"<<endl;
        cout << "1.Dubai(1)" << endl ;
        cout <<"2.Beijing(2)" << endl;
        cout <<"3.London(3)" << endl;
        cout <<"4.New Delhi(4)" << endl ;
        cout<<"5.New York(5)"<< endl;
        cout << "------------------\n"<<endl;
        cout << "Enter Your Destination: \n" << endl;
        cin >> destination_int;



       if((source_int==1 && destination_int==2) || (source_int==2 && destination_int==1))
        {

            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
            cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
            cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
            cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";
        }

        else if((source_int==1 && destination_int==3) || (source_int==3 && destination_int==1))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
            cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
            cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
            cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";
        }


        else if((source_int==1 && destination_int==4) || (source_int==4 && destination_int==1))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
            cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
            cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
            cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

        }

       else if((source_int==1 && destination_int==5) || (source_int==5 && destination_int==1))
       {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
           cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
           cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
           cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
           cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
           cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
           cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

       }

        else if((source_int==2 && destination_int==3) || (source_int==3 && destination_int==2))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
            cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
            cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
            cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";
        }


        else if((source_int==2 && destination_int==4) || (source_int==4 && destination_int==2))
        {
            cout << "\t \t \tAvailable flights" << endl;
            cout<<"-------------------------------------------------------"<<endl;
            cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
            cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
            cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
            cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

        }

       else if((source_int==2 && destination_int==5) || (source_int==5 && destination_int==2))
       {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
           cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
           cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
           cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
           cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
           cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
           cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

       }

        else if((source_int==3 && destination_int==4) || (source_int==4 && destination_int==3))
         {
             cout << "\t \t \tAvailable flights" << endl;
             cout<<"-------------------------------------------------------"<<endl;
             cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
             cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
             cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
             cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
             cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
             cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
             cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

        }

       else if((source_int==3 && destination_int==5) || (source_int==5 && destination_int==3))
       {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
           cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
           cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
           cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
           cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
           cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
           cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

       }

       else if((source_int==4 && destination_int==5) || (source_int==5 && destination_int==4))
       {
           cout << "\t \t \tAvailable flights" << endl;
           cout<<"-------------------------------------------------------"<<endl;
           cout << "Airlines\tDeparture\tArrival\t\tPrice\n"<<endl;
           cout << "Lufthansa(1)\t04:10\t\t08:30\t\tRs.14,010\n";
           cout << "Emirates(2)\t14:00\t\t18:05\t\tRs.15,120\n";
           cout << "British Airways(3)\t22:00\t\t02:10\t\tRs.12,500\n";
           cout << "Air France(4)\t02:00\t\t08:40\t\tRs.10,000\n";
           cout << "Turkish Airlines(5)\t22:00\t\t00:55\t\tRs.12,000\n";
           cout << "Singapore Airlines(6)\t01:20\t\t05:10\t\tRs.11,550\n";

       }
        else if(source_int==destination_int)
        {
            cout << "\nSource and destination are the same. Please Try Again!!\n\n\n" << endl;
            cout<<"\n\n\n"<<endl;
            return travel_details_int();
        }
        else
        {
            cout <<"\nYou have entered the wrong input!! Try Again\n\n\n" << endl;
            return travel_details_int();
        }
        }





  //Function for Selecting International Flight

    int select_flight_int()
    {
        cout << "\nEnter Your Choice : " << endl;
        cin >> choice_int;
        switch(choice_int){

        case 1:
            cout << "\nYour Travel Information" <<endl;

            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name : Lufthansa" << endl;
            strcpy(flight_int,"Lufthansa");
            cout << "Departure Time: 04:10" << endl;
            cout << "Arrival Time: 08:30" << endl;
            strcpy(int_dep,"10:00");
            strcpy(int_arr,"08:30");
            break;
        case 2:
               cout << "\nYour travel information" << endl;
              cout<<"-----------------------------\n"<<endl;
               cout << "Flight name : Emirates" << endl;
               strcpy(flight_int,"Emirates");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(int_dep,"14:00");
               strcpy(int_arr,"18:05");
               break;
        case 3:
            cout << "\nYour travel information" << endl;
            cout<<"-----------------------------\n"<<endl;
            cout << "Flight name : British Airways" << endl;
            strcpy(flight_int,"British Airways");
            cout << "Departure Time : 22:00" << endl;
            cout << "Arrival Time: 02:10" << endl;
            strcpy(int_dep,"22:00");
            strcpy(int_arr,"02:10");
            break;
        default:
            cout << "\nYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return select_flight_int();}

        }




    //Function for selecting international flight meal
    int int_meal(){



        cout<<"------------------"<<endl;

		cout <<"Meal Preferences "<<endl;

		cout<<"------------------"<<endl;
		cout << "1.Vegetarian Meal(1): Rs.550 \n";
		cout << "2.Non-Vegetarian Meal(2) : Rs.700\n";
		cout << "3.No Meal(3)\n\n";

		cout <<"Enter Your Choice :  ";
		cin >> int_meal_choice;

		while(int_meal_choice>3 ||int_meal_choice<1){
		cout<<"You have entered the wrong input!! Please Enter a Number Between 1 and 3\n";
		cin>>int_meal_choice;
		}
        {

        if (int_meal_choice== 1){

		strcpy(meal2,"Vegetarian Meal");
		}

		else if (int_meal_choice == 2){
		strcpy(meal2,"Non-Vegetarian Meal");
		}

		else{
		strcpy(meal2,"No Meal");


		}
        }
        cout<<"You Have Chosen: "<<meal2<<endl;

        }

};



//Class passenger inherits the classes dom_booking and int_booking
class passenger: public dom_booking,public int_booking
{


//Declaring variables
protected:
    char name[100],email[50],gender[20],pass_no[30],contact_no[30];

public:

    //Function for getting the details of the passengers

    void passenger_details(int x)


    //if - else statements for domestic and international booking selection

    {
        system("CLS");
         if(x==1)
        { travel_details_dom();
          select_flight_dom();

          dom_meals();
        }
          else
          {  travel_details_int();
             select_flight_int();

             int_meal();
          }

        system("CLS");
        cout << "\n\n\nEnter The Required Details-\n";
        cout<<"------------------------------------\n"<<endl;
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Email ID: ";
        cin >> email;
        cout << "Enter Your Gender: ";
        cin >> gender;
        cout<<"Enter Your Contact Number: ";
        cin>>contact_no;
        cout<<"Enter Your Passport Number: ";
        cin>>pass_no;
    }

    //Function to display passenger details
    void display_details(){
        system("CLS");
        cout << "\n\nPassenger Details\n";
        cout<<"--------------------------------------\n"<<endl;;
        cout << "Name : " <<name<< endl;
        cout << "Email ID : " << email << endl;
        cout << "Gender : " << gender << endl;
        cout << "Contact No. : " << contact_no << endl;
        cout<<"Passport Number : "<<pass_no<<endl;
    }


    //Function to get pnr for domestic booking
     int getpnr_dom()
        {
            return d_pnr;
        }


    //Function to get pnr for international booking
     int getpnr_int()
     {
         return i_pnr;
     }


    //Function to display details of domestic booking

     void disp_dom()
     {
         cout<<"PNR : " << d_pnr << endl;
         cout<<"Flight : " << flight_dom << endl;
         cout<<"Boarding Date : " << date_dom << endl;
         cout<<"Departure Time : " << dom_dep << endl;
         cout<<"Arrival Time : " << dom_arr<<endl;
         cout<<"Meal Choice : "<<meal1<<endl;
     }

     //Function to display details of international booking

      void disp_int()
     {
         cout<<"PNR: " << i_pnr << endl;
         cout<<"Flight: " << flight_int << endl;
         cout<<"Name: " << name<<endl;
         cout<<"Boarding Date: " << date_int << endl;
         cout<<"Departure Time: " << int_dep << endl;
         cout<<"Arrival Time: " << int_arr<<endl;
         cout<<"Meal Choice: "<<meal2<<endl;
     }

};


//class for payment
class payment{



        //Declaring variables
        protected:
            int choice3,bank,bank1,card,date,cvv,user_id;
            char password[30];

        public:

            //Function for getting and displaying payment details
            void payment_details()

            {

                system("CLS");
                cout << "\n\n\nMode Of Payment\n";
                cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
                cout << "\n\nEnter Your Choice : ";
                cin >> choice3;
                switch(choice3)
                {
                case 1:
                    cout << "Enter Card Number : ";
                    cin >> card;
                    cout << "Enter Expiry Date : ";
                    cin >> date;
                    cout << "Enter CVV Number : ";
                    cin >> cvv;
                    cout << "Transaction Successful!!\n";
                    break;
                case 2:
                    cout << "Enter Card Number : ";
                    cin >> card;
                    cout << "Enter Expiry Date : ";
                    cin >> date;
                    cout << "Transaction Successful!!\n";
                    break;
                case 3:
                    cout << "\nBanks Available:\n----------- \n1.State Bank of India(1) \n2.ICICI(2) \n3.Axis Bank(3) \n4.HDFC(4)";
                    cout << "\nSelect Your Bank : ";
                    cin >> bank;

                    cout << "\nYou Have Selected : " << bank;
                    cout << "\nEnter User Id : ";
                    cin >> user_id;
                    cout << "Enter Password : ";
                    cin >> password;
                    cout<<"-----------------------------";
                    cout << "\nTransaction Successful!!\n";
                    cout<<"-----------------------------";
                    break;
                default:
                    cout << "\nWrong Input Entered!!\nTry Again\n";
                    return payment_details();
                }
            }

        };



            // Function to create domestic flight ticket
            void createfile_dom(passenger y)
                {  ofstream file_out("Domestic_flight_details.txt",ios::binary|ios::app);
                    //writing to file
                   file_out.write((char*)&y,sizeof(y));
                   //closing file
                   file_out.close();
                }
            // Function to cancel domestic flight ticket
                void dom_cancelticket(int x)
                {  passenger y;
                    int f=0;
                   ifstream file_in("Domestic_flight_details.txt",ios::binary|ios::app);
                   ofstream file_out("Domestic_flight_details1.txt",ios::binary|ios::app);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   {  //checking if pnr exists
                     if(y.getpnr_dom()!=x)
                      file_out.write((char *)&y,sizeof(y));
                      else
                     {    //Calling function to display details
                         y.disp_dom();
                         cout<<"\nYour  Ticket Has Been Cancelled!!\n";
                        //Incrementinf f if pnr is found
                         f++;
                     }
                     //reading another record from file
                     file_in.read((char *)&y,sizeof(y));
                   }
                   if(f==0)
                    cout<<"Ticket Not Found!!\n";
                   file_out.close();
                   file_in.close();

                    //deleting old file
                   remove("Domestic_flight_details.txt");
                    //renaming new file
                   rename("Domestic_flight_details1.txt","Domestic_flight_details.txt");

                }

                void dom_checkticket(int x)
                {  passenger y;
                   int f=0;
                   ifstream file_in("Domestic_flight_details.txt",ios::binary);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   { //checking pnr
                     if(y.getpnr_dom()==x)

                     {cout<<"\nTicket Details : \n"<<endl;
                      y.disp_dom();

                      f++;
                      break;
                     }
                      //reading another record from the same file
                     file_in.read((char *)&y,sizeof(y));

                   }
                   file_in.close();
                    //if f==0, pnr not found
                   if(f==0)
                   cout<<"This PNR Number Does Not Exist!!"<<endl;

                }
           // Function to create a file for international booking
            void createfile_int(passenger y)
            {  ofstream  file_out("International.txt",ios::binary|ios::app);
                file_out.write((char*)&y,sizeof(y));//writing to file
                file_out.close();//closing file
            }
            // Function to cancel a file for international booking
            void int_cancelticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.txt",ios::binary|ios::app);
               ofstream  file_out("International1.txt",ios::binary|ios::app);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 if(y.getpnr_int()!=x)
                    //writing to new file;
                  file_out.write((char *)&y,sizeof(y));
                  else
                 {  //Calling function to display details
                     y.disp_int();
                     cout<<"Your Ticket Has Been Cancelled!!\n";
                    //incrementing f if pnr found
                     f++;
                 }
                 //reading another record from old file
                file_in.read((char *)&y,sizeof(y));
               }
               //if f==0,pnr not found
               if(f==0)
                cout<<"\nTicket Not Found!!\n";
               file_in.close();
               file_out.close();
               //deleting old file
               remove("International.txt");
               //renaming new file
               rename("International1.txt","International.txt");

            }


            void int_checkticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.txt",ios::binary);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 //checking pnr
                 if(y.getpnr_int()==x)
                 {cout<<"\nTicket Details : \n"<<endl;
                  y.disp_int();
                  f++;
                  break;
                 }
                 //reading another record from the file
                 file_in.read((char *)&y,sizeof(y));

               }
              file_in.close();
              //if f==0, pnr not found
               if(f==0)
               cout<<"This PNR Number Does Not Exist!!"<<endl;

            }


int main(){
    //Creating objects for classes
    class dom_booking d;
    class int_booking i;
    class passenger p;
    class payment pay;

    //Declaring variables
    int choice,choice1,choice2,choice3,input;
    char input1;

    //Do-While loop
    do{
  system("CLS");

 cout<<"AIRLINE RESERVATION SYSTEM"<<endl;
 cout<<"--------------------------------"<<endl;
 cout << "1.BOOK FLIGHT(1) \n2.CANCEL FLIGHT(2) \n3.CHECK YOUR FLIGHT TICKET(3) \n4.EXIT(4)" << endl;
 cout<<"--------------------------------"<<endl;
 cout<<"Enter Your Choice : "<<endl;
 cin>>choice;


 //Switch-Case statements
 switch(choice)
      {
          case 1:
          system("CLS");
              cout<<"Please Enter Your Choice : "<<endl;
              cout << "1.Domestic Fights(1)\n2.International Flights(2)" << endl;
              cout << "\nEnter Your Option : " << endl;
              cin >> choice1;


            switch(choice1){

                     //Booking domestic flight

                      case 1:
                            p.generate_dom_pnr();
                            p.passenger_details(1);
                            pay.payment_details();
                            p.display_details();
                            p.disp_dom();
                            createfile_dom(p);
                            break;


                        //Booking international ticket
                       case 2:
                            p.generate_int_pnr();
                            p.passenger_details(2);
                            pay.payment_details();
                            p.display_details();
                            p.disp_int();
                            createfile_int(p);
                            break;

                       default:
                        cout << "Wrong Input!!\n\nPlease Enter 1 for Domestic Flight Booking and 2 for International Flight Booking" << endl;
                        return main();
                  }
              break;

              //Canceling flight ticket
              case 2:

                  system("CLS");
                  cout << "1. Domestic Fights(1) \n2. International Flights(2)" << endl;
                     cout << "\nPlease Enter Your Option : " << endl;
                     cin >> choice2;
                      if(choice2==1)
                    {
                       cout << "Enter Your PNR Number : " << endl;
                       cin>>input;
                       dom_cancelticket(input);
                    }
                     else if(choice2==2)
                   {  cout << "Enter Your PNR Number : " << endl;
                      cin>>input;
                      int_cancelticket(input);
                   }
                   else
                   {
                       cout << "Wrong Input!!\n";
                       return main();
                   }
                   break;

              //Displaying booked ticket details
              case 3:
              system("CLS");
                      cout << "\Check Your Tickets" << endl;
                      cout<<"------------------------"<<endl;
                      cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                      cout << "\nEnter Your Option : " << endl;
                      cin >> choice3;
                      if(choice3==1)
                      {cout << "\nEnter Your PNR Number : " << endl;
                       cin>>input;
                       dom_checkticket(input);}//function call to display domestic ticket details
                      else if(choice3==2)
                      {  cout << "\nEnter Your PNR Number : " << endl;
                         cin>>input;
                         int_checkticket(input);//function call to display domestic ticket details
                      }
                       else
                   {
                       cout << "Wrong Input!!";
                       return main();
                   }
                   break;
                case 4:
                system("CLS");

                return 0;


                default://for wrong input
                cout << "Wrong Input!! Please Enter the Correct Input \n\n\n\n" << endl;
                return main();
          }
        cout<<"\n\n\nDO YOU WISH TO CONTINUE?? (Y/N)" << endl;
        cin >> input1;
  }while(input1=='Y' || input1=='y');
return 0;

}
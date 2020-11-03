#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "./Airplane.h"



int main(int argc, char const *argv[]){

    // Objet declarations
    //Date
    Date date1(10, 6, 2020, 12, 30), date2(11, 7, 2020, 15 , 45), date3(14, 6, 2020, 23 , 45), date4;
    date4.setDay(21);
    date4.setMonth(1);
    date4.setYear(2021);
    date4.setHour(13);
    date4.setMinutes(05);

    //Airplane
    Airplane airplane1("Bahamas", date4, "A1", 20, 30, 10);
    Airplane airplane2("Rome", date1, "B3", 30, 28, 25);
    Airplane airplane3("Toronto", date3, "A2", 34, 24, 12);
    Airplane airplane4;

    airplane4.setDestination("Paris");
    airplane4.setDate(date2);
    airplane4.setGate("C3");
    airplane4.setEconomicAvailable(40);
    airplane4.setPremiumAvailable(30);
    airplane4.setFirstClassAvailable(20);

    //Airplanes array
    Airplane airplanes[4] = {airplane1, airplane2, airplane3, airplane4};

    //Variables
    string airplaneSelection; 
    int s; // airplane selection int
    string seatSelection;
    int z;// seat selection int
    char confirm; 

    //Web display simulation
    //Greet the costumer and show our available flights
    cout << "\n-----Welcome to'GM' International Airport-----" << endl;
    cout << "\nPlease select de number of the destination you wish to visit:\nExample '[1]' select: '1'\n" << endl;
    for(int i = 0; i < 4; i++){
        cout << "-" << airplanes[i].getDestination() << " [" << to_string(i + 1) << "] \nDate: " << airplanes[i].getDate() << "\n\n";
    }
    
    // Airplane Selection
    while(airplaneSelection != "1" && airplaneSelection != "2" && airplaneSelection != "3" &&airplaneSelection != "4"){
        cout << "Select between 1 and 4: ";
        cin >> airplaneSelection;
    }
    istringstream(airplaneSelection) >> s;

    //Displays airplane selection.
    cout << "\n----------------\n";
    cout << "Your selection: " << airplanes[s -1].getDestination() << "\n\n";

    //Display available seats.
    cout << "Select a seat: [1] Economic Class, [2] Premium Class, [3] FirstClass" << endl;

    cout << "\n" << airplane1.seatsDescription() << endl;

    //Seat selection
    while(seatSelection != "1" && seatSelection != "2" && seatSelection != "3"){
        cout << "Select between 1 and 3: ";
        cin >> seatSelection;
    }
    cout << "\n----------------\n";
    cout << "Your selection: " ;
    if (seatSelection == "1"){
        cout <<  "-Economic Class" << endl;
    }
    else if(seatSelection == "2"){
        cout <<  "-Premium Class" << endl;
    }
    else if(seatSelection == "3"){
        cout <<  "-First Class" << endl;
    }
    istringstream(seatSelection) >> z;

    //Displays confirmation to buy the plane ticket
    while(confirm != 'y' && confirm != 'n' && confirm != 'Y' && confirm != 'N'){
            cout << "Press 'Y' to buy ticket\nPress 'N' to cancel: " ;
             cin >> confirm;
    }

    cout << "....................." << endl;
    if(confirm == 'y' || confirm == 'Y'){
        cout << "\nThank you! Here is your ticket:\n" << airplanes[s-1].buyTicket();
        airplanes[s-1].ChooseSeat(z-1);
        cout << "\nCome back, anytime!!\n" << endl;
    }
    else{
        cout << "Come back, anytime!!" << endl;
    }




    
    return 0;
}

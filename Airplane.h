#include <iostream>
using namespace std;
#include "./seat.h"
#include "./Date.h"

class Airplane{
    //Creats an airplane object wich has a destination, flight_date, gate, and 3 types of seats.

    private:
        Seat economic;
        Seat premium;
        Seat first;
        string destination;
        Date flight_date;
        string gate;
        int economic_available_seats;
        int premium_available_seats;
        int firstClass_available_seats;
        int seat_choosed;

        Seat seats[3];
        Seat seat;

        
    public:
        //Constructors
        Airplane();
        Airplane(string, Date, string, int, int, int);

        //Setters
        void setDestination(string);
        void setDate(Date);
        void setGate(string);
        void setEconomicAvailable(int);
        void setPremiumAvailable(int);
        void setFirstClassAvailable(int);

        
        //Getters
        string getDestination();
        string getDate();
        string getGate();
        int getEconomicAvailable();
        int getPremiumAvailable();
        int getFirstClassAvailable();

        //Information about seats
        string seatsDescription();
        void ChooseSeat(int);

        //Buy plane ticket
        string buyTicket();
};

//Constructors
Airplane::Airplane(){
    Date new_date;
    Seat economic("Economic Class", 29, 10);
    Seat premium("Premium Class", 35, 15);
    Seat first("First Class", 42, 20);

    destination = "No destination Assigned";
    flight_date = new_date;
    gate = "No gate assigned";
    economic_available_seats = 30;
    premium_available_seats = 20;
    firstClass_available_seats = 20;
    seat_choosed = 2;

    Seat seats[3] = {economic, premium, first};
    Seat seat = seats[seat_choosed-1];

};

Airplane::Airplane(string new_dest, Date new_date, string new_gate, int econ, int prem, int firstClass){
    
    Seat economic("Economic Class", 29, 10);
    Seat premium("Premium Class", 35, 15);
    Seat first("First Class", 42, 20);

    destination = new_dest;
    flight_date = new_date;
    gate = new_gate;
    economic_available_seats = econ;
    premium_available_seats = prem;
    firstClass_available_seats = firstClass;
    seat_choosed = 1;

    Seat seats[3] = {economic, premium, first};
    Seat seat = seats[seat_choosed-1];
};

//Setters
void Airplane::setDestination(string new_dest){
    destination = new_dest;
}

void Airplane::setDate(Date new_date){
    flight_date = new_date;
}

void Airplane::setGate(string new_gate){
    gate = new_gate;
}

void Airplane::setEconomicAvailable(int number){
    economic_available_seats = number;
}

void Airplane::setPremiumAvailable(int number){
    premium_available_seats = number;
}

void Airplane::setFirstClassAvailable(int number){
    firstClass_available_seats = number;
}

void Airplane::ChooseSeat(int choice){
    seat_choosed = choice;
}
        
//Getters
string Airplane::getDestination(){
    return destination;
}

string Airplane::getDate(){

    return flight_date.fullDate();
}

string Airplane::getGate(){

    return gate;
}

int Airplane::getEconomicAvailable(){

    return economic_available_seats;
}

int Airplane::getPremiumAvailable(){

    return premium_available_seats;
}

int Airplane::getFirstClassAvailable(){

    return firstClass_available_seats;
}

     
 //Seats description
string Airplane::seatsDescription(){
    string organize;
    Seat economic("Economic Class", 29, 10);
    Seat premium("Premium Class", 35, 15);
    Seat first("First Class", 42, 20);

    organize += economic.seatInfo() + "\n";
    organize += premium.seatInfo() + "\n";
    organize += first.seatInfo() + "\n";

    return organize;
}

//Flight information
string Airplane::buyTicket(){

    string ticket;
    ticket += "\n--------Ticket--------\nDestination: ";
    ticket += destination + "\n";
    ticket += "Gate: " + gate + "\n";
    ticket += seat.seatInfo();
    ticket += flight_date.fullDate() + "\n";


    if(seat_choosed == 1){
        economic_available_seats -= 1;
    }
    else if(seat_choosed == 2){
        premium_available_seats -= 1;
    }
    else if(seat_choosed == 3){
        firstClass_available_seats -= 1;
    }

    return ticket;

}
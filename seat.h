#include <iostream>
using namespace std;

class Seat{

    private:
        string seat_type;
        float price;
        float permited_luggage_weight;

    public:
        //Constructores
        Seat();
        Seat(string, float, float);

        //Setters
        void setSeatType(string);
        void setPrice(float);
        void setPermitedLuggage(int);

        //Getters
        string getSeatType();
        float getPrice();
        int getPermitedLuggage();

        //Returns organized seat info
        string seatInfo();

};

 //Constructores
Seat::Seat(){
    seat_type = "Economic";
    price = 20;
    permited_luggage_weight = 10;

};
Seat::Seat(string new_type, float new_price, float new_permitted_weight){
    seat_type = new_type;
    price = new_price;
    permited_luggage_weight = new_permitted_weight;
};

//Setters
void Seat::setSeatType(string new_type){

    seat_type = new_type;
};
void Seat::setPrice(float new_price){

    price = new_price;
};
void Seat::setPermitedLuggage(int new_permitted_weight){

    permited_luggage_weight = new_permitted_weight;
};

//Getters
string Seat::getSeatType(){

    return seat_type;
};

float Seat::getPrice(){

    return price;
};

int Seat::getPermitedLuggage(){

    return permited_luggage_weight;
};

//Returns organized seat info
string Seat::seatInfo(){

    string organized = "Class: " + seat_type + "\n";
    organized += "Price: $" + to_string(price) + "\n";
    organized += "Luggage permitted weight: " + to_string(permited_luggage_weight) + "\n";

    return organized;

};
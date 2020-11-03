#include <iostream>
using namespace std;

class Date{

    private:
        int day, month, year, hour, minutes;
    
    public:

        //Constructores
        Date();
        Date(int numDay, int numMonth, int numYear, int numHour, int numMinutes);

        //Getters
        int getDay();
        int getMonth();
        int getYear();
        int getHour();
        int getMinutes();

        //Setters
        void setDay(int numDay);
        void setMonth(int numMonth);
        void setYear(int numYear);
        void setHour(int numHour);
        void setMinutes(int numMinutes);

        //Return organized date
        string fullDate();

};

//Constructores
Date::Date(){

    day = 0;
    month = 0;
    year = 2020;
    hour = 8;
    minutes = 30;

}

Date::Date(int numDay, int numMonth, int numYear, int numHour, int numMinutes){

    day = numDay;
    month = numMonth;
    year = numYear;
    hour = numHour;
    minutes = numMinutes;
}

//Getters
int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}

int Date::getYear(){

    return year;
}
int Date::getHour(){

    return hour;
}
int Date::getMinutes(){

    return minutes;
}

//Setters
void Date::setDay(int numDay){
    day = numDay;
}
void Date::setMonth(int numMonth){
    month = numMonth;
}
void Date::setYear(int numYear){

    year = numYear;
}
void Date::setHour(int numHour){

    hour = numHour;
}
void Date::setMinutes(int numMinutes){

 
    minutes = numMinutes;
}

//Return organized date
string Date::fullDate(){
    
    string organized;
    string months[12] = {"January", "February","March", "April","May",
                         "June","July", "August","September", "October","November", "December",};
    
    

    organized = "Date: " + to_string(day) + "/" + months[month - 1] + "/" + to_string(year) + "\n";
    organized += "Time: " + to_string(hour) + ":" + to_string(minutes);

    return organized;
}
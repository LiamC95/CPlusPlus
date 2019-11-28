#include "Tour.h"
#include <string>
#include <iostream>

using namespace std;



 Tour::Tour(int ID, string tourGuide, 
        unsigned short date,
        unsigned short mon ,
        unsigned int year,
        unsigned int tourists,
        float ticketprice,
        string landmark
    ){
        setId(ID);
        settourGuide(tourGuide);
        settourDate(date);
        setTourMonth(mon);
        setTourYear(year);
        setnumTourists(tourists);
        settourPrice(ticketprice);
        setLandmark(landmark);
    }


    void Tour::setId(int id){
        if(id > 0)
        {
            this->ID = id;
        }
    }
    void Tour::settourGuide(string guide){
        tourGuide = guide;

    }
    void Tour::settourDate(unsigned short day){
        if(day > 0 && day <32)
        {
            tourDay = day;
        }
    }
    void Tour::setTourMonth(unsigned short mon){
        if(mon >0 && mon <13)
        {
            tourMonth = mon;
        }

    }
    void Tour::setTourYear(unsigned int year){
        if(year >0 )
        {
            tourYear = year;
        }

    }
    void Tour::setnumTourists(int tourists){
        if( tourists > 0)
        {
            noTourists = tourists;
        }

    }
    void Tour::settourPrice(float price){
        ticketPrice = price;
    }
    void Tour::setLandmark(string landmark){
        this->landmark = landmark;
    }

    void Tour::print() const
    {
        cout << "ID         :\t" << getID() << "\n"
        <<      "Guide      :\t" << getTourGuide() << "\n"
        <<      "Date       :\t" << getTourDate() << "/" <<getTourMonth() << "/" << getTourYear() << "\n"
        <<      "Tourists   :\t" << getNoTourists() << "\n"
        <<      "Price      :\t" << getTicketPrice() << "\n"
        <<      "LandMark   :\t" << getLandmark() << endl;
        
    }

    int Tour::getID() const
    {
        return ID;
    }
    string Tour::getTourGuide() const{
        return tourGuide;
    }
    unsigned short Tour::getTourDate() const
    {
        return tourDay;
    }
    unsigned short Tour::getTourMonth() const
    {
        return tourMonth;
    }
    unsigned int Tour::getTourYear() const{
        return tourYear;
    }
    unsigned int Tour::getNoTourists() const{
        return noTourists;
    }
    float Tour::getTicketPrice() const{
        return ticketPrice;
    }
    string Tour::getLandmark() const{
        return landmark;
    }
    Tour::~Tour(){

    }
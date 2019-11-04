#pragma once
#include <string>
using namespace std;

class Tour
{
    int ID;
    string tourGuide;
    unsigned short tourDay;
    unsigned short tourMonth;
    unsigned int tourYear;
    unsigned int noTourists;
    float ticketPrice;
    string landmark;  
    
    public: 
    
    Tour(int ID=1, string tourGuide ="Liam", 
        unsigned short date=1,
        unsigned short mon = 1,
        unsigned int year = 2019,
        unsigned int tourists = 20,
        float ticketprice =0.00,
        string landmark = ""
    );

    

    void setId(int id);
    void settourGuide(string guide);
    void settourDate(unsigned short day);
    void setTourMonth(unsigned short mon);
    void setTourYear(unsigned int year);
    void setnumTourists(int Tourists);
    void settourPrice(float price);
    void setLandmark(string landmark);

    void print() const;

    int getID() const;
    string getTourGuide() const;
    unsigned short getTourDate() const;
    unsigned short getTourMonth() const;
    unsigned int getTourYear() const;
    unsigned int getNoTourists() const;
    float getTicketPrice() const;
    string getLandmark() const;
    ~Tour();

    
};
#ifndef EVENT_H
#define EVENT_H

#include <string>

using namespace std;


class EVENT 
{
protected:
    string date;
    string time; 
    string location;
    string purpose;
    string eventName;

public:

    EVENT(string userDate,string userTime,string userLocation,string userPurpose,string eventName);
    const string get_date();
    const string get_time();
    const string get_location();
    const string get_purpose();
    const string get_name();

    void set_date(string userDate);
    void set_time(string userTime);
    void set_location(string userLocation);
    void set_purpose(string userPurpose);
    void set_name(string eventName);









};








#endif
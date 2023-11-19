#include "../header/collection.h"
#include <iostream>
#include <fstream>

collection::collection()
{   

    
    eventList;


}

void collection::addEvent(EVENT userEvent)
{
    eventList.push_back(userEvent);
}

const void collection::printList()
{
    unsigned int vectorSize= eventList.size();
        for(unsigned int t = 0; t < vectorSize;t++)
        {
            std::cout<<"Date: "<<eventList.at(t).get_date()<<"\n";
            std::cout<<"Time: "<<eventList.at(t).get_time()<<"\n";
            std::cout<<"Location: "<<eventList.at(t).get_location()<<"\n";
            std::cout<<"Purpose: "<<eventList.at(t).get_purpose()<<"\n";
            std::cout<<"\n";
        }



}

const void collection::ListToHTML()
{
    fstream userFile;
    userFile.open("html.txt",fstream::app);
    

    unsigned int vectorSize= eventList.size();
        for(unsigned int t = 0; t < vectorSize;t++)
        {
            userFile<<"<p>Date: "<<"<<"\n";
            userFile<<"<p>Time: "<<"<<"\n";
            userFile<<"<p>Location: "<<"<<"\n";
            userFile<<"<p>Purpose: "<<"<<"\n";
        
        }


    userFile.close();


}
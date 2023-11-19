#include "../header/event.h"
#include "../header/collection.h"
#include <iostream>

int main()
{
    EVENT object("a","b","c","d");
 

    collection objectTest;
    objectTest.addEvent(object);
    objectTest.printList();
    objectTest.ListToHTML();


}
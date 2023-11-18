#include "../header/event.h"
#include <iostream>
#include <vector>

struct Event {
    std::string name;
    std::string date;
    std::string location;
};

class EventManager {
private:
    std::vector<Event> events;

public:
    void createEvent(const std::string& name, const std::string& date, const std::string& location) {
        events.push_back({name, date, location});
        std::cout << "Event created successfully!\n";
    }

    void listEvents() {
        if (events.empty()) {
            std::cout << "No events available.\n";
        } else {
            std::cout << "Events:\n";
            for (const auto& event : events) {
                std::cout << "Name: " << event.name << "\tDate: " << event.date << "\tLocation: " << event.location << "\n";
            }
        }
    }
};

int main() {
    EventManager eventManager;

    while (true) {
        std::cout << "\nOptions:\n";
        std::cout << "1. Create Event\n";
        std::cout << "2. List Events\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                {
                    std::string name, date, location;
                    std::cout << "Enter event name: ";
                    std::cin.ignore(); // Clear the newline character from the buffer
                    std::getline(std::cin, name);
                    std::cout << "Enter event date: ";
                    std::cin >> date;
                    std::cout << "Enter event location: ";
                    std::cin.ignore(); // Clear the newline character from the buffer
                    std::getline(std::cin, location);

                    eventManager.createEvent(name, date, location);
                }
                break;

            case 2:
                eventManager.listEvents();
                break;

            case 3:
                std::cout << "Exiting program.\n";
                return 0;

            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    }

    return 0;
}


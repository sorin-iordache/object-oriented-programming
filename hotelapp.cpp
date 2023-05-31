#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Room {
private:
    int number;
    bool isAvailable;
    string guestName;

public:
    Room(int number) {
        this->number = number;
        isAvailable = true;
        guestName = "";
    }

    int getNumber() const {
        return number;
    }

    bool isRoomAvailable() const {
        return isAvailable;
    }

    string getGuestName() const {
        return guestName;
    }

    void bookRoom(const string& guestName) {
        if (isAvailable) {
            isAvailable = false;
            this->guestName = guestName;
            cout << "Room " << number << " has been booked by " << guestName << endl;
        } else {
            cout << "Room " << number << " is already booked." << endl;
        }
    }

    void cancelBooking() {
        if (!isAvailable) {
            isAvailable = true;
            guestName = "";
            cout << "Booking for room " << number << " has been canceled." << endl;
        } else {
            cout << "Room " << number << " is not booked." << endl;
        }
    }
};

class Hotel {
private:
    string name;
    vector<Room> rooms;

public:
    Hotel(const string& name, int numRooms) {
        this->name = name;
        for (int i = 1; i <= numRooms; i++) {
            Room room(i);
            rooms.push_back(room);
        }
    }

    void displayAvailableRooms() const {
        cout << "----- Available Rooms at " << name << " -----" << endl;
        for (const auto& room : rooms) {
            if (room.isRoomAvailable()) {
                cout << "Room " << room.getNumber() << endl;
            }
        }
        cout << "---------------------------------------------" << endl;
    }

    void bookRoom(int roomNumber, const string& guestName) {
        for (auto& room : rooms) {
            if (room.getNumber() == roomNumber) {
                room.bookRoom(guestName);
                return;
            }
        }
        cout << "Room " << roomNumber << " does not exist." << endl;
    }

    void cancelBooking(int roomNumber) {
        for (auto& room : rooms) {
            if (room.getNumber() == roomNumber) {
                room.cancelBooking();
                return;
            }
        }
        cout << "Room " << roomNumber << " does not exist." << endl;
    }
};

int main() {
    Hotel hotel("Grand Hotel", 10);

    hotel.displayAvailableRooms();

    hotel.bookRoom(3, "John Doe");
    hotel.bookRoom(5, "Jane Smith");

    hotel.displayAvailableRooms();

    hotel.cancelBooking(3);

    hotel.displayAvailableRooms();

    return 0;
}

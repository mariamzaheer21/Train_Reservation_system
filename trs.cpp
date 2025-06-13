#include <iostream>
#include <string>
using namespace std;

class Train {
public:
    virtual void menu() = 0; 
};

class Leopard : public Train {
public:;
    void menu() override {
        cout << "\t\t\t\tleopard station"<<endl;
        cout << "\t\t\t\t\tKarachi to Rawalpindi"<<endl;
        cout << "\t\t\t\tKarachi - Hyderabad"<<endl;
        cout << "\t\t\t\t\t\t10:00AM - 11:00AM"<<endl;
        cout << "\t\t\t\tHyderabad  - Multan"<<endl;
        cout << "\t\t\t\t\t\t11:30AM - 03:30PM"<<endl;
        cout << "\t\t\t\tMultan - Lahore"<<endl;
        cout << "\t\t\t\t\t\t04:00PM - 07:00PM"<<endl;
        cout << "\t\t\t\tLahore - Jhelum"<<endl;
        cout << "\t\t\t\t\t\t07:30PM - 08:30PM"<<endl;
        cout << "\t\t\t\tJhelum  - Rawalpindi"<< endl;
        cout << "\t\t\t\t\t\t09:00PM - 10:00PM"<< endl;
        cout << endl;
    }
};

class Lion : public Train {
public:
    void menu() override {
        cout << "\t\t\t\t\t\tLion Station" << endl;
        cout << "\t\t\t\tKarachi to Hyderabad" << endl;
        cout << "\t\t\t\t\tDirect Karachi to Hyderabad" << endl;
        cout << "\t\t\t\t\t\t11:00AM - 12:30PM" << endl;
        cout << endl;
    }
};

class Markhor : public Train {
public:
    void menu() override {
        cout << "\t\t\t\t\tMarkhor Station" << endl;
        cout << "\t\t\t\t\tQuetta to Peshawar" << endl;
        cout << "\t\t\t\tQuetta to Sibi" << endl;
        cout << "\t\t\t\t\t\t09:00AM - 02:00PM" << endl;
        cout << "\t\t\t\tSibi to Sukkur" << endl;
        cout << "\t\t\t\t\t\t02:30PM - 08:00PM" << endl;
        cout << "\t\t\t\tSukkur to Bahawalpur" << endl;
        cout << "\t\t\t\t\t\t08:30PM - 02:10AM" << endl;
        cout << "\t\t\t\tBahawalpur to Lahore" << endl;
        cout << "\t\t\t\t\t\t02:40AM - 09:00AM" << endl;
        cout << "\t\t\t\tLahore to Rawalpindi" << endl;
        cout << "\t\t\t\t\t\t09:30AM - 03:15PM" << endl;
        cout << "\t\t\t\tRawalpindi to Peshawar" << endl;
        cout << "\t\t\t\t\t\t03:45PM - 06:25PM" << endl;
        cout << endl;
    }
};

class Reservation {
protected:
    const int TOTAL_SEATS = 40;
    bool seats[40] = { false }; 

public:
    void displaySeats() {
        cout << "Available Seats: ";
        for (int i = 0; i < TOTAL_SEATS; ++i) {
            if (!seats[i]) {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }

    void makeReservations(int seatNumbers[], int numSeats) {
        for (int i = 0; i < numSeats; ++i) {
            int seatNumber = seatNumbers[i];
            if (seatNumber > 0 && seatNumber <= TOTAL_SEATS) {
                if (!seats[seatNumber - 1]) {
                    seats[seatNumber - 1] = true;
                    cout << "Seat " << seatNumber << " successfully reserved." << endl;
                } else {
                    cout << "Sorry, Seat " << seatNumber << " is already taken." << endl;
                }
            } else {
                cout << "Invalid seat number " << seatNumber << ". Please choose a seat between 1 and "
                 << TOTAL_SEATS << "." << endl;
            }
        }
    }

    int getTotalSeats() const {
        return TOTAL_SEATS;
    }

    bool isSeatReserved(int index) const {
        return seats[index];
    }
};

class Info {
private:
    char name[50];
    int cnic, phone_no;

public:
    void infoo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter CNIC: ";
        cin >> cnic;
        cout << "Enter phone number: ";
        cin >> phone_no;
    }

    void getdata() {
        cout << "\t\t\t\t\tName: " << name << endl;
        cout << "\t\t\t\t\tPhone Num: " << phone_no << endl;
    }
};

int reserve() {
    cout << "\t\t\t\t\t\t\tMENU TYPE" << endl;
    cout << "\t\t\t\t\t\tBUSINESS 1-15 \t ECONOMY 16-40 " << endl;
    cout << "\n";
    cout << "\t\t\t\t\t\t-REFRESHMENT \t -SELF SERVICE" << endl;
    cout << "\t\t\t\t\t\t-SEATS BIRTH\t -SIMPLE SEATS" << endl;
    cout << "\t\t\t\t\t\t-AC + LCD \t -WINDOW VIEW" << endl;
    cout << "\t\t\t\t\t\t-3000rs \t -2000rs" << endl;
}

int main() {
    Leopard s1;
    Lion s2;
    Markhor s3;
    Info ob;
    Reservation res;
    string trainName;

    cout << "Welcome to the Train Reservation System!" << endl;
    cout << "Select Your Train Type" << endl;
    cout << endl;
    cout << " Press 1 For Leopard    (Karachi to Rawalpindi)" << endl;
    cout << " Press 2 For Lion       (Karachi to Hyderabad)" << endl;
    cout << " Press 3 For Markhor    (Quetta to Peshawar)" << endl;
    cout << endl;

    int n;
    cout << "Enter a Number to Select Your train: ";
    cin >> n;
    switch (n) {
    case 1:
        s1.menu();
        trainName = "Leopard";
        break;
    case 2:
        s2.menu();
        trainName = "Lion";
        break;
    case 3:
        s3.menu();
        trainName = "Markhor";
        break;
    default:
        return main();
    }

    reserve();
    while (true) {
        cout<<endl;
        cout << "\t\t\t\t1. Display Available Seats" << endl;
        cout << "\t\t\t\t2. Make a Reservation" << endl;
        cout << "\t\t\t\t3. Personal Information" << endl;
        cout << "\t\t\t\t4. Billing " << endl;
        int choice;
        cout << "\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            res.displaySeats();
            cout<<endl;
            cout << "\t\t\t\t1-15 RESERVE FOR BUSINESS CLASS" << endl;
            cout << "\t\t\t\t16-40 RESERVE FOR ECONOMY CLASS " << endl;
            break;
        case 2: {
            int numSeats;
            cout << "Enter the number of seats you want to reserve: ";
            cin >> numSeats;

            int seatNumbers[numSeats];
            for (int i = 0; i < numSeats; ++i) {
                cout << "Enter seat number " << i + 1 << ": ";
                cin >> seatNumbers[i];
            }

            res.makeReservations(seatNumbers, numSeats);
            break;
        }
        case 3:
            ob.infoo();
            break;
        case 4:
                    cout<<"\t\t\t\t\t\t\t\t========="<<endl;
                    cout <<"\t\t\t\t\t\t\t\t TICKET"<< endl;
                    cout<<"\t\t\t\t\t\t\t\t========="<<endl;
                    cout<<"\t\t\t\t\t-----------------------------------------------------------"<<endl;
                    cout <<"\t\t\t\t\t\t\tTrain Name : "<<trainName << endl;

            for (int i = 0; i < res.getTotalSeats(); ++i) {
                if (res.isSeatReserved(i) && (i + 1) <= 15) {
                    cout << "\t\t\t\t\tBusiness Class: Seat " << i + 1 << endl;
                } else if (res.isSeatReserved(i) && (i + 1) > 15) {
                    cout << "\t\t\t\t\tEconomy Class: Seat " << i + 1 << endl;
                }
            }
            ob.getdata();
            cout <<"\t\t\t\t\t\t\t\t\t\t\tPrice 2000"<< endl;

                     cout<<"\t\t\t\t\t-----------------------------------------------------------"<<endl;

            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
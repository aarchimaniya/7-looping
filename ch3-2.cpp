#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe() {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = "";
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void setDetails() {
        cout << "Enter Cafe ID: ";
        cin >> cafe_id;
        cin.ignore();

        cout << "Enter Cafe Name: ";
        getline(cin, cafe_name);

        cout << "Enter Cafe Type: ";
        getline(cin, cafe_type);

        cout << "Enter Cafe Rating: ";
        getline(cin, cafe_rating);

        cout << "Enter Cafe Location: ";
        getline(cin, cafe_location);

        cout << "Enter Cafe Establishment Year: ";
        cin >> cafe_establish_year;

        cout << "Enter Cafe Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    void displayDetails() {
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Cafe Establishment Year: " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity: " << cafe_staff_quantity << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of cafes: ";
    cin >> N;

    
}


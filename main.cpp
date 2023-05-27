#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
#include <iomanip>
using namespace std;
int generateterminal()
{
    srand(static_cast<unsigned int>(time(0)));
    return rand() % 7 + 1;
}
string generateboardinggate()
{
    srand(static_cast<unsigned int>(time(0)));

    const string alphabets = "ABCD";
    const int numAlphabets = alphabets.length();

    const string numbers = "1234";
    const int numNumbers = numbers.length();

    string result;
    result += alphabets[rand() % numAlphabets];
    result += numbers[rand() % numNumbers];

    return result;
}

string generateflightnumber(int length)
{

    srand(static_cast<unsigned int>(time(0)));

    const string numbers = "0123456789";
    const string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int numNumbers = numbers.length();
    const int numAlphabets = alphabets.length();

    string result;

    result += numbers[rand() % numNumbers];

    result += alphabets[rand() % numAlphabets];

    for (int i = 2; i < length; ++i)
    {
        const string characters = numbers + alphabets;
        const int numCharacters = characters.length();
        result += characters[rand() % numCharacters];
    }

    random_shuffle(result.begin(), result.end());

    return result;
}
string showdate(int n)
{
    time_t today = time(nullptr);
    time_t tomorrow = today + 86400 * n;
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", localtime(&tomorrow));
    return buffer;
}

string generateBillNumber()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    string billNumber;
    for (int i = 0; i < 20; ++i)
    {
        int digit = rand() % 10;
        billNumber += to_string(digit);
    }
    return billNumber;
}

void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name;
    static string gender;
    static string PhoneNo;
    static int age;
    static string add;
    static string nid;
    static string customerId;
    char arr[100];

    void information()
    {
        cout << "\nEnter your name : ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter your age : ";
        cin >> age;
        cout << "\nEnter your address :";
        cin.ignore();
        getline(cin, add);
        cout << "\nEnter your gender : ";
        cin >> gender;
        cout << "\nEnter your phone number : ";
        cin >> PhoneNo;
        cout << "\nEnter your NID card number : ";
        cin >> nid;
        customerId = generateflightnumber(10);
        cout << "\nYour Customer ID is : " << customerId << endl;
        ofstream file("record.txt", ios::app);
        if (file.is_open())
        {
            file << "Name: " << name << endl;
            file << "Age: " << age << endl;
            file << "Address: " << add << endl;
            file << "Gender: " << gender << endl;
            file << "Phone Number: " << PhoneNo << endl;
            file << "NID Card Number: " << nid << endl;
            file << "Customer ID: " << customerId << endl;
            file << "------------------------------------------\n";
            file << endl;
            file.close();
            cout << "Information added to record.txt successfully." << endl;
        }
        else
        {
            cout << "Unable to open file." << endl;
        }
        cout << "\nYour details are saved with us. Please go to Main menu and press 2 for registration.\n"
             << endl;
    }
};

// static variable
string Details::customerId;
string Details::name;
string Details::gender;
int Details::age;

string Details::PhoneNo;
string Details::add;
string Details::nid;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static string billnumber;
    static float charges;
    static int departure_hour;
    static int departure_minute;
    static int arrival_hour;
    static int arrival_minute;
    static string date;
    static string classselect;
    static int seatnumber;
    string promocode;
    static string food;
    static int durationofflight;
    void showticketinfo();
    string foodchoice();
    void showflightdate();
    void showflighttime(int Dur, int price);
    void seatmanagement();
    void showpromo();
    void flight()
    {
        string flight[] = {"Dhaka, Bangladesh", "Chattogram, Bangladesh", "Cox's Bazar, Bangladesh", "Sylhet, Bangladesh", "Saidpur, Bangladesh", "Rajshahi, Bangladesh", "Barisal, Bangladesh", "Jessore, Bangladesh"};

        int serial = 1;
        for (int i = 1; i < 8; i++)
        {
            cout << serial << " -> Flight from "
                 << "Dhaka, Bangladesh"
                 << " to " << flight[i] << endl;
            serial++;
        }
        for (int i = 1; i < 8; i++)
        {
            cout << serial << " -> Flight from " << flight[i] << " to "
                 << "Dhaka, Bangladesh" << endl;
            serial++;
        }
        cout << "\nWelcome to the RahmanAir Horizon!" << endl;
        cout << "Press the number of the place which you want to book the flight: ";
        cin >> choice;

        switch (choice)
        {

            // program for dhaka to chittagong
        case 1:
        {
            showflightdate();
            showflighttime(54, 2749);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
            // program for dhaka to cox's bazar
        case 2:
        {
            showflightdate();
            showflighttime(59, 4084);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();

            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for dhaka to sylhet
        case 3:
        {
            showflightdate();
            showflighttime(50, 2840);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for dhaka to saidpur
        case 4:
        {
            showflightdate();
            showflighttime(60, 2927);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for dhaka rajshahi
        case 5:
        {
            showflightdate();
            showflighttime(45, 3305);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for dhaka to barisal
        case 6:
        {
            showflightdate();
            showflighttime(40, 2750);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for dhaka to jessore
        case 7:
        {
            showflightdate();
            showflighttime(44, 2572);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        // program for chittagong to dhaka
        case 8:
        {
            showflightdate();
            showflighttime(54, 2749);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
            // program for cox's bazar to dhaka
        case 9:
        {
            showflightdate();
            showflighttime(59, 4084);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for sylhet to dhaka
        case 10:
        {
            showflightdate();
            showflighttime(50, 2840);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for saidpur to dhaka
        case 11:
        {
            showflightdate();
            showflighttime(60, 2927);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for rajshahi to dhaka
        case 12:
        {
            showflightdate();
            showflighttime(45, 3305);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for barisal to dhaka
        case 13:
        {
            showflightdate();
            showflighttime(40, 2750);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for jessore to dhaka
        case 14:
        {
            showflightdate();
            showflighttime(44, 2572);
            seatmanagement();
            food = foodchoice();
            showpromo();
            showticketinfo();
            cout << "\nPress any integer key to go Main Menu." << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        // program for default case
        default:
        {
            cout << "Invalid Input. Press any integer key to go back to Main menu" << endl;
            int a;
            cin >> a;
            if (a)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        }
    }
};
int Registration::seatnumber;
float Registration::charges;
int Registration::choice;

string Registration::billnumber;
int Registration::departure_hour;
int Registration::departure_minute;
int Registration::arrival_hour;
int Registration::arrival_minute;
string Registration::date;
string Registration::classselect;
string Registration::food;
int Registration::durationofflight;

void Registration::showticketinfo()
{
    cout << "\nYour seat Number : " << seatnumber << endl;
    cout << "Class : " << classselect << endl;
    cout << "Charges : " << charges << " BDT" << endl;
    cout << "Departure Time : " << departure_hour << " : " << departure_minute << endl;
    cout << "Arrival Time : " << arrival_hour << " : " << arrival_minute << endl;
    cout << "Duration : "
         << "0 hour and " << durationofflight << " minutes" << endl;
    cout << "Date : " << date << endl;
    cout << "Food : " << food << endl;
}

void Registration::showpromo()
{
    string promo;
    cout << "Do you have any PROMO CODE? If you don't have any promo code then press any key" << endl;
    cin >> promo;
    if (promo == "SAKIB07")
    {
        charges = charges - charges * 0.07;
    }
    else
    {
        cout << "Invalid Promo Code." << endl;
    }
}
void Registration::seatmanagement()
{
    seatnumber++;
    if (seatnumber > 60)
    {
        cout << "Seat fill up. Your ticket purchase unsuccessful." << endl;
        return;
    }
}
void Registration::showflighttime(int Dur, int price)
{
    cout << "Following are the flights.\n\n";

    vector<int> departureHours;
    vector<int> departureMinutes;
    vector<int> arrivalHours;
    vector<int> arrivalMinutes;

    int departureHour = 9;
    int departureMinute = 0;
    int duration = Dur;

    cout << "Flight Schedule:" << endl;

    for (int flight = 1; flight <= 7; flight++)
    {
        departureHours.push_back(departureHour);
        departureMinutes.push_back(departureMinute);
        arrivalHours.push_back(departureHour);
        arrivalMinutes.push_back(departureMinute + duration);

        if (arrivalMinutes[flight - 1] >= 60)
        {
            arrivalHours[flight - 1] += arrivalMinutes[flight - 1] / 60;
            arrivalMinutes[flight - 1] %= 60;
        }

        cout << "\nFlight: " << flight << "\nDeparture - "
             << departureHours[flight - 1] << ":" << departureMinutes[flight - 1]
             << "\nArrival - " << arrivalHours[flight - 1] << ":" << arrivalMinutes[flight - 1]
             << "\nFlight Duration: 0 hour and " << duration << " Minutes"
             << "\nPrice: Economy class " << price << " BDT"
             << "\nPrice: Business class " << price * 1.5 << " BDT"
             << "\nPrice: First class " << price * 2 << " BDT" << endl;

        cout << endl;

        departureHour = arrivalHours[flight - 1] + 1;
        departureMinute = arrivalMinutes[flight - 1];
    }
    cout << "Choose your Flight option and then choice class option : " << endl;
    cin >> choice1;
    cout << "\nClass : " << endl;
    cout << "\n1. Economy Class. \t2. Business Class.\t3. First Class\n";
    int classchoise;
    cout << "\nEnter your class choice : " << endl;
    cin >> classchoise;
    switch (classchoise)
    {
    case 1:
    {
        classselect = "Economy Class";
        charges = price;
        break;
    }
    case 2:
    {
        classselect = "Business Class";
        charges = price * 1.5;
        break;
    }
    case 3:
    {
        classselect = "First Class";
        charges = price + price * 2;
        break;
    }
    default:
    {
        cout << "Invalid input" << endl;
    }
        cout << "Enter any integer key to go to main menu." << endl;
        int a;
        cin >> a;
        if (a == 1)
            mainMenu();
        else
            mainMenu();
    }
    durationofflight = Dur;
    departure_minute = departureMinutes[choice1 - 1];
    departure_hour = departureHours[choice1 - 1];
    arrival_hour = arrivalHours[choice1 - 1];
    arrival_minute = arrivalMinutes[choice1 - 1];
}
void Registration::showflightdate()
{
    cout << "________________________Welcome to RahmanAir Horizon________________________\n"
         << endl;
    cout << "Your comfort is our priority. Enjoy the journey!" << endl;
    cout << "Chose the date of your departure: " << endl;
    cout << "1. Date : " << showdate(1) << "\t2. Date : " << showdate(2) << "\t3. Date : " << showdate(3) << endl;
    cout << "4. Date : " << showdate(4) << "\t5. Date : " << showdate(5) << "\t6. Date : " << showdate(6) << endl;
    cout << "7. Date : " << showdate(7) << "\t8. Date : " << showdate(8) << "\t9. Date : " << showdate(9) << endl;
    cout << "10. Date : " << showdate(10) << "\t11. Date : " << showdate(11) << "\t12. Date : " << showdate(12) << endl;
    cout << "13. Date : " << showdate(13) << "\t14. Date : " << showdate(14) << "\t15. Date : " << showdate(15) << endl;
    cout << "16. Date : " << showdate(16) << "\t17. Date : " << showdate(17) << "\t18. Date : " << showdate(18) << endl;
    cout << "19. Date : " << showdate(19) << "\t20. Date : " << showdate(20) << "\t21. Date : " << showdate(21) << endl;
    cout << "22. Date : " << showdate(22) << "\t23. Date : " << showdate(23) << "\t24. Date : " << showdate(24) << endl;
    cout << "25. Date : " << showdate(25) << "\t26. Date : " << showdate(26) << "\t27. Date : " << showdate(27) << endl;
    cout << "28. Date : " << showdate(28) << "\t29. Date : " << showdate(29) << "\t30. Date : " << showdate(30) << endl;

    int date_choice;
    cin >> date_choice;

    if (date_choice == 1)
        date = showdate(1);
    else if (date_choice == 2)
        date = showdate(2);
    else if (date_choice == 3)
        date = showdate(3);
    else if (date_choice == 4)
        date = showdate(4);
    else if (date_choice == 5)
        date = showdate(5);
    else if (date_choice == 6)
        date = showdate(6);
    else if (date_choice == 7)
        date = showdate(7);
    else if (date_choice == 8)
        date = showdate(8);
    else if (date_choice == 9)
        date = showdate(9);
    else if (date_choice == 10)
        date = showdate(10);
    else if (date_choice == 11)
        date = showdate(11);
    else if (date_choice == 12)
        date = showdate(12);
    else if (date_choice == 13)
        date = showdate(13);
    else if (date_choice == 14)
        date = showdate(14);
    else if (date_choice == 15)
        date = showdate(15);
    else if (date_choice == 16)
        date = showdate(16);
    else if (date_choice == 17)
        date = showdate(17);
    else if (date_choice == 18)
        date = showdate(18);
    else if (date_choice == 19)
        date = showdate(19);
    else if (date_choice == 20)
        date = showdate(20);
    else if (date_choice == 21)
        date = showdate(21);
    else if (date_choice == 22)
        date = showdate(22);
    else if (date_choice == 23)
        date = showdate(23);
    else if (date_choice == 24)
        date = showdate(24);
    else if (date_choice == 25)
        date = showdate(25);
    else if (date_choice == 26)
        date = showdate(26);
    else if (date_choice == 27)
        date = showdate(27);
    else if (date_choice == 28)
        date = showdate(28);
    else if (date_choice == 29)
        date = showdate(29);
    else if (date_choice == 30)
        date = showdate(30);
    else
    {
        cout << "Invalid Date Inpur" << endl;
        cout << "Press any integer key to go to main menu" << endl;
        int back1;
        cin >> back1;
        if (back1 == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
    }
}

string Registration::foodchoice()
{
    cout << "Will you take any food during journey time? Choose from this option." << endl;
    cout << "Appetizers:\n";
    cout << "1. Bruschetta with fresh tomatoes, basil, and balsamic glaze\n";
    cout << "2. Spinach and artichoke dip with tortilla chips\n";
    cout << "3. Caprese skewers with cherry tomatoes, mozzarella, and basil\n";
    cout << "\nMain Courses:\n";
    cout << "4. Grilled salmon with lemon dill sauce, served with roasted potatoes and steamed asparagus\n";
    cout << "5. Chicken piccata with a side of creamy mashed potatoes and roasted vegetables\n";
    cout << "6. Vegetarian option: Portobello mushroom stuffed with quinoa, spinach, and feta cheese, served with a mixed green salad\n";
    cout << "\nSides:\n";
    cout << "7. Garlic butter roasted Brussels sprouts\n";
    cout << "8. Wild rice pilaf\n";
    cout << "9. Sweet potato fries with chipotle aioli\n";
    cout << "\nSalads:\n";
    cout << "10. Classic Caesar salad with homemade dressing, croutons, and Parmesan cheese\n";
    cout << "11. Mediterranean salad with mixed greens, Kalamata olives, feta cheese, cherry tomatoes, and Greek dressing\n";
    cout << "12. Roasted beet and goat cheese salad with arugula and balsamic vinaigrette\n";
    cout << "\nDesserts:\n";
    cout << "13. Chocolate lava cake with vanilla ice cream\n";
    cout << "14. Fresh fruit platter with a side of honey yogurt dip\n";
    cout << "15. New York cheesecake with raspberry sauce\n";
    cout << "\nBeverages:\n";
    cout << "16. Freshly squeezed lemonade\n";
    cout << "17. Iced tea (sweetened and unsweetened)\n";
    cout << "18. Fruit-infused water (lemon, cucumber, or mixed berries)\n";

    cout << "Enter your choice. If you don't want to take food in flight then enter any number without (0-18) " << endl;
    int foodchoice;
    cin >> foodchoice;
    string foodd;
    switch (foodchoice)
    {
    case 1:
        foodd = "Bruschetta with fresh tomatoes, basil, and balsamic glaze";
        break;
    case 2:
        foodd = "Spinach and artichoke dip with tortilla chips";
        break;
    case 3:
        foodd = "Caprese skewers with cherry tomatoes, mozzarella, and basil";
        break;
    case 4:
        foodd = "Grilled salmon with lemon dill sauce, served with roasted potatoes and steamed asparagus";
        break;
    case 5:
        foodd = "Chicken piccata with a side of creamy mashed potatoes and roasted vegetables";
        break;
    case 6:
        foodd = "Vegetarian option: Portobello mushroom stuffed with quinoa, spinach, and feta cheese, served with a mixed green salad";
        break;
    case 7:
        foodd = "Garlic butter roasted Brussels sprouts";
        break;
    case 8:
        foodd = "Wild rice pilaf";
        break;
    case 9:
        foodd = "Sweet potato fries with chipotle aioli";
        break;
    case 10:
        foodd = "Classic Caesar salad with homemade dressing, croutons, and Parmesan cheese";
        break;
    case 11:
        foodd = "Mediterranean salad with mixed greens, Kalamata olives, feta cheese, cherry tomatoes, and Greek dressing";
        break;
    case 12:
        foodd = "Roasted beet and goat cheese salad with arugula and balsamic vinaigrette";
        break;
    case 13:
        foodd = "Chocolate lava cake with vanilla ice cream";
        break;
    case 14:
        foodd = "Fresh fruit platter with a side of honey yogurt dip";
        break;
    case 15:
        foodd = "New York cheesecake with raspberry sauce";
        break;
    case 16:
        foodd = "Freshly squeezed lemonade";
        break;
    case 17:
        foodd = "Iced tea (sweetened and unsweetened)";
        break;
    case 18:
        foodd = "Fruit-infused water (lemon, cucumber, or mixed berries)";
        break;
    case 19:
        foodd = "No food selected.";
        break;
    default:
        foodd = "No food selected.";
    }
    return foodd;
}
class Payment
{
public:
    static string billnumber;
    void payment()
    {
        cout << "You have successfully booked the flight. Please pay the ticket price using mobile banking or bank accout. For printing your ticket go to Main menu" << endl;
        billnumber = generateBillNumber();
        cout << "\n______________________Mobile Banking______________________" << endl;
        cout << "\nFor BKASH, NAGAD, UPAY, ROCKET, SURECASH payment Merchant Number: 111120022007007. Use bill Number as reference." << endl;
        cout << "\nFor bank payment : " << endl;
        cout << "Sonali bank account number: 20070071001" << endl;
        cout << "Rupali bank account number: 20070072002" << endl;
        cout << "Jonota bank account number: 20070073003" << endl;
        cout << "Agrani bank account number: 20070074004" << endl;
        cout << "AB bank account number: 20070075005" << endl;
        cout << "\nUse BILL NUMBER as reference" << endl;
        cout << "\nYour bill Number : " << billnumber << endl;
    }
};
string Payment::billnumber;

class Ticket : public Registration, public Details, public Payment // multiple inheritance
{
public:
    void Bill()
    {
        string destination = "";
        ofstream out("Ticket.txt");
        if (Registration::choice == 1)
        {
            destination = "Flight from Dhaka, Bangladesh to Chattogram, Bangladesh";
        }
        else if (Registration::choice == 2)
        {
            destination = "Flight from Dhaka, Bangladesh to Cox's Bazar, Bangladesh";
        }
        else if (Registration::choice == 3)
        {
            destination = "Flight from Dhaka, Bangladesh to Sylhet, Bangladesh";
        }
        else if (Registration::choice == 4)
        {
            destination = "Flight from Dhaka, Bangladesh to Saidpur, Bangladesh";
        }
        else if (Registration::choice == 5)
        {
            destination = "Flight from Dhaka, Bangladesh to Rajshahi, Bangladesh";
        }
        else if (Registration::choice == 6)
        {
            destination = "Flight from Dhaka, Bangladesh to Barisal, Bangladesh";
        }
        else if (Registration::choice == 7)
        {
            destination = "Flight from Dhaka, Bangladesh to Jessore, Bangladesh";
        }
        else if (Registration::choice == 8)
        {
            destination = "Flight from Chattogram, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 9)
        {
            destination = "Flight from Cox's Bazar, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 10)
        {
            destination = "Flight from Sylhet, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 11)
        {
            destination = "Flight from Saidpur, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 12)
        {
            destination = "Flight from Rajshahi, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 13)
        {
            destination = "Flight from Barisal, Bangladesh to Dhaka, Bangladesh";
        }
        else if (Registration::choice == 14)
        {
            destination = "Flight from Jessore, Bangladesh to Dhaka, Bangladesh";
        }

        {
            out << "-------------------------------------------------------------------" << endl;
            out << "                               TICKET                              " << endl;
            out << "-------------------------------------------------------------------" << endl;
            out << "                          RahmanAir Horizon                        " << endl;
            out << "-------------------------------------------------------------------" << endl;
            out << endl;
            out << "Passenger Details : " << endl;
            out << endl;
            out << "  Customer ID : " << Details::customerId << endl;
            out << "  Passenger Name : " << Details::name << endl;
            out << "  Passenger Address : " << Details::add << endl;
            out << "  Passenger Age : " << Details::age << endl;
            out << "  Passenger NID number : " << Details::nid << endl;
            out << "  Passenger Phone number : " << PhoneNo << endl;
            out << "  Passenger Gender : " << Details::gender << endl;
            out << endl;
            out << "Flight Details :" << endl;
            out << "   Flight Number : " << generateflightnumber(7) << endl;
            out << "   " << destination << endl;
            out << "   Departure Date : " << Registration::date << endl;
            out << "   Departure Time : " << Registration::departure_hour << " : " << Registration::departure_minute << endl;
            out << "   Arrival Time : " << Registration::arrival_hour << " : " << Registration::arrival_minute << endl;
            out << "   Duration : "
                << "0 hour and " << Registration::durationofflight << " minutes" << endl;
            out << "   Seat Number : " << Registration::seatnumber << endl;
            out << "   Ticket Number : " << generateflightnumber(10) << endl;
            out << endl;

            out << "Fare Details : " << endl;
            out << "   Fare Class : " << Registration::classselect << endl;
            out << "   Fare ( tax included ): " << Registration::charges << " BDT" << endl;
            out << "  Bill Number : " << Payment::billnumber << endl;
            out << endl;
            out << "Additional Information :" << endl;
            out << "   Food : " << Registration::food << endl;
            out << "   Baggage Allowance : 1 piece, 7 kg (15.43  lbs)" << endl;
            out << "   Cabin : " << Registration::classselect << endl;
            out << "   Boarding Gate : " << generateboardinggate() << endl;
            out << "   Terminal : Terminal " << generateterminal() << endl;
            out << "   Check-in Counter : Counter " << generateterminal() << endl;
            out << endl;
            out << "Important Reminders:" << endl;
            out << "   - Please arrive at the airport at least half an hours before the departure time." << endl;
            out << "   - Keep your ticket and boarding pass handy throughout your journey." << endl;
            out << endl;
            out << "For any inquiries or changes, please contact : \nRahmanAir Horizon " << endl;
            out << "\nHead Office,\nHouse # 06, \nRoad # 137, \nBlock # SE(D), \nGulshan-1, \nDhaka-1212. Bangladesh.\n"
                << endl;
            out << "   Phone: +002007007" << endl;
            out << "   Website: www.rahmanairhorizon.com" << endl;
            out << endl;
            out << "------------------------------------------------" << endl;
        }
        out.close();
    }
    void display()
    {
        ifstream ifs("Ticket.txt");
        {
            if (!ifs)
            {
                cout << "File error" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 200);
                cout << arr << endl;
            }
        }
        ifs.close();

        ifstream iifs("Ticket.txt");
        ofstream oofs("Registration_Record.txt", ios::app);

        if (!iifs)
        {
            cerr << "File error: Ticket.txt" << endl;
        }

        if (!oofs)
        {
            cerr << "File error: Registration_Record.txt" << endl;
        }

        string line2;
        while (getline(iifs, line2))
        {
            oofs << line2 << endl;
        }

        iifs.close();
        oofs.close();

        cout << "Contents copied from Ticket.txt to Registration_Record.txt." << endl;
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    cout << endl;
    cout << "\033[1;31m";
    cout << "                                       |" << endl;
    cout << "                                       |" << endl;
    cout << "                                       |" << endl;
    cout << "                                     .-'-." << endl;
    cout << "                                    ' ___ '" << endl;
    cout << "                          ---------'  .-.  '---------" << endl;
    cout << "          _________________________'  '-'  '_________________________" << endl;
    cout << "           ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''" << endl;
    cout << "                         \\    /  ||/   H   \\||  \\    /" << endl;
    cout << "                          '--'   OO   O|O   OO   '--'" << endl;
    cout << "\033[0m";

    cout << "\033[1;32m";
    cout << "\t_________________________________________________________________" << endl;
    cout << "\t\t                \033[31mRahmanAir Horizon\033[0m          " << endl;
    cout << "\t____________________________Main Menu____________________________" << endl;
    cout << "\t_________________________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t" << endl;
    cout << "\033[1;31m";
    cout << "\t|\t  Press \033[1;37m1\033[1;31m to add the Customer Details                   |" << endl;
    cout << "\033[1;32m";
    cout << "\t|\t  Press \033[1;37m2\033[1;32m for Flight Registration                       |" << endl;
    cout << "\033[1;33m";
    cout << "\t|\t  Press \033[1;37m3\033[1;33m for Payment                                   |" << endl;
    cout << "\033[1;34m";
    cout << "\t|\t  Press \033[1;37m4\033[1;34m for Ticket                                    |" << endl;
    cout << "\033[1;35m";
    cout << "\t|\t  Press \033[1;37m5\033[1;35m for Contact us                                |" << endl;
    cout << "\033[1;36m";
    cout << "\t|\t  Press \033[1;37m6\033[1;36m to Exit                                       |" << endl;
    cout << "\033[0m";

    cout << "\t_________________________________________________________________" << endl;
    cout << "\033[1;33m"; 
    cout << "To enhance your booking experience and enjoy a delightful journey, don't forget to utilize the exclusive 'SAKIB07' promo code," << endl;
    cout << "which entitles you to an extraordinary \033[1;31m7%\033[1;33m discount on your ticket purchase," << endl;
    cout << "adding an extra touch of savings to your travel plans." << endl;
    cout << "\033[0m"; 
    cout << "Enter the choice : ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;
    Payment p;

    switch (lchoice)
    {
    case 1:
    {
        cout << "______________Customers____________\n"
             << endl;
        d.information();
        cout << "Press any integer key to go back to the Main Menu" << endl;
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "___________Book a flight using this system____________\n"
             << endl;
        r.flight();
        break;
    }

    case 3:
    {
        p.payment();
        cout << "Press any integer key to go back in Main menu" << endl;
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        cout << "______________Get your Ticket __________________________\n"
             << endl;
        t.Bill();
        cout << "Your Ticket is printed, you can collect \n"
             << endl;
        cout << "Press 1 to display your ticket";
        cin >> back;
        if (back == 1)
        {
            t.display();
            cout << "Press any integer key to go back in Main menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 5:
    {
        cout << "___________________________Contact us:____________________________" << endl;
        cout << "\nHead Office,\nHouse # 06, \nRoad # 137, \nBlock # SE(D), \nGulshan-1, \nDhaka-1212. Bangladesh.\n "
             << endl;
        cout << "Phone: +002007007" << endl;
        cout << "Website: www.rahmanairhorizon.com" << endl;

        cout << "Press any integer key to go back in Main menu" << endl;
        cin >> back;
        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 6:
    {
        cout << "\n\n\t________________Thank you_________________" << endl;
        break;
    }

    default:
    {
        cout << "Invalid input, Please try again\n"
             << endl;
        mainMenu();
        break;
    }
    }
}
class Aircraft
{ // polymorphisom
public:
    virtual void fly() = 0;
};

class Boeing747 : public Aircraft
{
public:
    void fly()
    {
        cout << "Boeing 747 is flying" << endl;
    }
};

class AirbusA380 : public Aircraft
{
public:
    void fly() override
    {
        cout << "AirbusA380 is flying" << endl;
    }
};

int main()
{
    // Aircraft* aircraft = new Boeing747();
    // aircraft->fly();
    Management mobj;
    return 0;
}

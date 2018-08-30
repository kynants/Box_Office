// This program will prompt the user to enter how many adult and child tickets
// were sold. It will then calculate the gross profit, net profit, the
// difference between the two, as well as the amount paid to the movie
// distributor.

#include <iostream>
using namespace std;

int main() {
    double adultTicketsPrice = 10.0,
           childTicketsPrice = 6.0,
           adultTicketsSold,
           childTicketsSold;

    string movie;

    double gross,
           net,
           dist;

    cout << "What was the name of the movie shown? ";
    cin >> movie;

    cout << "How many adult tickets were sold? ";
    cin >> adultTicketsSold;

    cout << "How many child tickets were sold? ";
    cin >> childTicketsSold;

    gross = (adultTicketsPrice * adultTicketsSold) +
            (childTicketsPrice * childTicketsSold);

    net = gross * 0.2;

    dist = gross - net;

    // Prompts & Output
    cout << "Movie Name: " << movie << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $" << gross << endl;
    cout << "Net Box Office Profit: $" << net << endl;
    cout << "Amount Paid to Distributor: $" << dist << endl;

    return 0;
}
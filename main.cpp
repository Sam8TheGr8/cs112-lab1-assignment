#include <iostream>
#include <string>
using namespace std;

string get_plan() {
    string plan;
    while (plan != "gold" && plan != "silver") {
        cout << "Enter plan: ";
        cin >> plan;
        if (plan != "gold" && plan != "silver") {
            cout << "That's not a valid option." << endl;
        }
    }
    return plan;
}

int get_months() {
    int months;
    cout << "For how many months?" << endl;
    cin >> months;
    return months;
}

int compute_costs(int months, string plan) {
    int cost;
    if (months == 1) {
        cost = 90;
    }
    else if (plan == "silver") {
        cost = 60;
    }
    else {
        if (months <= 6) {
            cost = 70;
        }
        else {
            cost = 35;
        }
    }
    return cost;
}

int main() {
    string my_plan = get_plan();
    int num_months = get_months();
    int my_cost = compute_costs(num_months, my_plan);
    cout << "The cost for your plan is $" << my_cost << endl;
    return 0;
}
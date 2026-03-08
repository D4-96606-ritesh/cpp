#include <iostream>
using namespace std;
class Servicing
{
    string customerName;
    string vehicleNumber;
    string mobileNumber;
    double totalBill;
    virtual double calculateTotalBill() = 0;

public:
    Servicing(string customerName, string vehicleNumber, string mobileNumber) : customerName(customerName), vehicleNumber(vehicleNumber), mobileNumber(mobileNumber) {}
    void displayBill()
    {
        cout << endl
             << "Bill : ";
        cout << endl
             << "Customer Name : " << customerName;
        cout << endl
             << "Vehicle Number : " << vehicleNumber;
    }

    void setCustomerName()
    {
        cout << endl
             << "Enter customer name : ";
        cin >> customerName;
    }
    void setVehicleNumber()
    {
        cout << endl
             << "Enter Vehicle  Number : ";
        cin >> vehicleNumber;
    }
    void setMobileNumber()
    {
        cout << endl
             << "Enter Mobile Number : ";
        cin >> mobileNumber;
    }
    void getCustomerName()
    {
        cout << endl
             << "Customer Name : " << customerName;
        cout << endl
             << "Mobile Number : " << mobileNumber;
    }
    void getVehicleNumber()
    {
        cout << endl
             << "Vehicle Number : " << vehicleNumber;
    }
    void getMobileNumber()
    {
        cout << endl
             << "Mobile Number : " << mobileNumber;
    }
};
class Maintenance : public Servicing
{
    string partName;
    double partPrice;
    double labourCharge;
    Maintenance(string customerName, string vehicleNumber, string mobileNumber, string partName, double partPrice, double labourCharge) : Servicing(customerName, vehicleNumber, mobileNumber)
    {
    }
    double calculateTotalBill()
    {
        double totalPrize = 0;
        totalPrize = (partPrice * (105 / 100)) + (labourCharge * (105 / 100));
        return totalPrize;
    }
};
class OilChange : public Servicing
{
    string oilName;
    double oilPrice;
    OilChange(string customerName, string vehicleNumber, string mobileNumber, string oilName, double oilPrice) : Servicing(customerName, vehicleNumber, mobileNumber)
    {
    }
    double calculateTotalBill()
    {
        double totalPrize = 0;
        totalPrize = oilPrice * (112 / 100);
        return totalPrize;
    }
};
int main()
{
}
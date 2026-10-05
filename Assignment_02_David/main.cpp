#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
float CurrentCalculator (float voltage, float resistance);
float PowerCalculator (float voltage, float current);
void DetailsPrinter (string userName, float current, float power);

int main () {
    string userName;
    float voltage, resistance, current, power;
    cout<<"Good day fellow human, Please can you provide me with your name?"<<endl;
    getline(cin, userName);
    cout<<endl;
    cout<<"So we would be having a little calculator testing session"<<endl;
    cout<<"====================================="<<endl;
    cout<<"        Power and Current Tester     "<<endl;
    cout<<"====================================="<<endl;
    cout<<"Enter a value for the following"<<endl;
    cout<<"Voltage in V: ";
    cin>>voltage;
    cout<<"V"<<endl;
    cout<<"Resistance in Ω: ";
    cin>>resistance;
    cout<<"Ω"<<endl;

    cout<<"====================================="<<endl;
    current = CurrentCalculator(voltage, resistance);
    power = PowerCalculator(voltage, current);
    DetailsPrinter(userName, current, power);
    return 0;
}


float CurrentCalculator (float voltage, float resistance){
    float current;
    current = voltage / resistance;
    return current;
}

float PowerCalculator (float voltage, float current){
    float power;
    power = current * voltage;
    return power;
}

void DetailsPrinter (string userName, float current, float power){

    cout<<"====================================="<<endl;
    cout<<"      User Name And Results"<<endl;
    cout<<"====================================="<<endl;
    cout<<"User Name: "<<userName<<endl;
    cout<<"Current: "<<current<<"Ω"<<endl;
    cout<<"Power: "<<power<<"W"<<endl;
    cout<<"====================================="<<endl;
}

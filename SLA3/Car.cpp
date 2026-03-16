#include "Vehicle.h"

Car::Car(){
     vehicleCount++;
}

Car::Car(char *reg,char *model,char *man,int y,char *fuel)
{
    strcpy(RegistrationNumber,reg);
    strcpy(ModelName,model);
    strcpy(Manufacturer,man);
    Year = y;

    strcpy(FuelType,fuel);

    vehicleCount++;
}

inline void Car::formatDisplay()
{
    cout<<"RegNo: "<<RegistrationNumber
        <<", Model: "<<ModelName
        <<", Manufacturer: "<<Manufacturer
        <<", Year: "<<Year
        <<", FuelType: "<<FuelType<<endl;
}

void Car::displayInfo()
{
    formatDisplay();
}

void Car::writeToFile(ofstream &out)
{
    char type='C';
    out.write((char*)&type,sizeof(type));
    out.write((char*)this,sizeof(Car));
}

void Car::readFromFile(ifstream &in)
{
    in.read((char*)this,sizeof(Car));
}
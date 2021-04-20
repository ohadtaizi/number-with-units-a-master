


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"
namespace ariel
{
        void NumberWithUnits::read_units(ifstream &units_file)
{

}
    //  static void read_units(ifstream& units_file)
    //  {
        //  if (units_file.is_open()) 
        //  {
        //      string line;
        //      stringstream ss(line);

        //       while (getline(units_file, line)) 
        //      { // line= "1 km = 1000 m"    
        //       int number1, number2;
        //         string unit1, unit2;
                
        //        ss >> number1 >> unit1 >> number2 >> unit2;
        //          cout <<number1 << " "<< unit1<< " "<<number2 << " "<< unit2<<endl; 
        //      }    
        //  }
        //  units_file.close();
    // }
       
     NumberWithUnits operator*(double number, NumberWithUnits& num1) {
        return NumberWithUnits();
    }

    NumberWithUnits operator*(const NumberWithUnits& num1, double number) {
        return NumberWithUnits();
    }
             NumberWithUnits operator-(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return NumberWithUnits();
    }
         NumberWithUnits operator-(const NumberWithUnits& num){
        return NumberWithUnits();
    }
          NumberWithUnits operator--(const NumberWithUnits& num1, int num2){
        return NumberWithUnits();
    }  
         NumberWithUnits operator--(const NumberWithUnits& num){
        return NumberWithUnits();
    }  
         NumberWithUnits operator-=(const NumberWithUnits& num1, const NumberWithUnits& num2)
        {
            return NumberWithUnits();
        }
        //  NumberWithUnits NumberWithUnits::operator*=(const NumberWithUnits& num)
        // {
        
        //     return *this;
        // }
        
        NumberWithUnits operator+( const NumberWithUnits& num1, const NumberWithUnits& num2){
        return NumberWithUnits();
    }
        NumberWithUnits operator+(const NumberWithUnits& num){
        return NumberWithUnits();
    }
        NumberWithUnits operator++(const NumberWithUnits& num1, int num2){
        return NumberWithUnits();
    }  
         NumberWithUnits operator++(const NumberWithUnits& num){
        return NumberWithUnits();
    }      NumberWithUnits operator+=( const NumberWithUnits& num1, const NumberWithUnits& num2){
        return NumberWithUnits();
    }
         bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;
    }
       bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;    
    }
       bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;
    }
       bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;
    }
    bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;
    }

    bool  operator>(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return true;
    }


    ostream& operator << (ostream& s, const NumberWithUnits &a){
    s << (double)a.number <<"["<<a.unit<<"]";
    return s;
    }

    istream& operator >> (istream& s,  const NumberWithUnits &a){
    //     //string temp;
    //     //s >> a.number >> temp >> a.unit;
      return s;
    }

};
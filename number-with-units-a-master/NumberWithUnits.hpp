
#include <fstream>
#include <string>
#include <map>
using namespace std;

namespace ariel{



class NumberWithUnits{
    private:    
      double number;
        string unit;
         
    public:
       
       
         NumberWithUnits(double number, string unit){
            this->number = number;
            this->unit = unit;
        }
        NumberWithUnits(){
           
        }
         ~NumberWithUnits(){}
        map < string, map <int,string> > conversions;
        // static void read_units( ifstream& units_file);

        // NumberWithUnits(double x,string unit_file){
        //     number = x;
        //     this->unit = unit_file; 
        // }
                //   NumberWithUnits(double x, const std::string &units_file);
        static void read_units(ifstream &units_file);
        friend NumberWithUnits operator+(const NumberWithUnits&  num1,  const NumberWithUnits&  num2); 
        friend NumberWithUnits operator+(const NumberWithUnits&  num); 

        // Declare prefix and postfix increment operators.
        friend NumberWithUnits operator++(const NumberWithUnits& num, int n);       // Prefix increment operator.
        friend NumberWithUnits operator++(const NumberWithUnits& num);     // Postfix increment operator.

        // Declare prefix and postfix decrement operators.
        friend NumberWithUnits operator--(const NumberWithUnits&  num1, int num2);       // Prefix decrement operator.
        friend NumberWithUnits operator--(const NumberWithUnits&  num);     // Postfix decrement operator.
        friend NumberWithUnits operator-(const NumberWithUnits& num1, const NumberWithUnits& num2); 
        friend NumberWithUnits operator-(const NumberWithUnits& num);
        friend NumberWithUnits operator+=(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend NumberWithUnits operator-=(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend NumberWithUnits operator*(NumberWithUnits& a, double number);
        friend NumberWithUnits operator*(double number, NumberWithUnits& a);
        //  NumberWithUnits& operator*=(const NumberWithUnits& num);
         
        friend bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend bool operator>(const NumberWithUnits& num1, const NumberWithUnits& num2);
        friend bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2);
        
        //friend 
        

        // NumberWithUnits operator+ (const NumberWithUnits&a, const NumberWithUnits &b)
        // {
        //     NumberWithUnits res;
        //     res.x = a.x + b.x;
        //     res.y = a.y + b.y;
        //     return res;
        // }
        friend ostream& operator << (ostream& s, const NumberWithUnits &a);
        friend istream& operator >> ( istream& s,const  NumberWithUnits &a); 

};



};
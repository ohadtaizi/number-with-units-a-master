
#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <string>
#include <algorithm>  

using namespace std;
#include <iostream> 
#include <sstream> 
using namespace ariel;

TEST_CASE(" operators Comperators "){
CHECK(("10[km]")==("10000[m]"));
CHECK(("10[m]")==("1000[cm]"));
CHECK(("10[kg]")==("10000[g]"));
CHECK(("10[ton]")==("10000[kg]"));
CHECK(("1[ton]")==("1000000[g]"));
CHECK(("1[hour]")==("60[min]"));
CHECK(("1[hour]")==("3600[sec]"));
CHECK(("1[USD]")==("3.33[ILS]"));
}
TEST_CASE("operators ++ -- == "){
 NumberWithUnits t(10,"km");
 stringstream ans;
 ans<<t;
CHECK(("10[km]")==(ans.str()));
 ans<<++t;
CHECK(("11[km]")==(ans.str()));
 ans<<t++;
 CHECK(("11[km]")==(ans.str()));
ans<<t;
 CHECK(("12[km]")==(ans.str()));
 ans<<--t;
 CHECK(("11[km]")==(ans.str()));
  ans<<t--;
 CHECK(("11[km]")==(ans.str()));
}
TEST_CASE("operators + - = "){
  NumberWithUnits o(6,"km");
stringstream ans;
    ans<<o;
   CHECK(("6[km]")==(ans.str()));   
      ans<<-o;
    CHECK(("-6[km]")==(ans.str()));
        ans<<+o;
    CHECK(("-6[km]")==(ans.str()));

}
TEST_CASE("operators *"){
  NumberWithUnits t(4,"m");

   stringstream ans;
    ans<<2*t;
    CHECK(("8[m]")==(ans.str()));
   NumberWithUnits s(5,"USD");

  ans<<4*s;
    CHECK(("20[USD]")==(ans.str()));
    
}


TEST_CASE(" operators => <= > < =="){
    NumberWithUnits num1(6,"ton");
    NumberWithUnits num2(9,"ton");
    CHECK((num1==num2)==(false));
    CHECK((num1<num2)==(true));
    CHECK((num1<=num2)==(true));
    CHECK((num1!=num2)==(true));
    CHECK((num1>num2)==(false));
    CHECK((num1>=num2)==(false));


}

TEST_CASE("throws wrong operators + * -"){
stringstream ans;
    NumberWithUnits t(5,"ton");
   NumberWithUnits z(10,"cm");
 NumberWithUnits h(10,"sec");
    CHECK_THROWS(ans<<2*t;);
    CHECK_THROWS(ans<<t+z);
     CHECK_THROWS(ans<<t-z);
      CHECK_THROWS(ans<<h+z);
     CHECK_THROWS(ans<<t-h);
}



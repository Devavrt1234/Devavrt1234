
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;

struct City{
    string name;
    long population;
    double cost;
};
struct Country{
  string name;
  vector<City> cities;
};
struct Tours{
    string title;
    string underline;
    vector<Country> countries;
};

void ruler(){
   // cout<<"\n1234567890123456789012345678901234567890123456789012345678901234567890\n"<<endl;
}
int main()
{
   Tours tours{
        "[*][*][*]-----:Tours Ticket Table for Prices from Miami:-----[*][*][*]","----------------------------------------------------------------------",
       {
           {
               "1.Colombia",{
                   {"1.Bogota",8778000,400.98},
                   {"2.Cali",2401000,424.12},
                   {"3.Medellin",2464000,350.98},
                   {"4.Cartagena",972000,345.34}
               }
           },
           {
               "2.Brazil",{
                 {"1.Rio De Janiero",13500000,567.45},
                 {"2.Sao Paulo",11310000,975.45},
                 {"3.Salvaldor",18234000,855.99}
               }
           },
           {
               "3.Chile",{
                 {"1.Valdivia",260000,569.12},
                 {"2.Satiago",7040000,520.00}
               }
           },
           
           { "4.Argentina",{
                   {"1.Buenos Aires",3010000,723.77}
               }
           }
       }
       
   };
   
   const int total_width   {70};
   const int field1_width  {20};
   const int field2_width  {20};
   const int field3_width  {15};
   const int field4_width  {15};
   ruler();
   int title_length=tours.title.length();
   
   cout<<setw((total_width-title_length)/2)<<""<<tours.underline<<endl;
//    - (minus)hai ye
   cout<<setw((total_width-title_length)/2)<<""<<tours.title<<endl;
   cout<<setw((total_width-title_length)/2)<<""<<tours.underline<<endl;
   cout<<endl;
   cout<<setw(field1_width)<<left<<"Country"<<
   setw(field2_width)<<left<<"City"
   <<setw(field3_width)<<right<<"population"
   <<setw(field4_width)<<right<<"Price"
   <<endl;
   cout<<setw(total_width)<<setfill('-')<<""<<endl;
    
   cout<<setfill('.');
   cout<<setprecision(2)<<fixed;
   
   for(Country country:tours.countries){
       
       for(size_t i=0;i<country.cities.size();i++){
           cout<<setw(field1_width)<<left<<((i==0)?country.name:"")
           <<setw(field2_width)<<left<<country.cities.at(i).name
           <<setw(field3_width)<<right<<country.cities.at(i).population
           <<setw(field4_width)<<right<<country.cities.at(i).cost
           <<endl;
       }
       cout<<setw((total_width-title_length)/2)<<""<<tours.underline<<endl;
   }
   cout<<endl<<endl;
   
    return 0;
}

//    single-line comment
/*    multi-line
                  comment    */

#include <iostream>     // header file library for input and output
using namespace std;    // names objects and variables from standard library

namespace coffee {
    std::string drink = "\nWould you like to grab some coffee?\n";
}

namespace tea {
    std::string drink = "\nWould you like to grab some tea?\n";
}

void name_space() {

    std::string date;
    std::cout << "\nAsk her out. [Coffee/Tea]: ";
    std::getline(std::cin, date);

    if (date == "coffee")
        std::cout << coffee::drink;
    else
        std::cout << tea::drink;
}

// main function
int main() {

/*  ---------          OUTPUT (Print Text)          ----------------------

    std::cout         standard character output
    std::endl;        standard end line (flushes output buffer)
        <<            insertion operator

    \n    new line (for better performance)
    \t    tab
    \\    inserts backslash (\)
    \"    inserts double quote (")
*/
    std::cout << "\nHim: The moon is beautiful, isn't it?" << std::endl;

/*  ---------          VARIABLES          ----------------------------
    
    - containers for storing data values

    int       integers (whole numbers)
    double    floating point numbers
    char      single characters, surrounded by single quotes ('')
    string    text, surrounded by double quotes ("")
    bool      values with two states, true or false

    Declaring (Creating) Variables:
        - type variableName = value;     
*/
    int age = 20;
    double gpa = 1.79;
    char grade = 'A';
    string firstName = "Jesse ";
    std::string lastName = "Mirabel";
    bool isStressedOut = true;

/*  ---------          CONSTANTS          ----------------------------

        const   unchangeable and read-only
            const int minutesPerHour = 60;
*/   

/*  ---------          INPUT          --------------------------------

        cin   reads data from keyboard with-
        >>    extraction operator
*/    
    std::string answer;
    std::cout << "\n[Yes/No]: ";
    // std::cin >> answer;
    std::getline(std::cin, answer);
    std::cout << "\nHer: " << answer << std::endl;

/*  ---------          BASIC DATA TYPES          --------------------------------------

        Data Type       Size            Description
    
       boolean         1 byte          true or false values
       char            1 byte          single character, letter, number, or ASCII values
       int             2 or 4 bytes    whole numbers
       float           4 bytes         fractional numbers, stores 6-7 decimal digits
       double          8 bytes         fractional numbers, stores 15 decimal digits
*/

    name_space();

/*  ::    Scope Resolution Operator
            - helps access variables, functions, or classes defined in different scopes
*/    

    std::cout << "\n";
    return 0;   // ends main function
}
using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

//Indentation means the spacing of the code from the margin. This is coding best practise and improves code readability and makes your code
//look clean and beautiful. You may follow a two-space format. Observe how I have formatted your code. I might have missed some places as its hard
//to format already written code, but try to follow from now on.
//It will be easy if you follow a good text editor instead of using notepad or editor provided with turboC. Some good free editors are SublimeText, Atom.
//They will automatically format as you type. Start using those.

class flight
{
  private:
  string departure, destination;
  string name;
  int Fno, Sno;
  int del;
  
  public:
  flight ()    //C++ best practices tell us in a good class design we should always define constructor and destructor
  {            //In your case as you are not declaring objects using 'new' operator or using pointers, you dont need to define a destructor
    name = "";
    departure = "";
    destination = "";
    Sno = 0;
    Fno = 0;
  }

  void viewSchedule ();//DONE
  void bookTicket ();
  void seatCheck ();
  void deleteTicket ();
  void boardingPass ();
  void displayMessage();
};

void flight::displayMessage()    //breaking up your code into small blocks in order to avoid repetation
{
  cout << "\nRequest Processed.";
  cout << "\nBooking Cancelled";
  cout <<"\nThanks for choosing Targaryen Aviaton Servicea ~ Labeeb (CEO, T.A.S)";
}
void flight::seatCheck ()
{
  int seats[30], i;        //reducing the size of the array. as you have seen unused and uncleaned up memory during and after program runs
  bool is_booked = false;  //cause memory leak and hence crash. essentially we should be using a cevtor here, which is a dynamically allocated array i.e
                           //it increases in space as and when required.
  cout << "\nChecking Availability Of Seats...";
  cout << "\n";

  for (i = 0; i < 50; i++)   
  {
    if (seats[i] == 1)  //continue checking array until you find an unbooked seat
    { 
      continue;
    }
    else 
    {
      seats [i] = 1;   //once you find an emoty seat, book it and break out of loop. you don't need to continue loop and hence waste runtime
      is_booked = true;
      break;
    }
  }
  if (is_booked)
  {
    cout << "\nYour Seat Has Been Booked Succesfully";
    cout << "\nPlease view your boarding pass from the MAIN MENU";
    cout << "\nFrom all of us in T.A.S, We wish you a pleasant and comfortable journey.";
  }
  else
  {
    cout << "\nNo Seats Available\n";     //handle the case where all seats are booked
  }
  
}

void flight::viewSchedule()  //renamed function here
{
  cout << "\nLIST OF AVAILABLE FLIGHTS:-";
  cout <<
    "\nS.No F.NO    F. NAME             FROM      DESTINATION    TIME   DATE  ";
  cout <<
    "\n-----------------------------------------------------------------------";
  cout <<
    "\n1    H342.   JET AIRWAYS         BANGALORE  BBSR          12:30  14/07";
  cout <<
    "\n2    H435.   JET AIRWAYS         NEW DELHI  RANCHI        17:35  12/07";
  cout <<
    "\n3    G646.   AIR ASIA            BBSR       BENGALURU     17:45  17/07";
  cout <<
    "\n4    G078.   AIR ASIA            PATNA      MUMBAI        00:15  20/07";
  cout <<
    "\n5    S534.   AIR INDIA           MUMBAI     PATNA         15:15  27/07";
  cout <<
    "\n6    S435.   AIR INDIA           RANCHI     NEW DELHI     15:45  29/07";
  cout <<
    "\n7    A443.   SPICE JET           TRIVANDRUM AHMEDABAD     23:40  12/08";
  cout <<
    "\n8    B557.   INDIGO              AHMEDABAD  TRIVANDRUM    05:16  31/07";
  cout <<
    "\n9    F231.   VISTARA             MUMBAI     BANGALORE     18:00  23/07";
  cout <<
    "\n10   F123.   VISTARA             BANGALORE  MUMBAI        06:45  23/07";
  cout <<
    "\n11   B652.   INDIGO              BBSR       KOLKATA       18:20  28/07";
  cout <<
    "\n12   S412.   AIR INDIA           NEW DELHI  JAIPUR        03:10  25/07";
  cout <<
    "\n13   B256.   INDIGO              KOLKATA    BHUBANESWAR   04:50  02/08";
  cout <<
    "\n14   S214.   AIR INDIA           NEW DELHI  KOLKATA       09:15  02/08";
  cout <<
    "\n15   S839.   AIR INDIA           NEW DELHI  MUMBAI        19:15  06/08";
  cout <<
    "\n16   H786.   JET AIRWAYS         JAIPUR     NEW DELHI     21:55  05/08";
  cout <<
    "\n17   B324.   INDIGO              KOLKATA    NEW DELHI     09:15  02/08";
  cout <<
    "\n18   A432.   SPICE JET           MUMBAI     NEW DELHI     23:50  09/08";
  cout <<
    "\n19   S675.   AIR INDIA           BENGALURU  CHENNAI       00:35  18/09";
  cout <<
    "\n20   S576.   AIR INDIA           CHENNAI    BENGALURU     12:30  19/09";
  cout <<
    "\n21   B938.   INDIGO              PUDUCHERRY MANGALORE     13:05  12/09";
  cout <<
    "\n22   B109.   INDIGO              MANGALORE  PUDUCHERRRY   03:25  16/09";
  cout <<
    "\n23   F456.   VISTARA             HYDERABAD  AMRITSAR      14:50  12/08";
  cout <<
    "\n24   S354.   AIR INDIA           NEW DELHI  SHIMLA        12:35  15/08";
  cout <<
    "\n25   H323.   JET AIRWAYS         SHIMLA     NEW DELHI     23:40  15/08";
  cout <<
    "\n26   H675.   JET AIRWAYS         MUMBAI     AMRITSAR      12:35  12/09";
  cout <<
    "\n27   A477.   SPICE JET           NEW DELHI  SRINAGAR      05:15  23/08";
  cout <<
    "\n28   S343.   AIR INDIA           SRINAGAR   NEW DELHI     00:55  30/09";
  cout <<
    "\n29   S487.   AIR INDIA           PATNA      RANCHI        23:45  23/09";
  cout <<
    "\n30   F222.   VISTARA             RANCHI     PATNA         11:25  14/10";
  cout <<
    "\n31   A254.   SPICE JET           BHOPAL     DEHRADUN      12:45  14/10";
  cout <<
    "\n32   A212.   SPICE JET           DEHRADUN   RANCHI        16:15  17/10";
  cout <<
    "\n33   B879.   INDIGO              RANCHI     DEHRADUN      21:30  20/09";
  cout <<
    "\n34   B546.   INDIGO              DEHRADUN   BHOPAL        22:35  30/09";
  cout << "\n";
  cout <<
    "\n35   LAB1.   DANY'S VISERION     NEW DELHI  BANGALORE     00:00  25/07";
  cout << "\n              [EXCLUSIVE LUXURY ONE-ROUTE AIRLINE]";
  cout << "\n";
  cout <<
    "\n36   LAB2.   DANY'S VISERION     BANGALORE  NEW DELHI     12:00  25/07";
  cout << "\n              [EXCLUSIVE LUXURY ONE-ROUTE AIRLINE]";//36 FLIGHTS
  cout << "\n";
  cout << "\n";
}


void flight::bookTicket ()   //renaming to better describe function. always try to name your functions and variables such that
{                            //anyone can read and understand what is being done
  int ch1;
  cout << "\nENTER PASSENGER'S NAME:- ";
  cin >> name;
  cout << "\n";
  cout << "\nEnter inquired details of selected flight below in BOLD letters.";
  cout << "\nEnter serial number:-";
  cin >> Sno;
  cout << "\nEnter Flight Number:- ";
  cin >> Fno;
  cout << "\nEnter place of departure:- ";
  cin >> departure;
  cout << "\nEnter place of arrival:- ";
  cin >> destination;
  switch (Sno)  //better to use a switch here, as it is faster to evaluate than if-else conditions.
  {
      case 1:
      cout << "\nFLIGHT NUMBER H342 - JET AIRWAYS";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
  {
    seatCheck();       //you don't need to call this function with an object context. as we are already bound to f1 object at this point (through main)
  }
  else if (ch1 == 2)
  {
    displayMessage();  //try to break up repeating components of your code 
                       //into blocks(or modules) which can be called again and again instead of retyping the code multiple times
  }
  break;
  
  case 2:

      cout << "\nFLIGHT NUMBER H435 - JET AIRWAYS";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
  }
    break;
  case 3:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 4:

      cout << "\nFLIGHT NUMBER G078 - AIR ASIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
 case 5:

      cout << "\nFLIGHT NUMBER S534 - AIR INDIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
  case 6:
      cout << "\nFLIGHT NUMBER S534 - AIR INDIA";
      cout <<
"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
      }
      break;
   case 7:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 8:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 9:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 10:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 11:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 12:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 13:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 14:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 15:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 16:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 17:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
   case 18:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;
  case 19:
      cout << "\nFLIGHT NUMBER G646 - AIR ASIA";
      cout <<"\nWould you like to book this flight?(TYPE 1 FOR YES|| TYPE 2 FOR NO) :- ";
      cin >> ch1;
      if (ch1 == 1)
      {
        seatCheck();
      }
      else if (ch1 == 2)
      {
        displayMessage();
       }
       break;

   default:
        cout <<"\nInvalid Entry, try again!\n";
 }
}

int main ()
{
  int option;
  flight f1;  //using a more intutive name for object. if you have a second person trying to book flight, you can easily create more 
  cout << "\nWELCOME TO TARGARYEN AVIATION SERVICES.";
  cout << "\nMY NAME IS LABS, I'AM THE T.A.S HELPER BOT.";
  cout << "\nPLEASE CHOOSE YOUR REQUIRED OPERATION:- ";
  cout << "\n1. VIEW SCHEDULE";
  cout << "\n2. BOOK A TICKET";
  cout << "\n3. DELETE A TICKET ";
  cout << "\n4. VIEW BOARDING PASS";
  cout << "\n5. TRENDING";
  cout << "\n6. EXIT" << endl;
  cout << "\nYOUR CHOICE (1/2/3/4/5):-";
  cin >> option;
  switch (option)
  {
    case 1:
      f1.viewSchedule(); //as here you were only displaying the schedule, change the function name to explain what exactly it does
      break;
    case 2:
      f1.bookTicket(); //same for this function, renaming to better describe what it does
      break;
    default:
      cout<< "\nInvalid Input!";
      
  }
  getch ();
}

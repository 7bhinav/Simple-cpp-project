#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
// Number guessing game
//by abhinav
int main()
{
    int rndnumbr,guess,chance=0;
    srand(time(0));
    rndnumbr= rand()%100+1;
    cout<<"-------------WELCOME TO NUMBER GUESSING GAME-------------"<<endl;
    cout<<"Range of number is between 1 to 99"<<endl;
    do{ 
    cout<<"Enter Number"<<endl;
    cin>>guess;
     if(rndnumbr>guess){
        cout<<"Number Low"<<endl;
    }
    else if (rndnumbr<guess)
    {
        cout<<"Number High"<<endl;
      
    }
    else {
        cout<<"********* YOU GUESSED THE RIGHT NUMBER *********"<<endl;
        cout<<"NUMBER IS:"<<guess;
    }

    }
  while (guess!=rndnumbr);
  return 0;
}

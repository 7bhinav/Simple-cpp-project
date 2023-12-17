#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
// Number guessing game
int main()
{
    int rndnumbr,guess,chance=0;
    srand(time(0));
    rndnumbr= rand()%100+1;
    cout<<"-------------WELCOME TO NUMBER GUESSING GAME-------------"<<endl;
    cout<<"Range of number is between 1 to 99"<<endl;
    do{ 
    cout<<"Enter number"<<endl;
    cin>>guess;
     if(rndnumbr>guess){
        cout<<"Number low"<<endl;
    }
    else if (rndnumbr<guess)
    {
        cout<<"Number high"<<endl;
      
    }
    else {
        cout<<"********* YOU GUESSED THE RIGHT NUMBER *********"<<endl;
        cout<<"NUMBER IS:"<<guess;
    }

    }
  while (guess!=rndnumbr);
  return 0;
}

QUESTION 1.
Explain the term software evolution and why it is important. (7 marks)

#include <cstdlib>
#include <time.h>
#include <iostream>
 
using namespace std;
 
int main()
 {
      srand(time(0));
      int number,counter=0,count=0;
      number = rand() % 10 + 1;
      int guess;
      cout<<"YOU HAVE 15 TRIALS. EARN POINTS BY GUESSING THE CORRECT NUMBER."<<endl;
      do {
            cout << "Enter your estimate: "<<endl;
            cin >> guess;
            
            if (guess < number)
			{
            cout << "Your estimate is less, than the secret number" << endl;
			cout<<"THE NUMBER IS:"<<number<<endl<<endl;
			break;
			}
                     
            else if (guess > number)
			{
				cout << "Your estimate is more, than the secret number" << endl;
				cout<<"THE NUMBER IS:"<<number<<endl<<endl;
				break;
			}
             
            else
			{
                  cout << "Your guess is right!"<<endl;
                  count++;
				  cout<<"You have "<<count<<" POINTS"<<endl<<endl;
			}
	counter++;		
			
      } /*while (guess==number);the game will be unrealistic because the probability 
	  	of getting the first correct guess is low */
      while(counter<15);
      
      
      return 0;
}

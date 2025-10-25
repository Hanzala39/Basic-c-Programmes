#include <iostream>
using namespace std;

int main()
{

    int n = 5; // This describes the no of rows and width

    for (int i = 1; i <= n; i++) // This tells how much times  loop runs
    {
        for (int j = 1; j <= i; j++) // here the * printing process starts

        {
            cout << "*"; // This prints *
        }

        cout << endl; // Here it adds new line every time loops runs
    }

    return 0;
}

// SUMMARY

/*Firs we set n to 5 wich means how many rows we want or how much widht it should take

this program works like this first the outer loops executes at line 1 at same time inner loop executes and prints an * at first line after that at line 17 an cout fnction executes which takes the whole programme to next line

then outer loop again run but this time as the value of j is now 2 because of increment in its value because of j++ operator and same for value of i now the inner loop runs twice this time because j = 1 and also i = 2 then it runs and print 1 / and it will recheck the condition before it 1 is incremented in j and then rechecked the condition in inner loop

now the value of j = 2 and i = 2 which is again true now it prints another * on same line then process repeats but this time after increment in j it becomes j = 3 and i =3 the condition becomes j=3 where j<=i

where 3 <=2 which is false then loop ends and programme moves on the next line because of cout << endl; function*/